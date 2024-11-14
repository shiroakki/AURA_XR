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

#include "OculusInteractionPrebuiltsModule.h"
#include "OculusInteractionPrebuiltsLog.h"

DEFINE_LOG_CATEGORY(LogOculusInteractionPrebuilts);

IMPLEMENT_MODULE(FOculusInteractionPrebuiltsModule, OculusInteractionPrebuilts)

void FOculusInteractionPrebuiltsModule::StartupModule()
{
  IModuleInterface::StartupModule();

  if (!TryLoadIsdkDataSourcesMetaXRModule())
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Log,
        TEXT(
            "OculusXR Modules not found at startup - skipping IsdkDataSourcesMetaXR. subscribing to OnModulesChanged."));

    ModuleChangeDelegateHandle = FModuleManager::Get().OnModulesChanged().AddLambda(
        [OculusXRInputModuleName = FName(OculusXRInputModuleName),
         OculusXRHMDModuleName = FName(OculusXRHMDModuleName)](FName Name, EModuleChangeReason)
        {
          if (Name == OculusXRInputModuleName || Name == OculusXRHMDModuleName)
          {
            UE_LOG(LogOculusInteractionPrebuilts, Log, TEXT("Module Loaded: %s"), *Name.ToString());

            TryLoadIsdkDataSourcesMetaXRModule();
          }
        });
  }

  TryLoadIsdkDataSourcesOpenXRModule();
}

void FOculusInteractionPrebuiltsModule::ShutdownModule()
{
  IModuleInterface::ShutdownModule();
  if (ModuleChangeDelegateHandle.IsValid())
  {
    FModuleManager::Get().OnModulesChanged().Remove(ModuleChangeDelegateHandle);
    ModuleChangeDelegateHandle = {};
  }
}

bool FOculusInteractionPrebuiltsModule::IsOculusXRLoaded()
{
  return FModuleManager::Get().IsModuleLoaded(OculusXRInputModuleName) &&
      FModuleManager::Get().IsModuleLoaded(OculusXRHMDModuleName);
}

bool FOculusInteractionPrebuiltsModule::TryLoadIsdkDataSourcesMetaXRModule()
{
  if (IsOculusXRLoaded())
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Log,
        TEXT("OculusXR Modules found - loading IsdkDataSourcesMetaXR"));
    FModuleManager::Get().LoadModuleChecked("IsdkDataSourcesMetaXR");
    return true;
  }
  return false;
}

bool FOculusInteractionPrebuiltsModule::TryLoadIsdkDataSourcesOpenXRModule()
{
  UE_LOG(
      LogOculusInteractionPrebuilts,
      Log,
      TEXT("OculusXR Modules found - loading IsdkDataSourcesOpenXR"));
  if (FModuleManager::Get().LoadModule("IsdkDataSourcesOpenXR") != nullptr)
  {
    return true;
  }
  return false;
}