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

#pragma once

#include "CoreMinimal.h"
#include "IsdkHandData.h"
#include "Components/PoseableMeshComponent.h"
#include "DataSources/IsdkHandDataSource.h"
#include "IsdkHandVisual.generated.h"

class IIsdkIRootPose;

// Forward declarations of internal types
namespace isdk::api
{
class IHandPositionFrame;
class ExternalHandPositionFrame;

namespace helper
{
class FExternalHandPositionFrameImpl;
}
} // namespace isdk::api

UENUM()
enum class EIsdkSkeletonMappingState : uint8
{
  // Possible to map
  None,
  // Tried to map but failed
  Invalid,
  // Mapping was successful
  Valid
};

UCLASS(
    Blueprintable,
    ClassGroup = (InteractionSDK),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Hand Visual Component"))
class OCULUSINTERACTION_API UIsdkHandVisual : public UPoseableMeshComponent
{
  GENERATED_BODY()

 public:
  UIsdkHandVisual();
  virtual void BeginPlay() override;
  virtual void BeginDestroy() override;

  bool IsApiInstanceValid() const;

  // If this component's dependencies are ready, try and create/get the native hand position frame
  // instance. Otherwise, return nullptr.
  isdk::api::IHandPositionFrame* TryGetApiIHandPositionFrame();

  // Property Getters
  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIHandJoints> GetJointsDataSource() const
  {
    return JointsDataSource;
  }
  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIRootPose> GetRootPoseDataSource() const
  {
    return RootPoseDataSource;
  }

  // Property Setters
  UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = InteractionSDK)
  void SetJointsDataSource(TScriptInterface<IIsdkIHandJoints> InJointsDataSource);
  UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = InteractionSDK)
  void SetRootPoseDataSource(TScriptInterface<IIsdkIRootPose> InRootPoseDataSource);

  virtual void TickComponent(
      float DeltaTime,
      enum ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

  inline static constexpr size_t MappedBoneCount =
      static_cast<size_t>(EIsdkHandBones::EHandBones_MAX);

  UPROPERTY(EditAnywhere, Category = InteractionSDK)
  FName MappedBoneNames[MappedBoneCount];

  // Set each value of the MappedBoneNames array to defaults for the provided hand mesh, for the
  // given hand type.
  void SetMappedBoneNamesAsDefault(EIsdkHandType IsdkHand);
  UFUNCTION(CallInEditor, BlueprintCallable, Category = InteractionSDK)
  void SetMappedBoneNamesFromJointSourceHandedness()
  {
    if (!IsValid(JointsDataSource.GetObject()))
    {
      return;
    }
    auto Handedness = IIsdkIHandJoints::Execute_GetHandedness(JointsDataSource.GetObject());
    auto HandType =
        Handedness == EIsdkHandedness::Left ? EIsdkHandType::HandLeft : EIsdkHandType::HandRight;
    SetMappedBoneNamesAsDefault(HandType);
  }
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  EIsdkSkeletonMappingState GetMappingState() const
  {
    return MappingState;
  }
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void ClearMappingState()
  {
    ResetAllBoneTransforms();
    MappingState = EIsdkSkeletonMappingState::None;
    MappedSkeleton = nullptr;
  }

  UPROPERTY(EditAnywhere, Category = InteractionSDK)
  bool bShowDebugSkeleton = false;

 private:
  int MappedBoneIndices[MappedBoneCount];
  UPROPERTY(
      VisibleAnywhere,
      Transient,
      BlueprintGetter = GetMappingState,
      Category = InteractionSDK)
  EIsdkSkeletonMappingState MappingState;
  UPROPERTY(Transient)
  UObject* MappedSkeleton;
  void SetInvalidMappingState(UObject* Skeleton)
  {
    MappingState = EIsdkSkeletonMappingState::Invalid;
    MappedSkeleton = Skeleton;
  }
  void SetValidMappingState(UObject* Skeleton)
  {
    MappingState = EIsdkSkeletonMappingState::Valid;
    MappedSkeleton = Skeleton;
  }
  void ResetAllBoneTransforms();

  // If there are no bones with NAME_None, assume it is valid
  bool AreMappedBoneNamesValid() const
  {
    for (auto Name : MappedBoneNames)
    {
      if (Name == NAME_None)
      {
        return false;
      }
    }
    return true;
  }

  UObject* GetSkeletalMesh();

  void InitializeSkeleton();
  void UpdateMappingState();
  void UpdateSkeleton();
  void UpdateApiHandPositionFrame(isdk::api::ExternalHandPositionFrame& ApiHandPositionFrame);

  bool IsDataSourceRootPoseValid() const;
  bool IsDataSourceJointsValid() const;

  void DrawTransformAxis(FTransform Pose);
  void DrawDebugSkeleton();

  UPROPERTY(
      BlueprintGetter = GetJointsDataSource,
      BlueprintSetter = SetJointsDataSource,
      EditAnywhere,
      Category = InteractionSDK)
  TScriptInterface<IIsdkIHandJoints> JointsDataSource;

  UPROPERTY(
      BlueprintGetter = GetRootPoseDataSource,
      BlueprintSetter = SetRootPoseDataSource,
      EditAnywhere,
      Category = InteractionSDK)
  TScriptInterface<IIsdkIRootPose> RootPoseDataSource;

  TPimplPtr<isdk::api::helper::FExternalHandPositionFrameImpl> ExternalHandPositionFrameImpl;
};
