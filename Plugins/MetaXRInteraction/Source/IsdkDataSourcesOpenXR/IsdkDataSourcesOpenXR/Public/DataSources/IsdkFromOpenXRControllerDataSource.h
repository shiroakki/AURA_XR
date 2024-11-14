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
#include "Components/ActorComponent.h"
#include "Core/IsdkConditionalBool.h"
#include "DataSources/IsdkExternalHandDataSource.h"
#include "DataSources/IsdkIHandPointerPose.h"
#include "DataSources/IsdkIRootPose.h"
#include "IsdkFromOpenXRControllerDataSource.generated.h"

namespace isdk::api
{
class ExternalHandSource;
}

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ISDKDATASOURCESOPENXR_API UIsdkFromOpenXRControllerDataSource
    : public UIsdkExternalHandDataSource,
      public IIsdkIHandPointerPose,
      public IIsdkIRootPose
{
  GENERATED_BODY()

 public:
  // Sets default values for this component's properties
  UIsdkFromOpenXRControllerDataSource();
  // Called every frame
  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UMotionControllerComponent* GetMotionController() const
  {
    return MotionController;
  }

  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetMotionController(UMotionControllerComponent* InMotionController);

  virtual bool IsPointerPoseValid_Implementation() override
  {
    return bIsLastGoodPointerPoseValid;
  }
  // For testing hand pointer pose - remove afer implementing isdkfromopenxrhanddatasource
  virtual void GetPointerPose_Implementation(FTransform& PointerPose, bool& IsValid) override
  {
    IsValid = bIsLastGoodPointerPoseValid && IsRootPoseConnected_Implementation();
    if (IsValid)
    {
      PointerPose = RelativePointerPose * MotionController->GetComponentTransform();
    }
  }

  virtual void GetRelativePointerPose_Implementation(FTransform& PointerRelativePose, bool& IsValid)
      override
  {
    IsValid = bIsLastGoodPointerPoseValid && IsRootPoseConnected_Implementation();
    if (IsValid)
    {
      PointerRelativePose = RelativePointerPose;
    }
  }

  virtual FTransform GetRootPose_Implementation() override;

  virtual bool IsRootPoseValid_Implementation() override
  {
    return bIsLastGoodRootPoseValid;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  virtual UIsdkConditional* IsRootPoseConnected_Implementation() override
  {
    return IsRootPoseConnected;
  }

 private:
  TArray<FVector> OutPositions;
  TArray<FQuat> OutRotations;
  TArray<float> OutRadii;

  UPROPERTY(
      BlueprintGetter = GetMotionController,
      BlueprintSetter = SetMotionController,
      Category = InteractionSDK,
      meta = (ExposeOnSpawn = true))
  UMotionControllerComponent* MotionController;

  void ReadControllerData();
  void ReadHandedness();

  FTransform RelativePointerPose{};
  FTransform LastGoodRootPose{};

  bool bIsLastGoodRootPoseValid;
  bool bIsLastGoodPointerPoseValid;

  UPROPERTY()
  UIsdkConditionalBool* IsRootPoseConnected{};

  UPROPERTY()
  UIsdkConditionalBool* IsRootPoseHighConfidence{};

  bool IsHandTrackingEnabled();
  bool GetGripPose(FTransform& OutGripPose);
};
