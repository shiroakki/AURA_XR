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

#include "Rig/IsdkControllerVisualsRigComponent.h"
#include "IsdkContentAssetPaths.h"
#include "IsdkControllerVisual.h"
#include "IXRTrackingSystem.h"
#include "Core/IsdkConditionalGroupAll.h"
#include "Engine/StaticMesh.h"
#include "Materials/Material.h"
#include "UObject/ConstructorHelpers.h"

UIsdkControllerVisualsRigComponent::UIsdkControllerVisualsRigComponent()
{
  ControllerVisual = CreateDefaultSubobject<UIsdkControllerVisual>(TEXT("ControllerVisual"));

  // Adjust the collision settings of the ControllerVisual component
  ControllerVisual->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
  ControllerVisual->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
  EnabledConditionalGroup =
      CreateDefaultSubobject<UIsdkConditionalGroupAll>(TEXT("ControllerEnabledConditional"));
}

void UIsdkControllerVisualsRigComponent::SetSubobjectPropertyDefaults(EIsdkHandType InHandType)
{
  // Sets default values for our components (such as mesh and material assets, bone mappings).
  // These are only used for property defaults - they can be overridden by a user in the details
  // panel of the actor instance in the editor.

  struct FStaticObjectFinders
  {
    ConstructorHelpers::FObjectFinderOptional<UStaticMesh> LeftControllerMeshFinder;
    ConstructorHelpers::FObjectFinderOptional<UStaticMesh> RightControllerMeshFinder;
    ConstructorHelpers::FObjectFinderOptional<UMaterial> LeftControllerMaterialFinder;
    ConstructorHelpers::FObjectFinderOptional<UMaterial> RightControllerMaterialFinder;

    FStaticObjectFinders()
        : LeftControllerMeshFinder(IsdkContentAssetPaths::Models::Controller::OculusControllerL),
          RightControllerMeshFinder(IsdkContentAssetPaths::Models::Controller::OculusControllerR),
          LeftControllerMaterialFinder(
              IsdkContentAssetPaths::Models::Controller::OculusControllerMaterialL),
          RightControllerMaterialFinder(
              IsdkContentAssetPaths::Models::Controller::OculusControllerMaterialR)
    {
    }
  };
  static FStaticObjectFinders StaticObjectFinders;
  UMaterial* DefaultControllerMaterial = nullptr;
  UStaticMesh* DefaultControllerMesh = nullptr;
  if (InHandType == EIsdkHandType::HandLeft)
  {
    DefaultControllerMesh = StaticObjectFinders.LeftControllerMeshFinder.Get();
    DefaultControllerMaterial = StaticObjectFinders.LeftControllerMaterialFinder.Get();
  }
  else if (InHandType == EIsdkHandType::HandRight)
  {
    DefaultControllerMesh = StaticObjectFinders.RightControllerMeshFinder.Get();
    DefaultControllerMaterial = StaticObjectFinders.RightControllerMaterialFinder.Get();
  }

  // Set mesh and material properties to default values.
  // These can be overridden by a user in the details panel of the actor instance in the editor.
  if (ensureMsgf(
          IsValid(DefaultControllerMesh),
          TEXT("%s: Failed to find hand mesh"),
          *ControllerVisual->GetOwner()->GetFullName()))
  {
    ControllerVisual->SetStaticMesh(DefaultControllerMesh);
  }

  if (ensureMsgf(
          IsValid(DefaultControllerMaterial),
          TEXT("%s: Failed to find hand material"),
          *ControllerVisual->GetOwner()->GetFullName()))
  {
    ControllerVisual->SetMaterial(0, DefaultControllerMaterial);
  }

  // Controllers do not have a synthetic visual.
  HandVisibilityMode = EIsdkRigHandVisibility::TrackedOnly;
}

USceneComponent* UIsdkControllerVisualsRigComponent::GetTrackedVisual() const
{
  return ControllerVisual;
}

void UIsdkControllerVisualsRigComponent::GetDefaultInteractorSocket(
    USceneComponent*& SocketComponent,
    FName& SocketName) const
{
  SocketComponent = ControllerVisual->GetPointerPoseComponent();
  SocketName = {};
}

void UIsdkControllerVisualsRigComponent::OnDataSourcesCreated()
{
  Super::OnDataSourcesCreated();

  ControllerVisual->AttachToComponent(
      AttachedToMotionController, FAttachmentTransformRules::KeepRelativeTransform);
  // Controller Visual offset for OpenXR
  IXRTrackingSystem* XRTrackingSystem = GEngine->XRSystem.Get();
  if (XRTrackingSystem && XRTrackingSystem->GetSystemName() == OpenXRName)
  {
    ControllerVisual->SetRelativeRotation(FQuat(FVector::UnitY(), PI / 3));
  }
  ControllerVisual->SetHandPointerPoseDataSource(LocalDataSources.HandPointerPose);

  // Watch for the data sources becoming enabled/disabled.
  const auto IsConnectedConditional =
      IIsdkIRootPose::Execute_IsRootPoseConnected(LocalDataSources.HandRootPose.GetObject());
  if (ensure(IsValid(IsConnectedConditional)))
  {
    EnabledConditionalGroup->AddConditional(IsConnectedConditional);
  }
}
