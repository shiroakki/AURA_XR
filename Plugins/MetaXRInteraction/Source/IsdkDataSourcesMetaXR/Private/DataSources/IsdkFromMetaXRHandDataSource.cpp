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

#include "DataSources/IsdkFromMetaXRHandDataSource.h"

#include "DrawDebugHelpers.h"
#include "IsdkDataSourcesMetaXR.h"
#include "IsdkOculusXRHelper.h"
#include "Core/IsdkConditionalBool.h"
#include "IsdkFunctionLibrary.h"

namespace
{
const FQuat HandRootFixupRotationLeft = FQuat(FVector::UnitX(), HALF_PI);
const FQuat HandRootFixupRotationRight = FQuat(FVector::UnitX(), -HALF_PI);

const FQuat HandRootInvFixupRotationLeft = FQuat(FVector::UnitX(), -HALF_PI);
const FQuat HandRootInvFixupRotationRight = FQuat(FVector::UnitX(), HALF_PI);

const FQuat OVRToOXRLeft = FQuat(FVector::UnitY(), -HALF_PI) * FQuat(FVector::UnitZ(), PI);
const FQuat OVRToOXRRight = FQuat(FVector::UnitY(), HALF_PI);
} // namespace

UIsdkFromMetaXRHandDataSource::UIsdkFromMetaXRHandDataSource() : MotionController(nullptr)
{
  PrimaryComponentTick.bCanEverTick = true;
  PrimaryComponentTick.bStartWithTickEnabled = true;
  PrimaryComponentTick.TickGroup = TG_PrePhysics;
  PrimaryComponentTick.SetTickFunctionEnable(true);

  IsRootPoseConnected = NewObject<UIsdkConditionalBool>(this, TEXT("IsRootPoseConnected"));
  IsRootPoseHighConfidence =
      NewObject<UIsdkConditionalBool>(this, TEXT("IsRootPoseHighConfidence"));

  bIsLastGoodRootPoseValid = false;
  bIsLastGoodPointerPoseValid = false;
  bAllowLowConfidenceData = false;
  bHasLastKnownGood = false;
  bWantsInitializeComponent = true;

  DefaultJointRadii = UIsdkFunctionLibrary::GetDefaultJointRadii();
}

void UIsdkFromMetaXRHandDataSource::InitializeComponent()
{
  Super::InitializeComponent();

  const auto ThumbJointMappings = UIsdkFunctionLibrary::GetDefaultOpenXRThumbMapping();
  const auto FingerJointMappings = UIsdkFunctionLibrary::GetDefaultOpenXRFingerMapping();

  SetHandJointMappings(ThumbJointMappings, FingerJointMappings);
}

void UIsdkFromMetaXRHandDataSource::TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  const auto& MetaXRModule = FIsdkDataSourcesMetaXRModule::GetChecked();
  const bool bIsHandTrackingEnabled = MetaXRModule.Input_IsHandTrackingEnabled();

  if (bIsHandTrackingEnabled && MotionController)
  {
    ReadHandData();

    // Enable this to see debug visuals for the wrist position, aim/pointer ray origin and direction
    // after the tracking->world transform has been applied. Ie, the final world space position of
    // those data.
    if constexpr (false)
    {
      DrawDebugWidgets();
    }
  }
  else
  {
    IsRootPoseHighConfidence->SetValue(false);
    bIsLastGoodPointerPoseValid = false;
    bIsLastGoodRootPoseValid = false;
  }

  // Checking if the motion controller is being tracked solves the "static in mid air" problem
  // when switching from hands to controllers, when only one controller has connected.
  IsRootPoseConnected->SetValue(
      MotionController && bIsHandTrackingEnabled && MotionController->IsTracked());

  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UIsdkFromMetaXRHandDataSource::ReadHandData()
{
  const auto& MetaXRModule = FIsdkDataSourcesMetaXRModule::GetChecked();

  const bool bIsHighConfidenceData = MetaXRModule.Input_IsTrackingHighConfidence(Handedness);

  bool CanUseHandData = MetaXRModule.Input_IsHandPositionValid(Handedness);
  CanUseHandData &= bAllowLowConfidenceData || bIsHighConfidenceData;
  if (CanUseHandData)
  {
    if (BoneMap.IsEmpty())
    {
      GenerateBoneMap();
    }

    bHasLastKnownGood = true;

    // Root Pose
    LastGoodRootPose = GetRootPose_Implementation();
    IsRootPoseHighConfidence->SetValue(bIsHighConfidenceData);
    bIsLastGoodRootPoseValid = true;

    // Pointer pose
    RelativePointerPose = FIsdkOculusXRHelper::GetPointerPose(Handedness, MotionController);
    bIsLastGoodPointerPoseValid = !RelativePointerPose.Equals(FTransform());

    // set the wrist bone pose
    TArray<FTransform>& JointPoses = HandData->GetJointPoses();

    // Required to fix the orientation of the hands
    // As far as I can tell can be removed when the skeleton V2 is shipped
    const bool bIsLeft = Handedness == EIsdkHandedness::Left;
    const FQuat OVRToOXRRotation = bIsLeft ? OVRToOXRLeft : OVRToOXRRight;
    const FQuat InvWristRotation =
        bIsLeft ? HandRootInvFixupRotationLeft : HandRootInvFixupRotationRight;
    const FQuat MetacarpalRotation =
        bIsLeft ? FQuat(FVector::UnitX(), HALF_PI) : FQuat(FVector::UnitX(), -HALF_PI);

    // set the bone poses
    FTransform WristPose = FTransform::Identity;
    JointPoses[1] = WristPose;

    for (const auto& Bone : BoneMap)
    {
      FTransform Pose{};
      if (!Bone.OVRBoneName.IsNone())
      {
        Pose = OculusXrHandComponent->GetBoneTransformByName(
            Bone.OVRBoneName, EBoneSpaces::Type::ComponentSpace);
        Pose.SetRotation(Pose.GetRotation() * OVRToOXRRotation);
        Pose.SetScale3D(FVector::One());
      }
      else
      {
        const FQuat YRot = FQuat(FVector::UnitY(), Bone.OXRRotation);
        Pose = FTransform(MetacarpalRotation * YRot, Bone.OXRWristOffset);
      }
      Pose = Pose * FTransform(InvWristRotation);
      JointPoses[Bone.OXRBoneIndex] = Pose;
    }

    if (IsValid(HandDataInbound))
    {
      HandDataInbound->SetCachedJointPoses(JointPoses);
    }

    // set the bone radii
    TArray<float>& JointRadii = HandData->GetJointRadii();
    float HandScale = LastGoodRootPose.GetScale3D().X; // Scale should be the same for all axis
    for (int JointIndex = 0; JointIndex < JointRadii.Num(); JointIndex++)
    {
      JointRadii[JointIndex] = DefaultJointRadii[JointIndex] * HandScale;
    }

    SetImplHandData(LastGoodRootPose);
    bIsHandJointDataValid = true;
  }
  else if (bHasLastKnownGood)
  {
    // No high confidence data, keep state from last known good.
  }
  else
  {
    // No high confidence data, no available last known good.
    IsRootPoseHighConfidence->SetValue(false);
    bIsLastGoodRootPoseValid = false;
    bIsLastGoodPointerPoseValid = false;
    bIsHandJointDataValid = false;
    RelativePointerPose = {};
  }
}

