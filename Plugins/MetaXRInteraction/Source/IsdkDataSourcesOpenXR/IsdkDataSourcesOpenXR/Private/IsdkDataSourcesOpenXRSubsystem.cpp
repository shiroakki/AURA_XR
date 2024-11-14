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

#include "IsdkDataSourcesOpenXRSubsystem.h"
#include "DataSources/IsdkFromOpenXRControllerDataSource.h"
#include "DataSources/IsdkFromOpenXRHmdDataSource.h"
#include "Modules/ModuleManager.h"
#include "IsdkDataSourcesOpenXR.h"
#include "Engine/Engine.h"

FIsdkTrackingDataSources
UIsdkDataSourcesOpenXRSubsystem::CreateHandDataSourceComponent_Implementation(
    UMotionControllerComponent* AttachToMotionController)
{
  check(AttachToMotionController);
  const auto OwnerActor = AttachToMotionController->GetOwner();
  HandDataSource = NewObject<UIsdkFromOpenXRHandDataSource>(
      OwnerActor, UIsdkFromOpenXRHandDataSource::StaticClass());
  HandDataSource->SetMotionController(AttachToMotionController);
  HandDataSource->bUpdateInTick = true;
  HandDataSource->CreationMethod = EComponentCreationMethod::Native;
  HandDataSource->RegisterComponent();

  HandDataSource->SetAllowInvalidTrackedData(false);

  return {HandDataSource, HandDataSource, HandDataSource, HandDataSource};
}

FIsdkTrackingDataSources
UIsdkDataSourcesOpenXRSubsystem::CreateControllerDataSourceComponent_Implementation(
    UMotionControllerComponent* AttachToMotionController)
{
  check(AttachToMotionController);
  const auto OwnerActor = AttachToMotionController->GetOwner();
  ControllerDataSource = NewObject<UIsdkFromOpenXRControllerDataSource>(
      OwnerActor, UIsdkFromOpenXRControllerDataSource::StaticClass());
  ControllerDataSource->SetMotionController(AttachToMotionController);
  ControllerDataSource->bUpdateInTick = true;
  ControllerDataSource->CreationMethod = EComponentCreationMethod::Native;
  ControllerDataSource->RegisterComponent();

  return {ControllerDataSource, ControllerDataSource, ControllerDataSource, ControllerDataSource};
}

TScriptInterface<IIsdkIHmdDataSource>
UIsdkDataSourcesOpenXRSubsystem::CreateHmdDataSourceComponent_Implementation(
    AActor* TrackingSpaceRoot)
{
  check(TrackingSpaceRoot);

  HmdDataSource = NewObject<UIsdkFromOpenXRHmdDataSource>(
      TrackingSpaceRoot, UIsdkFromOpenXRHmdDataSource::StaticClass());
  HmdDataSource->RegisterComponent();

  return HmdDataSource;
}

bool UIsdkDataSourcesOpenXRSubsystem::IsEnabled_Implementation()
{
  return FIsdkDataSourcesOpenXRModule::Get().IsOpenXREnabled();
}
