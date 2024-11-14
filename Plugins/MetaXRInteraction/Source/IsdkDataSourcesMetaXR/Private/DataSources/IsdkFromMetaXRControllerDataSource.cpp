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

#include "DataSources/IsdkFromMetaXRControllerDataSource.h"

#include "IsdkDataSourcesMetaXR.h"
#include "IsdkOculusXRHelper.h"
#include "Core/IsdkConditionalBool.h"

// Sets default values for this component's properties
UIsdkFromMetaXRControllerDataSource::UIsdkFromMetaXRControllerDataSource()
    : MotionController(nullptr)
{
  PrimaryComponentTick.bCanEverTick = true;
  PrimaryComponentTick.bStartWithTickEnabled = true;
  PrimaryComponentTick.TickGroup = TG_PrePhysics;
  PrimaryComponentTick.SetTickFunctionEnable(true);

  IsRootPoseConnected = NewObject<UIsdkConditionalBool>(this, TEXT("IsRootPoseConnected"));
  IsRootPoseHighConfidence =
      NewObject<UIsdkConditionalBool>(this, TEXT("IsRootPoseHighConfidence"));
}

// Called when the game starts
void UIsdkFromMetaXRControllerDataSource::BeginPlay()
{
  Super::BeginPlay();
}

// Called every frame
void UIsdkFromMetaXRControllerDataSource::TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  const auto& MetaXRModule = FIsdkDataSourcesMetaXRModule::GetChecked();
  const bool bIsHandTrackingCurrentlyEnabled = MetaXRModule.Input_IsHandTrackingEnabled();

  // Checking if the motion controller is being tracked solves the "static in mid air" problem
  // when switching from hands to controllers, when only one controller has connected.
  IsRootPoseConnected->SetValue(
      MotionController && !bIsHandTrackingCurrentlyEnabled && MotionController->IsTracked());

  if (IsRootPoseConnected_Implementation())
  {
    LastGoodRootPose = MotionController->GetComponentTransform();
    bIsLastGoodRootPoseValid = true;
    bIsLastGoodPointerPoseValid = true;

    ReadControllerData();
  }
  else
  {
    IsRootPoseHighConfidence->SetValue(false);
  }
}

void UIsdkFromMetaXRControllerDataSource::ReadControllerData()
{
  // `FIsdkOculusXRHelper::GetPointerPose` always returns the **hand** pointer pose
  // and after the switch the last known pointer pose.
  // The validity check using `UOculusXRInputFunctionLibrary::IsPointerPoseValid` returns
  // either "is the palm pointing towards the HMD" or the value before the hand tracking was lost.
  // Which means it is currently unrealiable, and that is why it is not used here.

  RelativePointerPose = FTransform(FVector(5.5, 0, 0));
  bIsLastGoodPointerPoseValid = true;

  IsRootPoseHighConfidence->SetValue(true);
}

void UIsdkFromMetaXRControllerDataSource::SetMotionController(
    UMotionControllerComponent* InMotionController)
{
  if (IsValid(MotionController))
  {
    RemoveTickPrerequisiteComponent(MotionController);
  }
  MotionController = InMotionController;

  // Ensure that this component ticks after the input component
  if (IsValid(MotionController))
  {
    AddTickPrerequisiteComponent(MotionController);
    ReadHandedness();
  }
}

void UIsdkFromMetaXRControllerDataSource::ReadHandedness()
{
  Handedness = FIsdkOculusXRHelper::ReadHandedness(MotionController);
}
