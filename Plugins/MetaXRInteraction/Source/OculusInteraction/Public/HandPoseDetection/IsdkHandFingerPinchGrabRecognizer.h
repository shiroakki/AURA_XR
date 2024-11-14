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
#include "StructTypes.h"
#include "UObject/Object.h"
#include "IsdkHandFingerPinchGrabRecognizer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIsdkPinchGrabRecognizerEventDelegate);

class UIsdkHandVisual;

// Forward declarations of internal types
namespace isdk::api
{
class IHandPositionFrame;

namespace helper
{
class FFingerPinchGrabRecognizerImpl;
}
} // namespace isdk::api

/**
 *
 */
UCLASS(BlueprintType, Category = InteractionSDK)
class OCULUSINTERACTION_API UIsdkHandFingerPinchGrabRecognizer : public UObject
{
  GENERATED_BODY()
 public:
  UIsdkHandFingerPinchGrabRecognizer();
  virtual void BeginDestroy() override;

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void UpdateState(float DeltaTime);

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool IsActive();

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  float GetPinchStrength();

  UPROPERTY(BlueprintReadWrite, Category = InteractionSDK, meta = (ExposeOnSpawn))
  UIsdkHandVisual* HandVisual{};

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK, meta = (ExposeOnSpawn))
  EIsdkFingerType FingerType{};

  UPROPERTY(BlueprintAssignable, Category = InteractionSDK)
  FIsdkPinchGrabRecognizerEventDelegate PinchGrabStarted;

  UPROPERTY(BlueprintAssignable, Category = InteractionSDK)
  FIsdkPinchGrabRecognizerEventDelegate PinchGrabFinished;

  /* When true, previous setting of wrist & HMD forwards to API returned high confidence */
  UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = InteractionSDK)
  bool bLastPinchConfidence = false;

  /* The last forward vector recorded by the wrist joint */
  UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = InteractionSDK)
  FVector CurrentWristForward;

  /* The last forward vector recorded by the HMD */
  UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = InteractionSDK)
  FVector CurrentHMDForward;

  /* Separated into distinct method for easier unit testing */
  void UpdatePinchConfidence();

 protected:
  isdk::api::IHandPositionFrame* EnsureHandPositionFrame() const;

  TPimplPtr<isdk::api::helper::FFingerPinchGrabRecognizerImpl> FingerPinchGrabRecognizerImpl;
};
