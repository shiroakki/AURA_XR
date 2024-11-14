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
#include "UObject/Interface.h"
#include "Core/IsdkConditional.h"

#include "IsdkIRootPose.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType, Category = "InteractionSDK", meta = (DisplayName = "ISDK Root Pose"))
class OCULUSINTERACTION_API UIsdkIRootPose : public UInterface
{
  GENERATED_BODY()
};

/**
 * A root pose is the transform of an component that represents a skeleton.
 * This interface provides additional information about a tracked root pose, such as whether or
 * not it is currently valid (e.g. due to tracking loss, loss of app focus, etc.)
 */
class OCULUSINTERACTION_API IIsdkIRootPose
{
  GENERATED_BODY()

 public:
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  FTransform GetRootPose();
  virtual FTransform GetRootPose_Implementation()
      PURE_VIRTUAL(IIsdkIRootPose::GetRootPose, return {};);

  /// True if the transform returned from FTransform was set from tracked data.
  /// Returns False if the Transform contains undefined data.
  /// Returns False if IsRootPoseConnected is false.
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  bool IsRootPoseValid();
  virtual bool IsRootPoseValid_Implementation()
      PURE_VIRTUAL(IIsdkIRootPose::IsRootPoseValid, return false;);

  /// The device associated with this root pose is enabled in the system, and enumerated in the
  /// list of connected devices.
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  UIsdkConditional* IsRootPoseConnected();
  virtual UIsdkConditional* IsRootPoseConnected_Implementation()
      PURE_VIRTUAL(IIsdkIRootPose::IsRootPoseConnected, return nullptr;);

  /// The device associated with this root pose is connected, the root pose is valid and was set
  /// from tracking data is marked as high confidence.
  /// If this is true, then it implies that IsRootPoseConnected and IsRootPoseValid are also true,
  /// so they don't need to be checked in addition to this.
  /// Returns False if IsRootPoseConnected or IsRootPoseValid is false.
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  UIsdkConditional* IsRootPoseHighConfidence();
  virtual UIsdkConditional* IsRootPoseHighConfidence_Implementation()
      PURE_VIRTUAL(IIsdkIRootPose::IsRootPoseHighConfidence, return nullptr;);
};
