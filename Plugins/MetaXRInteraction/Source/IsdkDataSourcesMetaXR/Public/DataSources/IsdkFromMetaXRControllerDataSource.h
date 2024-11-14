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
#include "DataSources/IsdkIHandPointerPose.h"
#include "DataSources/IsdkIRootPose.h"
#include "DataSources/IsdkExternalHandDataSource.h"
#include "IsdkFromMetaXRControllerDataSource.generated.h"

// Forward declarations of internal types
namespace isdk::api
{
class ExternalHandSource;
}

UCLASS(
    ClassGroup = (InteractionSDK),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK From MetaXR Controller Data Source"))
class ISDKDATASOURCESMETAXR_API UIsdkFromMetaXRControllerDataSource
    : public UIsdkExternalHandDataSource,
      public IIsdkIHandPointerPose,
      public IIsdkIRootPose
{
  GENERATED_BODY()

 public:
  // Property Getters
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UMotionControllerComponent* GetMotionController() const
  {
    return MotionController;
  }

  // Sets default values for this component's properties
  UIsdkFromMetaXRControllerDataSource();
  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;
  // Property Setters
  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetMotionController(UMotionControllerComponent* InMotionController);

  virtual bool IsPointerPoseValid_Implementation() override
  {
    return bIsLastGoodPointerPoseValid;
  }

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

  virtual FTransform GetRootPose_Implementation() override
  {
    return MotionController->GetComponentTransform();
  }

  virtual bool IsRootPoseValid_Implementation() override
  {
    return bIsLastGoodRootPoseValid;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  virtual UIsdkConditional* IsRootPoseConnected_Implementation() override
  {
    return IsRootPoseConnected;
  }

 protected:
  // Called when the game starts
  virtual void BeginPlay() override;

 private:
  void ReadHandedness();
  void ReadControllerData();

  FTransform RelativePointerPose{};
  FTransform LastGoodRootPose{};

  bool bIsLastGoodRootPoseValid = false;
  bool bIsLastGoodPointerPoseValid = false;

  UPROPERTY(
      BlueprintGetter = GetMotionController,
      BlueprintSetter = SetMotionController,
      Category = InteractionSDK,
      meta = (ExposeOnSpawn = true))
  UMotionControllerComponent* MotionController;

  UPROPERTY()
  UIsdkConditionalBool* IsRootPoseConnected{};
  UPROPERTY()
  UIsdkConditionalBool* IsRootPoseHighConfidence{};
};
