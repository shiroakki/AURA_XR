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
#include "Components/ActorComponent.h"
#include "IsdkInputActionsRigComponent.generated.h"

class UInputAction;

/**
 *
 */
UCLASS(ClassGroup = (InteractionSDK))
class OCULUSINTERACTIONPREBUILTS_API UIsdkInputActionsRigComponent : public UActorComponent
{
  GENERATED_BODY()
 public:
  UIsdkInputActionsRigComponent();

  // must be called from Target's constructor.
  void SetSubobjectPropertyDefaults(EIsdkHandType InHandType);

#if WITH_EDITOR
  void CheckForErrors();
#endif

  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  UInputAction* SelectAction{};
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  UInputAction* SelectStrengthAction{};
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  UInputAction* GrabSelectAction{};
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  UInputAction* GrabSelectStrengthAction{};
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  UInputAction* PinchGrabAction{};
};
