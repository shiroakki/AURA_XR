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

#include "Interaction/IsdkRayInteractable.h"

#include "isdk_api/isdk_api.hpp"
#include "ApiImpl.h"
#include "IsdkChecks.h"
#include "Subsystem/IsdkWorldSubsystem.h"
#include "IsdkRuntimeSettings.h"

using isdk::api::IInteractable;
using isdk::api::PointerEventQueue;
using isdk::api::PointerEventQueuePtr;
using isdk::api::RayInteractable;
using isdk::api::RayInteractablePtr;

namespace isdk::api::helper
{
class FRayInteractableImpl : public FApiImpl<RayInteractable, RayInteractablePtr>
{
 public:
  explicit FRayInteractableImpl(std::function<RayInteractablePtr()> CreateFn)
      : FApiImpl(std::move(CreateFn))
  {
  }
};
} // namespace isdk::api::helper

UIsdkRayInteractable::UIsdkRayInteractable()
{
  PrimaryComponentTick.bCanEverTick = true;
  RayInteractableImpl = MakePimpl<isdk::api::helper::FRayInteractableImpl, EPimplPtrMode::NoCopy>(
      [this]() -> RayInteractablePtr
      {
        // Surface Patch - to perform internal collision detection
        if (!UIsdkChecks::EnsureMsgfDependencyIsValid(Surface.GetObject(), this, TEXT("Surface")))
        {
          return nullptr;
        }
        const isdk::api::ISurface* ApiSurface = Surface->GetApiISurface();
        if (!UIsdkChecks::EnsureMsgfDependencyApiIsInitialized(ApiSurface, this, TEXT("Surface")))
        {
          return nullptr;
        }

        isdk_ISurface* SelectSurfaceHandle = nullptr;
        if (SelectSurface)
        {
          if (const isdk::api::ISurface* ApiSelectSurface = SelectSurface->GetApiISurface())
          {
            SelectSurfaceHandle = ApiSelectSurface->getISurfaceHandle();
          }
        }

        // RayInteractable
        RayInteractablePtr Instance = RayInteractable::create(
            ApiSurface->getISurfaceHandle(), nullptr, SelectSurfaceHandle, nullptr, nullptr);
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

  GameplayTagContainer.AddTag(IsdkGameplayTags::TAG_Isdk_Type_Interactable_Ray);
}

void UIsdkRayInteractable::BeginPlay()
{
  Super::BeginPlay();

  UIsdkWorldSubsystem& WorldSubsystem = UIsdkWorldSubsystem::Get(GetWorld());
  this->PointerEventToken = WorldSubsystem.RegisterPointerEventHandler(
      [this]() -> isdk::api::IPointable* { return GetApiRayInteractable(); },
      InteractorPointerEvent,
      this);
}

void UIsdkRayInteractable::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
  Super::EndPlay(EndPlayReason);

  UIsdkWorldSubsystem& WorldSubsystem = UIsdkWorldSubsystem::Get(GetWorld());
  WorldSubsystem.UnregisterPointerEventHandler(PointerEventToken);

  RayInteractableImpl->DestroyInstance();
}

void UIsdkRayInteractable::BeginDestroy()
{
  Super::BeginDestroy();
  RayInteractableImpl.Reset();
}

bool UIsdkRayInteractable::IsApiInstanceValid() const
{
  return RayInteractableImpl->IsInstanceValid();
}

IInteractable* UIsdkRayInteractable::GetApiIInteractable() const
{
  return GetApiRayInteractable();
}

RayInteractable* UIsdkRayInteractable::GetApiRayInteractable() const
{
  return RayInteractableImpl->GetOrCreateInstance();
}

void UIsdkRayInteractable::SetSurface(TScriptInterface<IIsdkISurface> InSurface)
{
  Surface = InSurface;

  if (RayInteractableImpl->IsInstanceValid())
  {
    if (ensureMsgf(Surface, TEXT("Surface is a required input.")) &&
        ensureMsgf(Surface->GetApiISurface(), TEXT("Surface failed to initialize")))
    {
      const auto ApiSurface = Surface->GetApiISurface();
      RayInteractableImpl->GetOrCreateInstance()->setSurface(ApiSurface->getISurfaceHandle());
    }
  }
}

void UIsdkRayInteractable::SetSelectSurface(TScriptInterface<IIsdkISurface> InSurface)
{
  SelectSurface = InSurface;

  if (RayInteractableImpl->IsInstanceValid())
  {
    RayInteractableImpl->GetOrCreateInstance()->setSelectSurface(
        SelectSurface ? SelectSurface->GetApiISurface()->getISurfaceHandle() : nullptr);
  }
}
