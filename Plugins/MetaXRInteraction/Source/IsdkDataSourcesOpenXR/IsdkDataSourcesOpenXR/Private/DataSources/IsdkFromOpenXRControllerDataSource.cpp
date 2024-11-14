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

#include "DataSources/IsdkFromOpenXRControllerDataSource.h"
#include "IHandTracker.h"
#include "IsdkDataSourcesOpenXR.h"
#include "IXRTrackingSystem.h"
#include "DataSources/IsdkOpenXRHelper.h"
#include "Features/IModularFeatures.h"

namespace
{
const FVector ControllerRelativePointerOffset = FVector(4.0, 0, -3);
}
// Sets default values for this component's properties
UIsdkFromOpenXRControllerDataSource::UIsdkFromOpenXRControllerDataSource()
    : MotionController(nullptr), bIsLastGoodRootPoseValid(false), bIsLastGoodPointerPoseValid(false)
{
  PrimaryComponentTick.bCanEverTick = true;
  PrimaryComponentTick.bStartWithTickEnabled = true;
  PrimaryComponentTick.TickGroup = TG_PrePhysics;
  PrimaryComponentTick.SetTickFunctionEnable(true);

  IsRootPoseConnected = NewObject<UIsdkConditionalBool>(this, TEXT("IsRootPoseConnected"));
  IsRootPoseHighConfidence =
      NewObject<UIsdkConditionalBool>(this, TEXT("IsRootPoseHighConfidence"));
}

FTransform UIsdkFromOpenXRControllerDataSource::GetRootPose_Implementation()
{
  const FQuat HandRootFixupRotationLeft = FQuat(FVector::UnitX(), HALF_PI);
  const FQuat HandRootFixupRotationRight = FQuat(FVector::UnitX(), -HALF_PI);

  FTransform MotionTransform = MotionController->GetComponentTransform();
  const FQuat WristRotation =
      Handedness == EIsdkHandedness::Left ? HandRootFixupRotationLeft : HandRootFixupRotationRight;
  MotionTransform.SetRotation(MotionTransform.GetRotation() * WristRotation);
  return MotionTransform;
}

void UIsdkFromOpenXRControllerDataSource::ReadControllerData()
{
  FTransform GripPose;
  if (GetGripPose(GripPose))
  {
    IsRootPoseHighConfidence->SetValue(true);
  }
  else
  {
    IsRootPoseHighConfidence->SetValue(false);
  }
  RelativePointerPose =
      FTransform{FQuat(FVector::UnitY(), PI / 3), ControllerRelativePointerOffset};
  bIsLastGoodPointerPoseValid = true;
}

void UIsdkFromOpenXRControllerDataSource::ReadHandedness()
{
  Handedness = FIsdkOpenXRHelper::ReadHandedness(MotionController);
}

bool UIsdkFromOpenXRControllerDataSource::IsHandTrackingEnabled()
{
  if (auto& ModularFeatures = IModularFeatures::Get();
      ModularFeatures.IsModularFeatureAvailable(IHandTracker::GetModularFeatureName()))
  {
    const auto& HandTracker =
        ModularFeatures.GetModularFeature<IHandTracker>(IHandTracker::GetModularFeatureName());
    return HandTracker.IsHandTrackingStateValid();
  }
  return false;
}

bool UIsdkFromOpenXRControllerDataSource::GetGripPose(FTransform& OutGripPose)
{
  auto XRTrackingSystem = GEngine->XRSystem.Get();
  if (!XRTrackingSystem)
  {
    return false;
  }
  FQuat Orientation;
  FVector Position;
  if (XRTrackingSystem->GetCurrentPose(
          XRTrackingSystem->GetTrackingOrigin(), Orientation, Position))
  {
    OutGripPose = FTransform(Orientation, Position);
    return true;
  }
  return false;
}

// Called every frame
void UIsdkFromOpenXRControllerDataSource::TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  auto XRTrackingSystem = GEngine->XRSystem.Get();
  if (!XRTrackingSystem ||
      XRTrackingSystem->GetSystemName() != FIsdkDataSourcesOpenXRModule::OpenXRName)
  {
    return;
  }
  auto& ModularFeatures = IModularFeatures::Get();
  if (!ModularFeatures.IsModularFeatureAvailable(IHandTracker::GetModularFeatureName()))
  {
    return;
  }
  auto& HandTracker =
      ModularFeatures.GetModularFeature<IHandTracker>(IHandTracker::GetModularFeatureName());
  EControllerHand Hand =
      (Handedness == EIsdkHandedness::Left) ? EControllerHand::Left : EControllerHand::Right;
  OutPositions.Empty();
  OutRotations.Empty();
  OutRadii.Empty();
  bool bIsHandDataValid =
      HandTracker.GetAllKeypointStates(Hand, OutPositions, OutRotations, OutRadii);

  IsRootPoseConnected->SetValue(
      MotionController && !bIsHandDataValid && MotionController->IsTracked());
  if (IsRootPoseConnected_Implementation())
  {
    LastGoodRootPose = GetRootPose_Implementation();
    bIsLastGoodRootPoseValid = true;
    bIsLastGoodPointerPoseValid = true;
    ReadControllerData();
  }
  else
  {
    IsRootPoseHighConfidence->SetValue(false);
  }
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UIsdkFromOpenXRControllerDataSource::SetMotionController(
    UMotionControllerComponent* InMotionController)
{
  if (IsValid(MotionController))
  {
    RemoveTickPrerequisiteComponent(MotionController);
  }
  MotionController = InMotionController;
  if (IsValid(MotionController))
  {
    AddTickPrerequisiteComponent(MotionController);
  }
  ReadHandedness();
}
