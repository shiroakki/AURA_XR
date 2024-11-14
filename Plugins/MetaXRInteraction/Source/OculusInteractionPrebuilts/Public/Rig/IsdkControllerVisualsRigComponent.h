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
#include "IsdkTrackedDataSourceRigComponent.h"
#include "Core/IsdkConditionalGroupAll.h"
#include "IsdkControllerVisualsRigComponent.generated.h"

class UIsdkControllerVisual;

UENUM(BlueprintType)
enum class EControllerHandVisibilityMode : uint8
{
  Both UMETA(DisplayName = "Controller and Hands"),
  ControllerOnly UMETA(DisplayName = "Controller Only"),
  HandsOnly UMETA(DisplayName = "Hands Only")
};

UCLASS(ClassGroup = (InteractionSDK))
class OCULUSINTERACTIONPREBUILTS_API UIsdkControllerVisualsRigComponent
    : public UIsdkTrackedDataSourceRigComponent
{
  GENERATED_BODY()

 public:
  UIsdkControllerVisualsRigComponent();

  // must be called from Target's constructor.
  void SetSubobjectPropertyDefaults(EIsdkHandType InHandType);
  const FName OpenXRName = "OpenXR";
  virtual USceneComponent* GetTrackedVisual() const override;
  virtual USceneComponent* GetSyntheticVisual() const override
  {
    return nullptr;
  }

  virtual void GetDefaultInteractorSocket(USceneComponent*& SocketComponent, FName& SocketName)
      const override;

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  UIsdkControllerVisual* ControllerVisual{};

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK)
  EControllerHandVisibilityMode VisibilityMode = EControllerHandVisibilityMode::Both;

  UFUNCTION(BlueprintPure, Category = InteractionSDK)
  UIsdkConditionalGroupAll* GetEnabledConditional() const
  {
    return EnabledConditionalGroup;
  }

 protected:
  virtual FTransform GetCurrentSyntheticTransform() override
  {
    return FTransform::Identity;
  }

  virtual void OnDataSourcesCreated() override;
  UPROPERTY(BlueprintGetter = GetEnabledConditional, Category = InteractionSDK)
  UIsdkConditionalGroupAll* EnabledConditionalGroup{};
};
