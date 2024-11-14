/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "IsdkHandVisual.h"
#include "DrawDebugHelpers.h"
#include "OculusInteractionLog.h"
#include "StructTypesPrivate.h"
#include "DataSources/IsdkIRootPose.h"
#include "isdk_api/isdk_api.hpp"
#include "ApiImpl.h"

#include "Animation/AnimInstance.h"
#include "Engine/SkeletalMesh.h"

#if defined(ENGINE_MAJOR_VERSION) && ENGINE_MAJOR_VERSION == 5
#include "Engine/SkinnedAsset.h"
#endif

#include <array>
#include <vector>

#include "IsdkChecks.h"

using isdk::api::ExternalHandPositionFrame;
using isdk::api::ExternalHandPositionFramePtr;

namespace isdk::api::helper
{
class FExternalHandPositionFrameImpl
    : public FApiImpl<ExternalHandPositionFrame, ExternalHandPositionFramePtr>
{
 public:
  explicit FExternalHandPositionFrameImpl(std::function<ExternalHandPositionFramePtr()> CreateFn)
      : FApiImpl(std::move(CreateFn))
  {
  }

  std::array<ovrpVector3f, UIsdkHandVisual::MappedBoneCount> WristSpaceJointLocations{};
};
} // namespace isdk::api::helper

UIsdkHandVisual::UIsdkHandVisual()
{
  PrimaryComponentTick.bCanEverTick = true;

  PrimaryComponentTick.bStartWithTickEnabled = false;
  bTickInEditor = true;
  PrimaryComponentTick.TickGroup = TG_PrePhysics;

  ClearMappingState();

  ExternalHandPositionFrameImpl =
      MakePimpl<isdk::api::helper::FExternalHandPositionFrameImpl, EPimplPtrMode::NoCopy>(
          [this]() -> ExternalHandPositionFramePtr
          {
            if (!ensureMsgf(
                    IsValid(JointsDataSource.GetObject()),
                    TEXT("%s: JointsDataSource must not be null"),
                    *GetFullName()))
            {
              return nullptr;
            }

            // Read Handedness
            auto Handedness = IIsdkIHandJoints::Execute_GetHandedness(JointsDataSource.GetObject());
            const auto ApiHandedness = static_cast<isdk_Handedness>(Handedness);

            // Read hand joint mappings
            const auto HandJointMappings =
                IIsdkIHandJoints::Execute_GetHandJointMappings(JointsDataSource.GetObject());
            std::vector<isdk_ExternalHandPositionFrame_ThumbJointMapping> ApiThumbJointMappings(
                HandJointMappings->ThumbJointMappings.Num());
            for (int Index = 0; Index < HandJointMappings->ThumbJointMappings.Num(); ++Index)
            {
              StructTypesUtils::Copy(
                  HandJointMappings->ThumbJointMappings[Index], ApiThumbJointMappings[Index]);
            }
            std::vector<isdk_ExternalHandPositionFrame_FingerJointMapping> ApiFingerJointMappings(
                HandJointMappings->FingerJointMappings.Num());
            for (int Index = 0; Index < HandJointMappings->FingerJointMappings.Num(); ++Index)
            {
              StructTypesUtils::Copy(
                  HandJointMappings->FingerJointMappings[Index], ApiFingerJointMappings[Index]);
            }

            // Read joint count
            const auto JointCount =
                IIsdkIHandJoints::Execute_GetHandData(JointsDataSource.GetObject())->GetNumJoints();
            if (!ensureMsgf(
                    JointCount > 0,
                    TEXT("%s: JointsDataSource HandData must have at least 1 joint defined."),
                    *GetFullName()))
            {
              return nullptr;
            }

            auto Instance = ExternalHandPositionFrame::create(
                ApiHandedness,
                ApiThumbJointMappings.data(),
                ApiThumbJointMappings.size(),
                ApiFingerJointMappings.data(),
                ApiFingerJointMappings.size(),
                JointCount);
            if (!UIsdkChecks::EnsureMsgfApiInstanceIsValid(Instance.IsValid(), this))
            {
              return nullptr;
            }

            if (MappingState == EIsdkSkeletonMappingState::Valid)
            {
              UpdateApiHandPositionFrame(Instance.Get());
            }

            return Instance;
          });
}

