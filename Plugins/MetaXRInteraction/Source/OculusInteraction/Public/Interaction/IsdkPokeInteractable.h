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

#include "Engine/DataAsset.h"
#include "StructTypes.h"
#include "IsdkInteractableComponent.h"
#include "IsdkISurfacePatch.h"
#include "Pointable/IsdkIPointable.h"

#include "IsdkPokeInteractable.generated.h"

// Forward declarations of internal types
namespace isdk::api
{
class PokeInteractable;

namespace helper
{
class FPokeInteractableImpl;
}
} // namespace isdk::api

USTRUCT(BlueprintType, Category = InteractionSDK)
struct FIsdkPokeInteractableConfigOffsets
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractionSDK")
  float NormalOffset{};
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractionSDK")
  float TangentOffset{};
};

UCLASS(
    BlueprintType,
    ClassGroup = (InteractionSDK),
    meta = (DisplayName = "ISDK Poke Interactable Config Data Asset"))
class OCULUSINTERACTION_API UIsdkPokeInteractableConfigDataAsset : public UDataAsset
{
  GENERATED_BODY()

 public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractionSDK")
  FIsdkPokeInteractable_Config Config = CreateDefaultPanelConfig();

  UFUNCTION(BlueprintCallable, CallInEditor, Category = "InteractionSDK")
  void ResetToDefaultPanelConfig()
  {
    Config = CreateDefaultPanelConfig();
  }

  static FIsdkPokeInteractable_Config CreateDefaultPanelConfig();
};

UCLASS(
    Blueprintable,
    ClassGroup = (InteractionSDK),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Poke Interactable"))
class OCULUSINTERACTION_API UIsdkPokeInteractable : public UIsdkInteractableComponent,
                                                    public IIsdkIPointable
{
  GENERATED_BODY()

 public:
  UIsdkPokeInteractable();
  virtual void BeginPlay() override;
  virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
  virtual void BeginDestroy() override;

  virtual bool IsApiInstanceValid() const override;
  virtual isdk::api::IInteractable* GetApiIInteractable() const override;
  isdk::api::PokeInteractable* GetApiPokeInteractable() const;

  // Getters
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  const FIsdkPokeInteractableConfigOffsets& GetConfigOffsets() const;
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkPokeInteractableConfigDataAsset* GetConfigAsset() const
  {
    return ConfigAsset;
  }

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  FIsdkPokeInteractable_Config GetCurrentConfig() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  TScriptInterface<IIsdkISurfacePatch> GetSurfacePatch() const
  {
    return SurfacePatch;
  }

  // Setters
  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetConfigOffsets(const FIsdkPokeInteractableConfigOffsets& InOffsets);
  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetConfigAsset(UIsdkPokeInteractableConfigDataAsset* InConfigAsset);
  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetSurfacePatch(TScriptInterface<IIsdkISurfacePatch> InSurfacePatch);

  // Event Getters
  virtual FIsdkInteractionPointerEventDelegate& GetInteractionPointerEventDelegate() override
  {
    return InteractorPointerEvent;
  }

 private:
  void ApplyConfigToInstance();

  // Event for PointerEvents
  UPROPERTY(BlueprintAssignable, Category = InteractionSDK)
  FIsdkInteractionPointerEventDelegate InteractorPointerEvent;

  // Properties
  UPROPERTY(
      BlueprintGetter = GetConfigOffsets,
      BlueprintSetter = SetConfigOffsets,
      Category = InteractionSDK,
      EditAnywhere)
  FIsdkPokeInteractableConfigOffsets ConfigOffsets;

  UPROPERTY(
      BlueprintGetter = GetConfigAsset,
      BlueprintSetter = SetConfigAsset,
      Category = InteractionSDK,
      EditAnywhere)
  UIsdkPokeInteractableConfigDataAsset* ConfigAsset{};

  UPROPERTY(
      BlueprintGetter = GetSurfacePatch,
      BlueprintSetter = SetSurfacePatch,
      Category = InteractionSDK)
  TScriptInterface<IIsdkISurfacePatch> SurfacePatch{};

  TPimplPtr<isdk::api::helper::FPokeInteractableImpl> PokeInteractableImpl{};
  int64 PointerEventToken{};
};