void UIsdkFromMetaXRHandDataSource::DrawDebugWidgets()
{
  constexpr float DebugPointSizeSmall = 10.0f;
  constexpr float DebugPointSizeMedium = 15.0f;
  constexpr float DebugPointSizeLarge = 20.0f;
  constexpr float DebugRayLength = 50.0f;

  DrawDebugPoint(
      GetWorld(),
      RelativePointerPose.GetLocation(),
      DebugPointSizeLarge,
      FColor::Blue); // pointer pose, local space

  DrawDebugPoint(
      GetWorld(),
      MotionController->GetComponentTransform().GetLocation(),
      DebugPointSizeSmall,
      FColor::Black); // wrist

  FTransform PointerPose;
  bool PointerPoseValid;
  // pointer pose, world space
  Execute_GetPointerPose(this, PointerPose, PointerPoseValid);
  DrawDebugPoint(
      GetWorld(),
      PointerPose.GetLocation(),
      DebugPointSizeMedium,
      PointerPoseValid ? FColor::Green : FColor::Red);

  // line from pointer pose, in the direction of the pointer ray
  const FVector RayEndPosition = PointerPose.TransformPosition({DebugRayLength, 0, 0});
  DrawDebugLine(GetWorld(), PointerPose.GetLocation(), RayEndPosition, FColor::Black);
}

FTransform UIsdkFromMetaXRHandDataSource::GetRootPose_Implementation()
{
  FTransform MotionTransform = MotionController->GetComponentTransform();
  const FQuat WristRotation =
      Handedness == EIsdkHandedness::Left ? HandRootFixupRotationLeft : HandRootFixupRotationRight;
  MotionTransform.SetRotation(MotionTransform.GetRotation() * WristRotation);
  return MotionTransform;
}

void UIsdkFromMetaXRHandDataSource::GetPointerPose_Implementation(
    FTransform& PointerPose,
    bool& IsValid)
{
  if (MotionController)
  {
    PointerPose = RelativePointerPose * MotionController->GetComponentTransform();
    IsValid = bIsLastGoodPointerPoseValid;
  }
  else
  {
    IsValid = false;
  }
}

void UIsdkFromMetaXRHandDataSource::SetUintEnumProperty(
    UObject* Target,
    FName InName,
    uint8 EnumValue)
{
  FProperty* Property = Target->GetClass()->FindPropertyByName(InName);
  FEnumProperty* TypedProperty = CastField<FEnumProperty>(Property);
  FNumericProperty* EnumNumericProperty = TypedProperty->GetUnderlyingProperty();
  void* PropertyAddress = Property->ContainerPtrToValuePtr<void>(Target);
  EnumNumericProperty->SetIntPropertyValue(PropertyAddress, uint64(EnumValue));
}

