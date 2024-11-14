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
#include "IsdkInteractableWidget.h"
#include "IsdkRayExampleWidget.generated.h"

UCLASS(ClassGroup = (InteractionSDK))
class OCULUSINTERACTIONSAMPLES_API AIsdkRayExampleWidget final : public AIsdkInteractableWidget
{
  GENERATED_BODY()

 public:
  static inline constexpr auto RayExampleWidgetAsset =
      TEXT("/OculusInteractionSamples/Widgets/RayInteractionWidget/RayExampleWidget");
  static inline constexpr auto RayUnselectHovererdAudio =
      TEXT("/OculusInteractionSamples/Audio/Content/Interaction_BasicRay_Release");

  UPROPERTY(VisibleDefaultsOnly, Category = InteractionSDK)
  UAudioComponent* UnselectedHoveredAudio;
  AIsdkRayExampleWidget();
#if WITH_EDITOR
  virtual bool CanEditChangeComponent(const UActorComponent* Component, const FProperty* InProperty)
      const override;
#endif
};