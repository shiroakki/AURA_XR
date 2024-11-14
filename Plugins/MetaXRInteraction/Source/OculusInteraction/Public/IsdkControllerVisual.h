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
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DataSources/IsdkIHandPointerPose.h"
#include "DataSources/IsdkIRootPose.h"
#include "IsdkControllerVisual.generated.h"

UCLASS(ClassGroup = (InteractionSDK), meta = (BlueprintSpawnableComponent))
class OCULUSINTERACTION_API UIsdkControllerVisual : public UStaticMeshComponent
{
  GENERATED_BODY()

 public:
  // Sets default values for this component's properties
  UIsdkControllerVisual();
  virtual void BeginPlay() override;
  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

  // Property Getters
  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIHandPointerPose> GetHandPointerPoseDataSource() const
  {
    return HandPointerPoseDataSource;
  }
  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIRootPose> GetRootPoseDataSource() const
  {
    return RootPoseDataSource;
  }
  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  USceneComponent* GetPointerPoseComponent() const
  {
    return PointerPoseComponent;
  }

  // Property Setters
  UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = InteractionSDK)
  void SetHandPointerPoseDataSource(
      TScriptInterface<IIsdkIHandPointerPose> InHandPointerPoseDataSource);
  UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = InteractionSDK)
  void SetRootPoseDataSource(TScriptInterface<IIsdkIRootPose> InRootPoseDataSource);

 protected:
  void UpdateController();

  UPROPERTY(
      BlueprintGetter = GetHandPointerPoseDataSource,
      BlueprintSetter = SetHandPointerPoseDataSource,
      EditAnywhere,
      Category = InteractionSDK)
  TScriptInterface<IIsdkIHandPointerPose> HandPointerPoseDataSource;

  UPROPERTY(
      BlueprintGetter = GetRootPoseDataSource,
      BlueprintSetter = SetRootPoseDataSource,
      EditAnywhere,
      Category = InteractionSDK)
  TScriptInterface<IIsdkIRootPose> RootPoseDataSource;

  UPROPERTY(BlueprintGetter = GetPointerPoseComponent, Category = InteractionSDK)
  USceneComponent* PointerPoseComponent{};
};
