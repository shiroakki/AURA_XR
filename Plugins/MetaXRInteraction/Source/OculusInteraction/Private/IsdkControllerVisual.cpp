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

#include "IsdkControllerVisual.h"
#include "DataSources/IsdkIRootPose.h"

// Sets default values for this component's properties
UIsdkControllerVisual::UIsdkControllerVisual()
{
  PrimaryComponentTick.bCanEverTick = true;
  PointerPoseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PointerPoseComponent"));
  PointerPoseComponent->SetupAttachment(this);
}

// Called when the game starts
void UIsdkControllerVisual::BeginPlay()
{
  Super::BeginPlay();
}

// Called every frame
void UIsdkControllerVisual::TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  UpdateController();
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
  UpdateChildTransforms();
}

void UIsdkControllerVisual::SetHandPointerPoseDataSource(
    TScriptInterface<IIsdkIHandPointerPose> InHandPointerPoseDataSource)
{
  UActorComponent* ControllerActorComponent =
      Cast<UActorComponent>(HandPointerPoseDataSource.GetObject());
  if (IsValid(ControllerActorComponent))
  {
    RemoveTickPrerequisiteComponent(ControllerActorComponent);
  }
  HandPointerPoseDataSource = InHandPointerPoseDataSource;
  ControllerActorComponent = Cast<UActorComponent>(HandPointerPoseDataSource.GetObject());
  if (IsValid(ControllerActorComponent))
  {
    AddTickPrerequisiteComponent(ControllerActorComponent);
  }
}

void UIsdkControllerVisual::SetRootPoseDataSource(
    TScriptInterface<IIsdkIRootPose> InRootPoseDataSource)
{
  UActorComponent* ControllerActorComponent = Cast<UActorComponent>(RootPoseDataSource.GetObject());
  if (IsValid(ControllerActorComponent))
  {
    RemoveTickPrerequisiteComponent(ControllerActorComponent);
  }
  RootPoseDataSource = InRootPoseDataSource;
  ControllerActorComponent = Cast<UActorComponent>(RootPoseDataSource.GetObject());
  if (IsValid(ControllerActorComponent))
  {
    AddTickPrerequisiteComponent(ControllerActorComponent);
  }
}

void UIsdkControllerVisual::UpdateController()
{
  if (IsValid(RootPoseDataSource.GetObject()))
  {
    const bool bIsControllerPoseValid =
        IIsdkIRootPose::Execute_IsRootPoseValid(RootPoseDataSource.GetObject());
    if (bIsControllerPoseValid)
    {
      const auto ControllerPose =
          IIsdkIRootPose::Execute_GetRootPose(RootPoseDataSource.GetObject());
      SetWorldTransform(ControllerPose, false, nullptr, ETeleportType::TeleportPhysics);
    }
  }

  if (IsValid(HandPointerPoseDataSource.GetObject()))
  {
    bool bIsPointerPoseValid = false;
    FTransform RelativePointerPose;
    IIsdkIHandPointerPose::Execute_GetRelativePointerPose(
        HandPointerPoseDataSource.GetObject(), RelativePointerPose, bIsPointerPoseValid);
    if (bIsPointerPoseValid)
    {
      PointerPoseComponent->SetRelativeTransform(RelativePointerPose);
    }
  }
}
