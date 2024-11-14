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
#include "IsdkHandPalmGrabRecognizer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIsdkPalmGrabRecognizerEventDelegate);

class UIsdkHandVisual;

// Forward declarations of internal types
namespace isdk::api
{
class PalmGrabRecognizer;
class IHandPositionFrame;
} // namespace isdk::api

/**
 *
 */
UCLASS(BlueprintType, Category = InteractionSDK)
class OCULUSINTERACTION_API UIsdkHandPalmGrabRecognizer : public UObject
{
  GENERATED_BODY()
 public:
  UIsdkHandPalmGrabRecognizer();
  virtual void BeginDestroy() override;
  void UpdateRecognizerParams() const;

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void UpdateState(float DeltaTime);

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool IsActive();

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void SetPalmGrabMinFingerCurl(float Angle)
  {
    PalmGrabMinCurl = Angle;
    UpdateRecognizerParams();
  }

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void SetPalmGrabMinFingers(int Count)
  {
    PalmGrabMinFingers = Count;
    UpdateRecognizerParams();
  }

  UPROPERTY(BlueprintReadWrite, Category = InteractionSDK, meta = (ExposeOnSpawn))
  UIsdkHandVisual* HandVisual{};

  UPROPERTY(BlueprintAssignable, Category = InteractionSDK)
  FIsdkPalmGrabRecognizerEventDelegate PalmGrabStarted;

  UPROPERTY(BlueprintAssignable, Category = InteractionSDK)
  FIsdkPalmGrabRecognizerEventDelegate PalmGrabFinished;

 protected:
  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  float PalmGrabMinCurl{90};

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  int PalmGrabMinFingers{3};

  isdk::api::IHandPositionFrame* EnsureHandPositionFrame() const;

  class FPalmGrabRecognizerImpl;
  TPimplPtr<FPalmGrabRecognizerImpl> PalmGrabRecognizerImpl = nullptr;
  isdk::api::PalmGrabRecognizer* Recognizer{nullptr};
};
