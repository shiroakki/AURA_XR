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
#include "MotionControllerComponent.h"
#include "Core/IsdkConditionalBool.h"
#include "DataSources/IsdkExternalHandDataSource.h"
#include "DataSources/IsdkIHandPointerPose.h"
#include "DataSources/IsdkIRootPose.h"
#include "IsdkFromOpenXRHandDataSource.generated.h"

// Forward declarations of internal types
namespace isdk::api
{
class ExternalHandSource;
}

UCLASS(ClassGroup = (InteractionSDK), meta = (BlueprintSpawnableComponent))
class ISDKDATASOURCESOPENXR_API UIsdkFromOpenXRHandDataSource : public UIsdkExternalHandDataSource,
                                                                public IIsdkIHandPointerPose,
                                                                public IIsdkIRootPose
{
  GENERATED_BODY()

 public:
  // Sets default values for this component's properties
  UIsdkFromOpenXRHandDataSource();
  virtual void InitializeComponent() override;

  // Called every frame
  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

  virtual bool IsPointerPoseValid_Implementation() override
  {
    return bIsLastGoodPointerPoseValid;
  }

  virtual bool IsRootPoseValid_Implementation() override
  {
    return bIsLastGoodRootPoseValid;
  }

  virtual FTransform GetRootPose_Implementation() override;

  virtual void GetPointerPose_Implementation(FTransform& PointerPose, bool& IsValid) override;

  virtual void GetRelativePointerPose_Implementation(FTransform& PointerRelativePose, bool& IsValid)
      override
  {
    PointerRelativePose = RelativePointerPose;
    IsValid = bIsLastGoodPointerPoseValid;
  }

  // Property Getters
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UMotionControllerComponent* GetMotionController() const
  {
    return MotionController;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  bool GetAllowInvalidTrackedData() const
  {
    return bAllowLowConfidenceData;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  virtual UIsdkConditional* IsRootPoseConnected_Implementation() override
  {
    return IsRootPoseConnected;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  virtual UIsdkConditional* IsRootPoseHighConfidence_Implementation() override
  {
    return IsRootPoseHighConfidence;
  }

  // Property Setters
  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetMotionController(UMotionControllerComponent* InMotionController);
  void DrawDebugWidgets();
  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetAllowInvalidTrackedData(bool bInAllowInvalidTrackedData)
  {
    bAllowLowConfidenceData = bInAllowInvalidTrackedData;
  }

 private:
  void ReadHandData();
  void ReadHandedness();

  FTransform RelativePointerPose{};
  TArray<FVector> OutPositions;
  TArray<FQuat> OutRotations;
  TArray<float> OutRadii;

  bool bIsLastGoodRootPoseValid = false;
  bool bIsLastGoodPointerPoseValid = false;

  UPROPERTY(
      BlueprintGetter = GetAllowInvalidTrackedData,
      BlueprintSetter = SetAllowInvalidTrackedData,
      Category = InteractionSDK)
  bool bAllowLowConfidenceData = false;
  bool bHasLastKnownGood = false;

  UPROPERTY(
      BlueprintGetter = GetMotionController,
      BlueprintSetter = SetMotionController,
      Category = InteractionSDK,
      meta = (ExposeOnSpawn = true))
  UMotionControllerComponent* MotionController;

  FTransform LastGoodRootPose{};

  UPROPERTY()
  UIsdkConditionalBool* IsRootPoseConnected{};
  UPROPERTY()
  UIsdkConditionalBool* IsRootPoseHighConfidence{};

  UPROPERTY()
  TArray<float> DefaultJointRadii;
};