void UIsdkHandVisual::BeginPlay()
{
  Super::BeginPlay();
  InitializeSkeleton();
  if (ExternalHandPositionFrameImpl->IsInstanceValid() &&
      MappingState == EIsdkSkeletonMappingState::Valid)
  {
    UpdateApiHandPositionFrame(ExternalHandPositionFrameImpl->GetInstanceChecked());
  }
}

void UIsdkHandVisual::BeginDestroy()
{
  Super::BeginDestroy();

  ExternalHandPositionFrameImpl.Reset();
}

bool UIsdkHandVisual::IsApiInstanceValid() const
{
  return ExternalHandPositionFrameImpl->IsInstanceValid();
}

isdk::api::IHandPositionFrame* UIsdkHandVisual::TryGetApiIHandPositionFrame()
{
  if (IsDataSourceJointsValid() && IsDataSourceRootPoseValid() && RequiredBones.IsValid())
  {
    return ExternalHandPositionFrameImpl->GetOrCreateInstance();
  }
  return nullptr;
}

UObject* UIsdkHandVisual::GetSkeletalMesh()
{
#if defined(ENGINE_MAJOR_VERSION) && ENGINE_MAJOR_VERSION == 4
  return Cast<UObject>(SkeletalMesh);
#else
  return Cast<UObject>(GetSkinnedAsset());
#endif
}

void UIsdkHandVisual::InitializeSkeleton()
{
  // map bones to indices for quicker lookup
  for (int BoneNameIndex = 0; BoneNameIndex < (int)EIsdkHandBones::EHandBones_MAX; ++BoneNameIndex)
  {
    int BoneIndex = GetBoneIndex(MappedBoneNames[BoneNameIndex]);
    if (BoneIndex == INDEX_NONE)
    {
      SetInvalidMappingState(GetSkeletalMesh());
      UE_LOG(
          LogOculusInteraction,
          Error,
          TEXT("Bone %s has no valid bone name mapped to the skeleton."),
          *MappedBoneNames[BoneNameIndex].ToString());
      return;
    }
    MappedBoneIndices[BoneNameIndex] = BoneIndex;
  }
  SetValidMappingState(GetSkeletalMesh());
}

void UIsdkHandVisual::SetJointsDataSource(TScriptInterface<IIsdkIHandJoints> InJointsDataSource)
{
  UActorComponent* JointsActorComponent = Cast<UActorComponent>(JointsDataSource.GetObject());
  if (IsValid(JointsActorComponent))
  {
    RemoveTickPrerequisiteComponent(JointsActorComponent);
  }
  JointsDataSource = InJointsDataSource;

  // Ensure that this component ticks after the input component
  JointsActorComponent = Cast<UActorComponent>(JointsDataSource.GetObject());
  if (IsValid(JointsActorComponent))
  {
    AddTickPrerequisiteComponent(JointsActorComponent);
  }
}

void UIsdkHandVisual::SetRootPoseDataSource(TScriptInterface<IIsdkIRootPose> InRootPoseDataSource)
{
  UActorComponent* RootPoseActorComponent = Cast<UActorComponent>(RootPoseDataSource.GetObject());
  if (IsValid(RootPoseActorComponent))
  {
    RemoveTickPrerequisiteComponent(RootPoseActorComponent);
  }
  RootPoseDataSource = InRootPoseDataSource;

  // Ensure that this component ticks after the input component
  RootPoseActorComponent = Cast<UActorComponent>(RootPoseDataSource.GetObject());
  if (IsValid(RootPoseActorComponent))
  {
    AddTickPrerequisiteComponent(RootPoseActorComponent);
  }
}

void UIsdkHandVisual::TickComponent(
    float DeltaTime,
    enum ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  UpdateMappingState();
  UpdateSkeleton();
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
  UpdateChildTransforms();

  // Only update the native instance if it exists.
  if (ExternalHandPositionFrameImpl->IsInstanceValid() &&
      MappingState == EIsdkSkeletonMappingState::Valid)
  {
    UpdateApiHandPositionFrame(ExternalHandPositionFrameImpl->GetInstanceChecked());
  }

  // Enable this to see debug visuals for the skeleton in world space based on the HandJoints data
  if (bShowDebugSkeleton)
  {
    DrawDebugSkeleton();
  }
}

