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
#include "Subsystem/IsdkITrackingDataSubsystem.h"
#include "NativeGameplayTags.h"
#include "IsdkRuntimeSettings.generated.h"

// Declaring our native Gameplay Tags
namespace IsdkGameplayTags
{
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Isdk_Type_Interactable_Ray)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Isdk_Type_Interactable_Poke)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Isdk_Type_Interactable_Grab)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Isdk_Type_Interactor_Ray)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Isdk_Type_Interactor_Poke)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Isdk_Type_Interactor_Grab)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Isdk_Flag_Interactable_HideHandOnSelect)
} // namespace IsdkGameplayTags

/**
 * Implements the settings for the ISDK MetaXR plugin.
 */
UCLASS(Config = Engine, DefaultConfig, DisplayName = "Meta XR - Interaction")
class OCULUSINTERACTION_API UIsdkRuntimeSettings : public UObject
{
  GENERATED_BODY()

 public:
  UPROPERTY(
      config,
      EditAnywhere,
      Category = "Tracking Data",
      meta = (MustImplement = "/Script/OculusInteraction.IsdkITrackingDataSubsystem"))
  TArray<TSubclassOf<USubsystem>> DisabledTrackingDataSubsystems;

  static UIsdkRuntimeSettings& Get()
  {
    return *GetMutableDefault<UIsdkRuntimeSettings>();
  }
};
