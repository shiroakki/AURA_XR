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

#pragma once

#include "CoreMinimal.h"
#include "DataSources/IsdkIHandPointerPose.h"
#include "DataSources/IsdkIRootPose.h"
#include "DataSources/IsdkIHandJoints.h"
#include "DataSources/IsdkHandDataSource.h"
#include "DataSources/IsdkIHmdDataSource.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "MotionControllerComponent.h"
#include "IsdkITrackingDataSubsystem.generated.h"

UINTERFACE(BlueprintType)
class OCULUSINTERACTION_API UIsdkITrackingDataSubsystem : public UInterface
{
  GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FIsdkTrackingDataSources
{
  GENERATED_BODY()

  UPROPERTY(BlueprintReadOnly, Category = InteractionSDK)
  UIsdkHandDataSource* DataSourceComponent{};
  UPROPERTY(BlueprintReadOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIRootPose> HandRootPose;
  UPROPERTY(BlueprintReadOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIHandPointerPose> HandPointerPose;
  UPROPERTY(BlueprintReadOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIHandJoints> HandJoints;
};

/**
 *
 */
class OCULUSINTERACTION_API IIsdkITrackingDataSubsystem
{
  GENERATED_BODY()

 public:
  /**
   * @brief Creates a new scene component that acts as a data source for the given hand.
   *        The method returns the data source component, plus a number of different interfaces that
   * should be used to query hand data. The hand data that is queried from these interfaces will
   * take the transform of OutDataSourceComponent into account when calculating world space
   * positions.
   * @param AttachToMotionController The transform of this motion controller will be used to
   * position hand tracking data in world space
   */
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  FIsdkTrackingDataSources CreateHandDataSourceComponent(
      UMotionControllerComponent* AttachToMotionController);
  virtual FIsdkTrackingDataSources CreateHandDataSourceComponent_Implementation(
      UMotionControllerComponent* AttachToMotionController)
      PURE_VIRTUAL(IIsdkITrackingDataSubsystem::CreateHandDataSourceComponent, return {};);
  /**
   * @brief Creates a new scene component that acts as a data source for the given controller.
   *        The method returns the data source component, plus a number of different interfaces that
   * should be used to query controller data. The controller data that is queried from these
   * interfaces will take the transform of OutDataSourceComponent into account when calculating
   * world space positions.
   * @param AttachToMotionController The transform of this motion controller will be used to
   * position controller tracking data in world space
   */
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  FIsdkTrackingDataSources CreateControllerDataSourceComponent(
      UMotionControllerComponent* AttachToMotionController);
  virtual FIsdkTrackingDataSources CreateControllerDataSourceComponent_Implementation(
      UMotionControllerComponent* AttachToMotionController)
      PURE_VIRTUAL(IIsdkITrackingDataSubsystem::CreateControllerDataSourceComponent, return {};);
  /**
   * @brief Creates a new scene component that acts as a data source for the head mounted display.
   *        The method returns the interface that should be used to query HMD data.
   * @param TrackingSpaceRoot The transform of this Actor will be used as the root of the
   * tracking space.
   */
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  TScriptInterface<IIsdkIHmdDataSource> CreateHmdDataSourceComponent(AActor* TrackingSpaceRoot);
  virtual TScriptInterface<IIsdkIHmdDataSource> CreateHmdDataSourceComponent_Implementation(
      AActor* TrackingSpaceRoot)
      PURE_VIRTUAL(IIsdkITrackingDataSubsystem::CreateHmdDataSourceComponent, return {};);

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  bool IsEnabled();
  virtual bool IsEnabled_Implementation()
      PURE_VIRTUAL(IIsdkITrackingDataSubsystem::IsEnabled, return false;);
};