void UIsdkHandVisual::SetMappedBoneNamesAsDefault(EIsdkHandType HandType)
{
  MappedBoneNames[0] = FName("XRHand_Palm");
  MappedBoneNames[1] = FName("XRHand_Wrist");
  // ----- Thumb
  MappedBoneNames[2] = FName("XRHand_ThumbMetacarpal");
  MappedBoneNames[3] = FName("XRHand_ThumbProximal");
  MappedBoneNames[4] = FName("XRHand_ThumbDistal");
  MappedBoneNames[5] = FName("XRHand_ThumbTip");
  // ----- Index
  MappedBoneNames[6] = FName("XRHand_IndexMetacarpal");
  MappedBoneNames[7] = FName("XRHand_IndexProximal");
  MappedBoneNames[8] = FName("XRHand_IndexIntermediate");
  MappedBoneNames[9] = FName("XRHand_IndexDistal");
  MappedBoneNames[10] = FName("XRHand_IndexTip");
  // ----- Middle
  MappedBoneNames[11] = FName("XRHand_MiddleMetacarpal");
  MappedBoneNames[12] = FName("XRHand_MiddleProximal");
  MappedBoneNames[13] = FName("XRHand_MiddleIntermediate");
  MappedBoneNames[14] = FName("XRHand_MiddleDistal");
  MappedBoneNames[15] = FName("XRHand_MiddleTip");
  // ----- Ring
  MappedBoneNames[16] = FName("XRHand_RingMetacarpal");
  MappedBoneNames[17] = FName("XRHand_RingProximal");
  MappedBoneNames[18] = FName("XRHand_RingIntermediate");
  MappedBoneNames[19] = FName("XRHand_RingDistal");
  MappedBoneNames[20] = FName("XRHand_RingTip");
  // ----- Pinky
  MappedBoneNames[21] = FName("XRHand_LittleMetacarpal");
  MappedBoneNames[22] = FName("XRHand_LittleProximal");
  MappedBoneNames[23] = FName("XRHand_LittleIntermediate");
  MappedBoneNames[24] = FName("XRHand_LittleDistal");
  MappedBoneNames[25] = FName("XRHand_LittleTip");

  // Clear the mapping state, because the state was only valid for the
  // previous mapped names
  ClearMappingState();
}

void UIsdkHandVisual::ResetAllBoneTransforms()
{
#if defined(ENGINE_MAJOR_VERSION) && ENGINE_MAJOR_VERSION == 4
  auto SkinnedMesh = SkeletalMesh;
#else
  auto SkinnedMesh = GetSkinnedAsset();
#endif
  if (!IsValid(SkinnedMesh) || BoneSpaceTransforms.IsEmpty())
  {
    return;
  }
  BoneSpaceTransforms = SkinnedMesh->GetRefSkeleton().GetRefBonePose();
  MarkRefreshTransformDirty();
}

void UIsdkHandVisual::UpdateMappingState()
{
  // If the skeleton is not valid, then the mapping is invalid
  if (!IsValid(GetSkeletalMesh()))
  {
    SetInvalidMappingState(GetSkeletalMesh());
    return;
  }

  // Reset mapping state if skeletal mesh changed
  if (MappedSkeleton != GetSkeletalMesh())
  {
    ClearMappingState();
  }

  // Try to map the skeleton if there is no mapping and there is a valid joint data source
  if (MappingState == EIsdkSkeletonMappingState::None && IsValid(JointsDataSource.GetObject()))
  {
    if (!AreMappedBoneNamesValid())
    {
      SetMappedBoneNamesFromJointSourceHandedness();
    }
    InitializeSkeleton();
  }
}

void UIsdkHandVisual::UpdateSkeleton()
{
  if (MappingState != EIsdkSkeletonMappingState::Valid)
  {
    return;
  }

  // Root pose
  if (IsDataSourceRootPoseValid())
  {
    const auto RootPose = IIsdkIRootPose::Execute_GetRootPose(RootPoseDataSource.GetObject());
    SetWorldTransform(RootPose, false, nullptr, ETeleportType::TeleportPhysics);
  }

  // Joints
  if (IsDataSourceJointsValid())
  {
    const UIsdkHandData* HandData =
        IIsdkIHandJoints::Execute_GetHandData(JointsDataSource.GetObject());
    if (ensure(IsValid(HandData)))
    {
      const TArray<FTransform>& Poses = HandData->GetJointPoses();
      constexpr auto WristSpace = EBoneSpaces::Type::ComponentSpace;
      const int BoneCount = UIsdkHandData::GetNumJoints();
      for (int BoneId = 0; BoneId < BoneCount; BoneId++)
      {
        const FName BoneName = MappedBoneNames[BoneId];

        FTransform BoneTransform = GetBoneTransformByName(BoneName, WristSpace);
        BoneTransform.SetLocation(Poses[BoneId].GetLocation());
        BoneTransform.SetRotation(Poses[BoneId].GetRotation());
        SetBoneTransformByName(BoneName, BoneTransform, WristSpace);
      }
      MarkRefreshTransformDirty();
    }
  }
}

