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
#include "Components/ActorComponent.h"
#include "Subsystem/IsdkITrackingDataSubsystem.h"
#include "DataSources/IsdkFromOpenXRControllerDataSource.h"
#include "DataSources/IsdkFromOpenXRHandDataSource.h"
#include "DataSources/IsdkFromOpenXRHmdDataSource.h"
#include "Subsystems/WorldSubsystem.h"
#include "IsdkDataSourcesOpenXRSubsystem.generated.h"

UCLASS()
class ISDKDATASOURCESOPENXR_API UIsdkDataSourcesOpenXRSubsystem : public UWorldSubsystem,
                                                                  public IIsdkITrackingDataSubsystem
{
  GENERATED_BODY()

 public:
  virtual FIsdkTrackingDataSources CreateHandDataSourceComponent_Implementation(
      UMotionControllerComponent* AttachToMotionController) override;
  virtual FIsdkTrackingDataSources CreateControllerDataSourceComponent_Implementation(
      UMotionControllerComponent* AttachToMotionController) override;
  virtual TScriptInterface<IIsdkIHmdDataSource> CreateHmdDataSourceComponent_Implementation(
      AActor* TrackingSpaceRoot) override;
  virtual bool IsEnabled_Implementation() override;

 private:
  UPROPERTY()
  UIsdkFromOpenXRControllerDataSource* ControllerDataSource;
  UPROPERTY()
  UIsdkFromOpenXRHandDataSource* HandDataSource;
  UPROPERTY()
  UIsdkFromOpenXRHmdDataSource* HmdDataSource;
};
