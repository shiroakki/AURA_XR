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

#include "StructTypes.h"
#include "IsdkHandVisual.h"
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IsdkHandDigitRecognizer.generated.h"

// Forward declarations of internal types
namespace isdk::api
{
class IHandPositionFrame;
class DigitRecognizer;
} // namespace isdk::api
typedef struct isdk_DigitRecognizer_ isdk_DigitRecognizer;

/**
 *
 */
UCLASS(Blueprintable, Abstract, ClassGroup = (InteractionSDK))
class OCULUSINTERACTION_API UIsdkHandDigitRecognizer : public UObject
{
  GENERATED_BODY()

 public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK, meta = (ExposeOnSpawn))
  UIsdkHandVisual* HandVisual{};

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK, meta = (ExposeOnSpawn))
  FIsdkDigitRangeParams RangeParameters{};

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void UpdateState(float DeltaTime);

  isdk::api::DigitRecognizer* GetApiDigitRecognizer() const
  {
    return ApiDigitRecognizer;
  }

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool IsActive();

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  float GetNormalizedRawValue();

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  float GetRawValue();

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  virtual FVector2f GetRawExpectedRange()
      PURE_VIRTUAL(UIsdkDigitRecognizer::CreateDigitRecognizer, return FVector2f::Zero(););

 protected:
  isdk::api::IHandPositionFrame* EnsureHandPositionFrame() const;
  virtual isdk::api::DigitRecognizer* CreateDigitRecognizer()
      PURE_VIRTUAL(UIsdkDigitRecognizer::CreateDigitRecognizer, return nullptr;);

  isdk::api::DigitRecognizer* ApiDigitRecognizer{};
};