void UIsdkHandVisual::UpdateApiHandPositionFrame(ExternalHandPositionFrame& ApiHandPositionFrame)
{
  // Set Wrist Position
  const auto ApiWristPosition = StructTypesUtils::Convert(GetComponentLocation());
  ApiHandPositionFrame.setWristData(&ApiWristPosition);

  // Set Joint Positions
  const auto WristTransformInv = GetComponentTransform().Inverse();
  auto& ApiJointLocations = ExternalHandPositionFrameImpl->WristSpaceJointLocations;

  FA2CSPose CSPose;
  CSPose.AllocateLocalPoses(RequiredBones, GetBoneSpaceTransforms());
  for (int BoneId = 0; BoneId < MappedBoneCount; ++BoneId)
  {
    const int BoneIndex = MappedBoneIndices[BoneId];
    const auto WristSpaceTransform = CSPose.GetComponentSpaceTransform(BoneIndex);

    ApiJointLocations[BoneId] = StructTypesUtils::Convert(WristSpaceTransform.GetLocation());
  }

  ApiHandPositionFrame.setJointData(ApiJointLocations.data(), ApiJointLocations.size());
}

bool UIsdkHandVisual::IsDataSourceRootPoseValid() const
{
  UObject* Obj = RootPoseDataSource.GetObject();
  return IsValid(Obj) && IIsdkIRootPose::Execute_IsRootPoseValid(Obj);
}

bool UIsdkHandVisual::IsDataSourceJointsValid() const
{
  UObject* Obj = JointsDataSource.GetObject();
  return IsValid(Obj) && IIsdkIHandJoints::Execute_IsHandJointDataValid(Obj);
}

void UIsdkHandVisual::DrawTransformAxis(FTransform Pose)
{
  const FColor XColor = FColor::Red;
  const FColor YColor = FColor::Green;
  const FColor ZColor = FColor::Blue;

  const FVector JointOrigin = Pose.GetLocation();
  const FVector XAxisOffset = JointOrigin + Pose.GetUnitAxis(EAxis::X);
  const FVector YAxisOffset = JointOrigin + Pose.GetUnitAxis(EAxis::Y);
  const FVector ZAxisOffset = JointOrigin + Pose.GetUnitAxis(EAxis::Z);

  const auto Depth = ESceneDepthPriorityGroup::SDPG_Foreground;
  DrawDebugLine(GetWorld(), JointOrigin, XAxisOffset, XColor, false, 0.0, Depth, 0.3);
  DrawDebugLine(GetWorld(), JointOrigin, YAxisOffset, YColor, false, 0.0, Depth, 0.3);
  DrawDebugLine(GetWorld(), JointOrigin, ZAxisOffset, ZColor, false, 0.0, Depth, 0.3);
}

void UIsdkHandVisual::DrawDebugSkeleton()
{
  if (GetVisibleFlag() && IsDataSourceJointsValid())
  {
    const auto RootPose = IsDataSourceRootPoseValid()
        ? IIsdkIRootPose::Execute_GetRootPose(RootPoseDataSource.GetObject())
        : FTransform(FQuat(FVector::UnitX(), HALF_PI)) * GetComponentTransform();

    const TArray<FTransform>& JointPoses =
        IIsdkIHandJoints::Execute_GetHandData(JointsDataSource.GetObject())->GetJointPoses();

    const FTransform WristPose = JointPoses[uint8(EIsdkHandBones::HandWristRoot)] * RootPose;
    DrawTransformAxis(WristPose);

    const FTransform PalmPose = JointPoses[uint8(EIsdkHandBones::HandPalm)] * WristPose;
    DrawTransformAxis(PalmPose);

    for (int jointIndex = 2; jointIndex < JointPoses.Num(); jointIndex++)
    {
      const FTransform Pose = JointPoses[jointIndex] * WristPose;
      DrawTransformAxis(Pose);
    }
  }
}
