﻿/*
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

#include "Interaction/IsdkClippedPlaneSurface.h"
#include "Interaction/Surfaces/IsdkPointablePlane.h"
#include "StructTypes.h"
#include "StructTypesPrivate.h"
#include "isdk_api/isdk_api.hpp"

#include <vector>
#include "ApiImpl.h"
#include "IsdkChecks.h"

using isdk::api::ClippedPlaneSurface;
using isdk::api::ClippedPlaneSurfacePtr;
using isdk::api::IPose;

namespace isdk::api::helper
{
class FClippedPlaneSurfaceImpl : public FApiImpl<ClippedPlaneSurface, ClippedPlaneSurfacePtr>
{
 public:
  explicit FClippedPlaneSurfaceImpl(std::function<ClippedPlaneSurfacePtr()> CreateFn)
      : FApiImpl(std::move(CreateFn))
  {
  }
  static std::vector<isdk_BoundsClipper> GenerateNativeBoundsClippers(
      const TArray<FIsdkBoundsClipper>& BoundsClippers,
      UIsdkPointablePlane* const PointablePlane,
      const FString& ComponentName)
  {
    std::vector<isdk_BoundsClipper> IsdkBoundsClippers;
    if (BoundsClippers.Num() > 0)
    {
      IsdkBoundsClippers.reserve(BoundsClippers.Num());
      ovrpVector3f BoundsClipperPosition{};
      ovrpVector3f BoundsClipperSize{};
      for (size_t Idx = 0; Idx < BoundsClippers.Num(); ++Idx)
      {
        auto Clipper = BoundsClippers[Idx];
        auto PoseProvider = Clipper.PoseProvider;
        if (!ensureMsgf(
                PoseProvider != nullptr,
                TEXT("%s: BoundsClippers[%d].PoseProvider is null."),
                *ComponentName,
                Idx))
        {
          break;
        }

        IPose* ApiIPose = PoseProvider.GetInterface()->GetApiIPose();
        if (!ensureMsgf(
                ApiIPose != nullptr,
                TEXT("%s: BoundsClippers[%d].PoseProvider was not initialized."),
                *ComponentName,
                Idx))
        {
          break;
        }

        FVector LocalScale = FVector(Clipper.Size);
        FVector LocalPosition = FVector(Clipper.Position);
        if (IsValid(PointablePlane))
        {
          FTransform PlaneTransform = PointablePlane->GetComponentTransform();
          LocalPosition *= PlaneTransform.GetScale3D();
          LocalScale *= PlaneTransform.GetScale3D();
        }

        StructTypesUtils::Copy(LocalPosition, BoundsClipperPosition);
        StructTypesUtils::Copy(LocalScale, BoundsClipperSize);
        IsdkBoundsClippers.push_back(
            {ApiIPose->getIPoseHandle(), BoundsClipperPosition, BoundsClipperSize});
      }
      return IsdkBoundsClippers;
    }
    return IsdkBoundsClippers;
  }
};
} // namespace isdk::api::helper

UIsdkClippedPlaneSurface::UIsdkClippedPlaneSurface()
{
  PrimaryComponentTick.bCanEverTick = true;
  PointablePlaneDelegate = FDelegateHandle();
  ClippedPlaneSurfaceImpl =
      MakePimpl<isdk::api::helper::FClippedPlaneSurfaceImpl, EPimplPtrMode::NoCopy>(
          [this]() -> ClippedPlaneSurfacePtr
          {
            // Check Dependencies
            if (!UIsdkChecks::EnsureMsgfDependencyIsValid(
                    PointablePlane, this, TEXT("PointablePlane")))
            {
              return nullptr;
            }

            const auto ApiPointablePlane = PointablePlane->GetApiPointablePlane();
            if (!UIsdkChecks::EnsureMsgfDependencyApiIsInitialized(
                    ApiPointablePlane, this, TEXT("PointablePlane")))
            {
              return nullptr;
            }

            // Create Clipped Plane Surface
            ClippedPlaneSurfacePtr Instance{};
            if (BoundsClippers.Num() > 0)
            {
              std::vector<isdk_BoundsClipper> IsdkBoundsClippers =
                  isdk::api::helper::FClippedPlaneSurfaceImpl::GenerateNativeBoundsClippers(
                      BoundsClippers, PointablePlane, GetFullName());
              if (IsdkBoundsClippers.size() == BoundsClippers.Num())
              {
                // Only create the plane if all the clippers were created successfully.
                Instance = ClippedPlaneSurface::createWithClippers(
                    *ApiPointablePlane, IsdkBoundsClippers.data(), IsdkBoundsClippers.size());
              }
            }
            else
            {
              Instance = ClippedPlaneSurface::create(*PointablePlane->GetApiPointablePlane());
            }

            if (!UIsdkChecks::EnsureMsgfApiInstanceIsValid(Instance.IsValid(), this))
            {
              return nullptr;
            }
            return Instance;
          });
}

isdk::api::ISurfacePatch* UIsdkClippedPlaneSurface::GetApiISurfacePatch()
{
  return GetApiClippedPlaneSurface();
}

ClippedPlaneSurface* UIsdkClippedPlaneSurface::GetApiClippedPlaneSurface()
{
  return ClippedPlaneSurfaceImpl->GetOrCreateInstance();
}

void UIsdkClippedPlaneSurface::SetBoundsClippers(const TArray<FIsdkBoundsClipper>& InBoundsClippers)
{
  BoundsClippers = InBoundsClippers;
  UpdateNativeBoundsClipper();
}

void UIsdkClippedPlaneSurface::SetPointablePlane(UIsdkPointablePlane* InPointablePlane)
{
  if (IsValid(PointablePlane) && PointablePlaneDelegate.IsValid())
  {
    PointablePlane->TransformUpdated.Remove(PointablePlaneDelegate);
  }
  PointablePlane = InPointablePlane;
  if (IsValid(PointablePlane))
  {
    PointablePlaneDelegate = PointablePlane->TransformUpdated.AddWeakLambda(
        this,
        [this](
            USceneComponent* RootComponent,
            EUpdateTransformFlags UpdateTransformFlags,
            ETeleportType Teleport) { UpdateNativeBoundsClipper(); });
  }
  checkf(
      !ClippedPlaneSurfaceImpl->IsInstanceValid(),
      TEXT("SetPointablePlane can only be called prior to BeginPlay"));
}

void UIsdkClippedPlaneSurface::UpdateNativeBoundsClipper()
{
  if (ClippedPlaneSurfaceImpl->IsInstanceValid() && IsValid(PointablePlane))
  {
    isdk::api::ClippedPlaneSurface* surface = GetApiClippedPlaneSurface();
    std::vector<isdk_BoundsClipper> IsdkBoundsClippers =
        isdk::api::helper::FClippedPlaneSurfaceImpl::GenerateNativeBoundsClippers(
            BoundsClippers, PointablePlane, GetFullName());
    surface->setClippers(IsdkBoundsClippers.data(), IsdkBoundsClippers.size());
  }
}

void UIsdkClippedPlaneSurface::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
  ClippedPlaneSurfaceImpl->DestroyInstance();
  Super::EndPlay(EndPlayReason);
}

void UIsdkClippedPlaneSurface::BeginDestroy()
{
  Super::BeginDestroy();
  ClippedPlaneSurfaceImpl.Reset();
}
