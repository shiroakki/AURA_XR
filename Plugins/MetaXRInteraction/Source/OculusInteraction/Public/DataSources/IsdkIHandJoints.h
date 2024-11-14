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
#include "UObject/Interface.h"
#include "IsdkHandData.h"
#include "StructTypes.h"
#include "IsdkHandJointMappings.h"
#include "IsdkIHandJoints.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType, Category = "InteractionSDK", meta = (DisplayName = "ISDK Hand Joints"))
class OCULUSINTERACTION_API UIsdkIHandJoints : public UInterface
{
  GENERATED_BODY()
};

/**
 *
 */
class OCULUSINTERACTION_API IIsdkIHandJoints
{
  GENERATED_BODY()

  // Add interface functions to this class. This is the class that will be inherited to implement
  // this interface.
 public:
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  UIsdkHandData* GetHandData();
  virtual UIsdkHandData* GetHandData_Implementation()
      PURE_VIRTUAL(IIsdkIHandJoints::GetHandData, return nullptr;);

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  bool IsHandJointDataValid();
  virtual bool IsHandJointDataValid_Implementation()
      PURE_VIRTUAL(IIsdkIHandJoints::IsHandJointDataValid, return false;);

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  const EIsdkHandedness GetHandedness();
  virtual EIsdkHandedness GetHandedness_Implementation()
      PURE_VIRTUAL(IIsdkIHandJoints::GetHandedness, return EIsdkHandedness::Left;);

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  const UIsdkHandJointMappings* GetHandJointMappings();
  virtual const UIsdkHandJointMappings* GetHandJointMappings_Implementation()
      PURE_VIRTUAL(IIsdkIHandJoints::GetHandJointMappings, return nullptr;);
};
