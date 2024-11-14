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

#include "IsdkDataSourcesMetaXRSubsystem.h"

#include "IsdkOculusXRHelper.h"
#include "DataSources/IsdkFromMetaXRHmdDataSource.h"

FIsdkTrackingDataSources
UIsdkDataSourcesMetaXRSubsystem::CreateHandDataSourceComponent_Implementation(
    UMotionControllerComponent* AttachToMotionController)
{
  check(AttachToMotionController);
  const auto OwnerActor = AttachToMotionController->GetOwner();
  HandDataSource = NewObject<UIsdkFromMetaXRHandDataSource>(
      OwnerActor, UIsdkFromMetaXRHandDataSource::StaticClass());
  HandDataSource->SetMotionController(AttachToMotionController);
  HandDataSource->bUpdateInTick = true;
  HandDataSource->CreationMethod = EComponentCreationMethod::Native;

  HandDataSource->RegisterComponent();

  // TODO T162574495: Read defaults from Unreal Config.
  HandDataSource->SetAllowInvalidTrackedData(false);

  return {HandDataSource, HandDataSource, HandDataSource, HandDataSource};
}

FIsdkTrackingDataSources
UIsdkDataSourcesMetaXRSubsystem::CreateControllerDataSourceComponent_Implementation(
    UMotionControllerComponent* AttachToMotionController)
{
  check(AttachToMotionController);
  const auto OwnerActor = AttachToMotionController->GetOwner();
  ControllerDataSource = NewObject<UIsdkFromMetaXRControllerDataSource>(
      OwnerActor, UIsdkFromMetaXRControllerDataSource::StaticClass());
  ControllerDataSource->SetMotionController(AttachToMotionController);
  ControllerDataSource->bUpdateInTick = true;
  ControllerDataSource->CreationMethod = EComponentCreationMethod::Native;
  ControllerDataSource->RegisterComponent();

  return {ControllerDataSource, ControllerDataSource, ControllerDataSource, ControllerDataSource};
}

TScriptInterface<IIsdkIHmdDataSource>
UIsdkDataSourcesMetaXRSubsystem::CreateHmdDataSourceComponent_Implementation(
    AActor* TrackingSpaceRoot)
{
  check(TrackingSpaceRoot);
  const auto Component = NewObject<UIsdkFromMetaXRHmdDataSource>(
      TrackingSpaceRoot, UIsdkFromMetaXRHmdDataSource::StaticClass());
  Component->RegisterComponent();
  return Component;
}

bool UIsdkDataSourcesMetaXRSubsystem::IsEnabled_Implementation()
{
  return FIsdkOculusXRHelper::IsOculusXrLoaded();
}
