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

#include "Interaction/IsdkPokeInteractable.h"

#include "StructTypesPrivate.h"
#include "isdk_api/isdk_api.hpp"
#include "ApiImpl.h"
#include "IsdkChecks.h"
#include "IsdkContentAssetPaths.h"
#include "UObject/ConstructorHelpers.h"
#include "Subsystem/IsdkWorldSubsystem.h"
#include "IsdkRuntimeSettings.h"

using isdk::api::IInteractable;
using isdk::api::PointerEventQueue;
using isdk::api::PointerEventQueuePtr;
using isdk::api::PokeInteractable;
using isdk::api::PokeInteractablePtr;

namespace isdk::api::helper
{
class FPokeInteractableImpl : public FApiImpl<PokeInteractable, PokeInteractablePtr>
{
 public:
  explicit FPokeInteractableImpl(std::function<PokeInteractablePtr()> CreateFn)
      : FApiImpl(std::move(CreateFn))
  {
  }
};
} // namespace isdk::api::helper

FIsdkPokeInteractable_Config UIsdkPokeInteractableConfigDataAsset::CreateDefaultPanelConfig()
{
  FIsdkPokeInteractable_Config Config{};

  // Explicitly enable/disable features to match the 'shell home' experience for panels.
  Config.DragThresholdsConfig.Enabled = false;
  Config.PositionPinningConfig.Enabled = true;
  Config.MinThresholdsConfig.Enabled = false;
  Config.RecoilAssistConfig.Enabled = true;
  Config.RecoilAssistConfig.UseVelocityExpansion = true;
  Config.RecoilAssistConfig.UseVelocityRetractExpansion = true;
  Config.RecoilAssistConfig.UseDynamicDecay = true;

  return Config;
}

UIsdkPokeInteractable::UIsdkPokeInteractable()
{
  PrimaryComponentTick.bCanEverTick = true;
  PokeInteractableImpl = MakePimpl<isdk::api::helper::FPokeInteractableImpl, EPimplPtrMode::NoCopy>(
      [this]() -> PokeInteractablePtr
      {
        // Surface Patch - to perform internal collision detection
        isdk::api::ISurfacePatch* ApiSurfacePatch{};
        if (!IIsdkISurfacePatch::EnsureSurfacePatchValid(
                SurfacePatch, this, TEXT("SurfacePatch"), ApiSurfacePatch))
        {
          return nullptr;
        }

        // Config
        isdk_PokeInteractable_Config ApiConfig;
        StructTypesUtils::Copy(GetCurrentConfig(), ApiConfig);

        // PokeInteractable
        auto Instance = PokeInteractable::create(
            &ApiConfig, SurfacePatch->GetApiISurfacePatch()->getISurfacePatchHandle(), nullptr);
        if (!UIsdkChecks::EnsureMsgfApiInstanceIsValid(Instance.IsValid(), this))
        {
          return nullptr;
        }

        // Default enabled state
        if (!ShouldApiInstanceBeEnabled())
        {
          Instance->disable();
        }

        HandleApiInstanceCreated(&Instance.Get());

        return Instance;
      });

  struct FStaticObjectFinders
  {
    ConstructorHelpers::FObjectFinderOptional<UIsdkPokeInteractableConfigDataAsset>
        DefaultConfigDataAsset;

    FStaticObjectFinders()
        : DefaultConfigDataAsset(IsdkContentAssetPaths::Configurations::PokeInteractablePanelConfig)
    {
    }
  } StaticObjectFinders{};

  ConfigAsset = StaticObjectFinders.DefaultConfigDataAsset.Get();

  GameplayTagContainer.AddTag(IsdkGameplayTags::TAG_Isdk_Type_Interactable_Poke);
}

void UIsdkPokeInteractable::BeginPlay()
{
  Super::BeginPlay();

  UIsdkWorldSubsystem& WorldSubsystem = UIsdkWorldSubsystem::Get(GetWorld());
  this->PointerEventToken = WorldSubsystem.RegisterPointerEventHandler(
      [this]() -> isdk::api::IPointable* { return GetApiPokeInteractable(); },
      InteractorPointerEvent,
      this);
}

void UIsdkPokeInteractable::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
  Super::EndPlay(EndPlayReason);

  UIsdkWorldSubsystem& WorldSubsystem = UIsdkWorldSubsystem::Get(GetWorld());
  WorldSubsystem.UnregisterPointerEventHandler(PointerEventToken);

  PokeInteractableImpl->DestroyInstance();
}

void UIsdkPokeInteractable::BeginDestroy()
{
  Super::BeginDestroy();

  PokeInteractableImpl.Reset();
}

bool UIsdkPokeInteractable::IsApiInstanceValid() const
{
  return PokeInteractableImpl->IsInstanceValid();
}

IInteractable* UIsdkPokeInteractable::GetApiIInteractable() const
{
  return GetApiPokeInteractable();
}

PokeInteractable* UIsdkPokeInteractable::GetApiPokeInteractable() const
{
  return PokeInteractableImpl->GetOrCreateInstance();
}

const FIsdkPokeInteractableConfigOffsets& UIsdkPokeInteractable::GetConfigOffsets() const
{
  return ConfigOffsets;
}

FIsdkPokeInteractable_Config UIsdkPokeInteractable::GetCurrentConfig() const
{
  FIsdkPokeInteractable_Config Config;
  if (IsValid(ConfigAsset))
  {
    Config = ConfigAsset->Config;
  }
  else
  {
    // Fall back to default panel config
    Config = UIsdkPokeInteractableConfigDataAsset::CreateDefaultPanelConfig();
  }

  // Apply user defined offsets additively to the config.
  Config.EnterHoverNormal += ConfigOffsets.NormalOffset;
  Config.EnterHoverTangent += ConfigOffsets.TangentOffset;
  Config.ExitHoverNormal += ConfigOffsets.NormalOffset;
  Config.ExitHoverTangent += ConfigOffsets.TangentOffset;
  Config.CancelSelectNormal += ConfigOffsets.NormalOffset;
  Config.CancelSelectTangent += ConfigOffsets.TangentOffset;

  return Config;
}

void UIsdkPokeInteractable::SetConfigOffsets(const FIsdkPokeInteractableConfigOffsets& InOffsets)
{
  ConfigOffsets = InOffsets;
  ApplyConfigToInstance();
}

void UIsdkPokeInteractable::SetConfigAsset(UIsdkPokeInteractableConfigDataAsset* InConfigAsset)
{
  ConfigAsset = InConfigAsset;
  ApplyConfigToInstance();
}

void UIsdkPokeInteractable::SetSurfacePatch(TScriptInterface<IIsdkISurfacePatch> InSurfacePatch)
{
  SurfacePatch = InSurfacePatch;

  if (PokeInteractableImpl->IsInstanceValid())
  {
    isdk::api::ISurfacePatch* ApiSurfacePatch{};
    if (IIsdkISurfacePatch::EnsureSurfacePatchValid(
            SurfacePatch, this, TEXT("SurfacePatch"), ApiSurfacePatch))
    {
      PokeInteractableImpl->GetOrCreateInstance()->setSurfacePatch(
          ApiSurfacePatch->getISurfacePatchHandle());
    }
  }
}

void UIsdkPokeInteractable::ApplyConfigToInstance()
{
  if (PokeInteractableImpl->IsInstanceValid())
  {
    isdk_PokeInteractable_Config ApiConfig;
    StructTypesUtils::Copy(GetCurrentConfig(), ApiConfig);
    PokeInteractableImpl->GetOrCreateInstance()->setConfig(&ApiConfig);
  }
}
