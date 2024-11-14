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

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"

#include "StructTypes.h"
#include "Subsystem/IsdkITrackingDataSubsystem.h"

#include "IsdkFunctionLibrary.generated.h"

class UWidget;

UCLASS(BlueprintType)
class OCULUSINTERACTION_API UIsdkFunctionLibrary final : public UBlueprintFunctionLibrary
{
  GENERATED_BODY()

 public:
  // Helpers
  UFUNCTION(BlueprintPure, Category = InteractionSDK, meta = (NativeMakeFunc))
  static TArray<FIsdkBoundsClipper> MakeBoundsClippersFromPose(
      const TScriptInterface<IIsdkIPose>& InPose,
      const FVector2D Size);

  /**
   * @brief Finds the tracking subsystem for the given actor
   * @param World which world contains the subsystem
   */
  UFUNCTION(BlueprintPure, Category = InteractionSDK, meta = (NativeMakeFunc))
  static TScriptInterface<IIsdkITrackingDataSubsystem> FindTrackingDataSubsystem(UWorld* World);

  UFUNCTION(BlueprintPure, Category = InteractionSDK)
  static FIsdkExternalHandPositionFrame_ThumbJointMapping MapXrThumbJoint(
      EIsdkThumbJoint Joint,
      int Index)
  {
    FIsdkExternalHandPositionFrame_ThumbJointMapping Mapping;
    Mapping.Joint = Joint;
    Mapping.Index = Index;
    return Mapping;
  }

  UFUNCTION(BlueprintPure, Category = InteractionSDK)
  static FIsdkExternalHandPositionFrame_FingerJointMapping
  MapXrFingerJoint(EIsdkFingerType Finger, EIsdkFingerJoint Joint, int Index)
  {
    FIsdkExternalHandPositionFrame_FingerJointMapping Mapping;
    Mapping.Finger = Finger;
    Mapping.Joint = Joint;
    Mapping.Index = Index;
    return Mapping;
  }
  UFUNCTION(BlueprintPure, Category = InteractionSDK)
  static TArray<FIsdkExternalHandPositionFrame_ThumbJointMapping> GetDefaultOpenXRThumbMapping();

  UFUNCTION(BlueprintPure, Category = InteractionSDK)
  static TArray<FIsdkExternalHandPositionFrame_FingerJointMapping> GetDefaultOpenXRFingerMapping();

  UFUNCTION(BlueprintPure, Category = InteractionSDK)
  static TArray<float> GetDefaultJointRadii();

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  static void SetDefaultOpenXRMappings(UIsdkHandJointMappings* HandJointMappings);

  /* Will iterate through every component of an actor, get all ISDK GameplayTags via interface, and
   * collate them into one container */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  static bool GetISDKGameplayTagsFromActor(
      const AActor* ActorIn,
      FGameplayTagContainer& ContainerOut);
};
