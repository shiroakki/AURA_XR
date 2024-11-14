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
#include "IsdkHandVisual.h"
#include "Subsystem/IsdkITrackingDataSubsystem.h"
#include "Components/ActorComponent.h"
#include "IsdkGrabInteractionRigComponent.generated.h"

class UIsdkConditionalComponentIsActive;
class UIsdkConditionalGroupAll;
class UIsdkGrabberComponent;
class UIsdkHandFingerPinchGrabRecognizer;
class UIsdkHandPalmGrabRecognizer;
class UInputAction;
class UEnhancedInputComponent;

UCLASS(ClassGroup = (InteractionSDK))
class OCULUSINTERACTIONPREBUILTS_API UIsdkGrabInteractionRigComponent : public UActorComponent
{
  GENERATED_BODY()

 public:
  UIsdkGrabInteractionRigComponent();
  virtual void InitializeComponent() override;

  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

  void BindDataSources(
      const FIsdkTrackingDataSources& DataSources,
      TScriptInterface<IIsdkIHmdDataSource>& HmdDataSourceIn,
      USceneComponent* AttachToComponent,
      FName AttachToComponentSocket);
  void BindInputActions(
      UEnhancedInputComponent* EnhancedInputComponent,
      UInputAction* InPinchGrabSelectAction);
  void BindInputHandPinch(
      UIsdkHandVisual* SyntheticHandVisual,
      EIsdkFingerType FingerType = EIsdkFingerType::Index);
  void UpdatePinchCollider(bool isGrabbing);

  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  UIsdkGrabberComponent* Grabber;
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  UIsdkHandFingerPinchGrabRecognizer* GrabSelectPose;
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  UIsdkHandPalmGrabRecognizer* PalmGrabSelectPose;
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  FName ThumbTipSocketName;
  UFUNCTION(BlueprintPure, Category = InteractionSDK)
  UIsdkConditionalGroupAll* GetEnabledConditional() const
  {
    return EnabledConditionalGroup;
  }

  UPROPERTY()
  TScriptInterface<IIsdkIRootPose> HandRootPose{};

  UPROPERTY()
  TScriptInterface<IIsdkIHmdDataSource> HmdDataSource{};

 private:
  UFUNCTION()
  void HandleIsEnabledConditionalChanged(bool bIsEnabled);

  UPROPERTY(BlueprintGetter = GetEnabledConditional, Category = InteractionSDK)
  UIsdkConditionalGroupAll* EnabledConditionalGroup{};
  UPROPERTY()
  UIsdkConditionalComponentIsActive* IsActiveConditional{};
  UPROPERTY()
  bool LastIsGrabbing = true;

  FTransform GetHandBoneTransform(FName BoneName) const;
};
