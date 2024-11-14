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

#include "IsdkOculusXRHelper.h"

#include "IsdkDataSourcesMetaXR.h"
#include "XRMotionControllerBase.h"

FTransform FIsdkOculusXRHelper::GetPointerPose(
    EIsdkHandedness Handedness,
    UMotionControllerComponent* MotionController)
{
  auto& MetaXRModule = FIsdkDataSourcesMetaXRModule::GetChecked();
  if (MetaXRModule.Input_IsPointerPoseValid(Handedness))
  {
    const FTransform WristFromTracking = MotionController->GetRelativeTransform().Inverse();
    const FTransform TrackingSpacePointerPose = MetaXRModule.Input_GetPointerPose(Handedness);
    return TrackingSpacePointerPose * WristFromTracking;
  }
  return FTransform();
}

EIsdkHandedness FIsdkOculusXRHelper::ReadHandedness(UMotionControllerComponent* MotionController)
{
  if (MotionController != nullptr)
  {
    const FName MotionSource = MotionController->MotionSource;
    if (MotionSource == FXRMotionControllerBase::LeftHandSourceId)
    {
      return EIsdkHandedness::Left;
    }

    if (MotionSource == FXRMotionControllerBase::RightHandSourceId)
    {
      return EIsdkHandedness::Right;
    }

    UE_LOG(
        LogTemp,
        Error,
        TEXT("Motion Controller has incompatible motion source: '%s'"),
        *MotionSource.ToString());
    return EIsdkHandedness::Left; // Default to left if motion source is incompatible
  }

  UE_LOG(LogTemp, Error, TEXT("Motion Controller is null"));
  return EIsdkHandedness::Left; // Default to left if motion controller is null
}

bool FIsdkOculusXRHelper::IsOculusXrLoaded()
{
  return FModuleManager::Get().IsModuleLoaded(GetOculusXRHMDModuleName());
}

const TCHAR* FIsdkOculusXRHelper::GetOculusXRHMDModuleName()
{
  static const TCHAR* ModuleNameOculusXRHMD = TEXT("OculusXRHMD");
  return ModuleNameOculusXRHMD;
}