void UIsdkFromMetaXRHandDataSource::GenerateBoneMap()
{
  TArray<FName> BoneNames = TArray<FName>();
  OculusXrHandComponent->GetBoneNames(BoneNames);

  BoneMap.Empty();
  // BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(FName("Wrist Root"), 1)); Already set manually
  const auto PalmOffset = Handedness == EIsdkHandedness::Left ? FVector(-0.145789, 5.974506, 1.9)
                                                              : FVector(0.311415, -6.273499, -1.9);
  BoneMap.Add(FBoneOVRToOXRMap::MappedOffset(0, PalmOffset, 0.0));

  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(2, BoneNames[3])); // HandThumb1 = 2
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(3, BoneNames[4])); // HandThumb2 = 3
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(4, BoneNames[5])); // HandThumb3 = 4
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(5, BoneNames[19])); // HandThumbTip = 5

  const float RotationMult = Handedness == EIsdkHandedness::Left ? -1.0 : 1.0;

  const auto Index0Offset = Handedness == EIsdkHandedness::Left
      ? FVector(2.004335, 3.778780, 0.284375)
      : FVector(-1.908977, -3.500033, -0.284375);
  const float IndexRotation = RotationMult * PI * 0.1;
  BoneMap.Add(FBoneOVRToOXRMap::MappedOffset(6, Index0Offset, IndexRotation)); // HandIndex0 = 6
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(7, BoneNames[6])); // HandIndex1 = 7
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(8, BoneNames[7])); // HandIndex2 = 8
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(9, BoneNames[8])); // HandIndex3 = 9
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(10, BoneNames[20])); // HandIndexTip = 10

  const auto Middle0Offset = Handedness == EIsdkHandedness::Left
      ? FVector(0.383252, 3.780457, -0.507344)
      : FVector(-0.295005, -3.552834, 0.507344);
  BoneMap.Add(FBoneOVRToOXRMap::MappedOffset(11, Middle0Offset, 0.0)); // HandMiddle0 = 11
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(12, BoneNames[9])); // HandMiddle1 = 12
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(13, BoneNames[10])); // HandMiddle2 = 13
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(14, BoneNames[11])); // HandMiddle3 = 14
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(15, BoneNames[21])); // HandMiddleTip = 15

  const auto Ring0Offset = Handedness == EIsdkHandedness::Left
      ? FVector(-1.035655, 3.796854, -0.203718)
      : FVector(0.993480, -3.424118, 0.203718);
  const float RingRotation = RotationMult * -PI * 0.1;
  BoneMap.Add(FBoneOVRToOXRMap::MappedOffset(16, Ring0Offset, RingRotation)); // HandRing0 = 16
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(17, BoneNames[12])); // HandRing1 = 17
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(18, BoneNames[13])); // HandRing2 = 18
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(19, BoneNames[14])); // HandRing3 = 19
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(20, BoneNames[22])); // HandRingTip = 20

  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(21, BoneNames[15])); // HandPinky0 = 21
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(22, BoneNames[16])); // HandPinky1 = 22
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(23, BoneNames[17])); // HandPinky2 = 23
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(24, BoneNames[18])); // HandPinky3 = 24
  BoneMap.Add(FBoneOVRToOXRMap::MappedIndex(25, BoneNames[23])); // HandPinkyTip = 25,
}

void UIsdkFromMetaXRHandDataSource::SetMotionController(
    UMotionControllerComponent* InMotionController)
{
  if (IsValid(MotionController))
  {
    RemoveTickPrerequisiteComponent(MotionController);
  }
  MotionController = InMotionController;

  // Ensure that this component ticks after the input component
  if (IsValid(MotionController))
  {
    AddTickPrerequisiteComponent(MotionController);
    ReadHandedness();

    // MetaXR's OculusXRHandComponent is being used to help us generate the OXR shaped data while
    // the Skeleton V2 API is not available in Unreal. We could have transformed the current OVR
    // data into OXR by transforming the rotations but we would still need the joint length
    // information plus transform from joint local space to wrist space ourselfs, but this is mostly
    // taken care of by using this component.
    const auto ComponentClass =
        TSubclassOf<UActorComponent>(FindFirstObjectSafe<UClass>(TEXT("OculusXRHandComponent")));
    if (!IsValid(OculusXrHandComponent))
    {
      OculusXrHandComponent = Cast<UPoseableMeshComponent>(
          GetOwner()->AddComponentByClass(ComponentClass, false, FTransform::Identity, true));
      uint8 HandIndex = uint8(Handedness) + 1;
      SetUintEnumProperty(OculusXrHandComponent, "SkeletonType", HandIndex);
      SetUintEnumProperty(OculusXrHandComponent, "MeshType", HandIndex);
      OculusXrHandComponent->SetVisibility(false);
      OculusXrHandComponent->bHiddenInGame = true;
      GetOwner()->FinishAddComponent(OculusXrHandComponent, true, FTransform::Identity);
    }
  }
}

void UIsdkFromMetaXRHandDataSource::ReadHandedness()
{
  Handedness = FIsdkOculusXRHelper::ReadHandedness(MotionController);
}

void UIsdkFromMetaXRHandDataSource::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
  Super::EndPlay(EndPlayReason);
}
