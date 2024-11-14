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

#include "Rig/IsdkControllerRigComponent.h"
#include "IsdkControllerVisual.h"
#include "IXRTrackingSystem.h"
#include "UObject/ConstructorHelpers.h"

void UIsdkControllerRigComponent::BeginPlay()
{
  Super::BeginPlay();
  InitializeControllerHand();

  if (IsValid(ControllerVisuals))
  {
    ControllerVisuals->GetEnabledConditional()->ResolvedValueChanged.AddWeakLambda(
        this, [this](bool bIsEnabled) { HandleIsEnabledConditionalChanged(bIsEnabled); });
    ControllerVisuals->GetForceOffVisibility()->ResolvedValueChanged.AddWeakLambda(
        this, [this](bool bIsVisible) { HandleForceVisibilityChange(bIsVisible); });
  }
}

void UIsdkControllerRigComponent::OnControllerVisualsAttached()
{
  Super::OnControllerVisualsAttached();
  ControllerVisuals->CreateDataSourcesAsTrackedController();
  UpdateComponentDataSources();
}

TSubclassOf<AActor> UIsdkControllerRigComponent::FindBPFromPath(const FString& Path)
{
  ConstructorHelpers::FClassFinder<AActor> ClassFinder(*Path);
  if (ClassFinder.Succeeded())
  {
    return ClassFinder.Class;
  }

  return nullptr;
}

void UIsdkControllerRigComponent::SetControllerHandBP(const FString& Path)
{
  const auto ControllerHandBPFinder = FindBPFromPath(Path);
  if (ControllerHandBPFinder != nullptr)
  {
    ControllerHandBP = ControllerHandBPFinder;
  }
}

void UIsdkControllerRigComponent::SetVisibilityMode(EControllerHandVisibilityMode Mode)
{
  ControllerVisuals->VisibilityMode = Mode;
  HandleVisibility(SpawnedHandActor, true);
}

void UIsdkControllerRigComponent::SetSpawnedHandActor(AActor* Actor)
{
  SpawnedHandActor = Actor;
}

AActor* UIsdkControllerRigComponent::GetSpawnedHandActor() const
{
  return SpawnedHandActor;
}

void UIsdkControllerRigComponent::InitializeControllerHand()
{
  if (ControllerHandBP)
  {
    SpawnedHandActor = GetWorld()->SpawnActor<AActor>(
        ControllerHandBP, FVector::ZeroVector, FRotator::ZeroRotator);
    if (IsValid(SpawnedHandActor))
    {
      SpawnedHandActor->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
      // Controller Hand offset for OpenXR
      IXRTrackingSystem* XRTrackingSystem = GEngine->XRSystem.Get();
      if (XRTrackingSystem && XRTrackingSystem->GetSystemName() == ControllerVisuals->OpenXRName)
      {
        SpawnedHandActor->AddActorLocalRotation(FQuat(FVector::UnitY(), PI / 3));
      }
    }
  }
}

void UIsdkControllerRigComponent::HandleVisibility(AActor* ControllerHand, bool bIsEnabled)
{
  if (IsValid(ControllerHand))
  {
    switch (ControllerVisuals->VisibilityMode)
    {
      case EControllerHandVisibilityMode::Both:
        ControllerHand->SetActorHiddenInGame(!bIsEnabled);
        break;
      case EControllerHandVisibilityMode::ControllerOnly:
        ControllerHand->SetActorHiddenInGame(true);
        break;
      case EControllerHandVisibilityMode::HandsOnly:
        ControllerVisuals->ControllerVisual->SetHiddenInGame(bIsEnabled);
        ControllerHand->SetActorHiddenInGame(!bIsEnabled);
        break;
    }
  }
}

void UIsdkControllerRigComponent::HandleForceVisibilityChange(bool bIsVisible) const
{
  if (!IsValid(ControllerVisuals) || !IsValid(SpawnedHandActor))
  {
    return;
  }
  if (ControllerVisuals->VisibilityMode == EControllerHandVisibilityMode::ControllerOnly)
  {
    return;
  }
  if (!ControllerVisuals->GetForceOffVisibility()->IsEmpty())
  {
    SpawnedHandActor->SetActorHiddenInGame(bIsVisible);
  }
}

void UIsdkControllerRigComponent::HandleIsEnabledConditionalChanged(bool bIsEnabled)
{
  if (IsValid(SpawnedHandActor))
  {
    HandleVisibility(SpawnedHandActor, bIsEnabled);
  }
}
