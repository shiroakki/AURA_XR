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

#include "Interaction/IsdkGrabbableComponent.h"
#include "Interaction/IsdkTransformer.h"
#include "Subsystem/IsdkWorldSubsystem.h"
#include "CoreMinimal.h"
#include "IsdkRuntimeSettings.h"
#include "Components/ShapeComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Interaction/IsdkGrabberComponent.h"

UIsdkGrabbableComponent::UIsdkGrabbableComponent()
{
  PrimaryComponentTick.bCanEverTick = true;
  // Prioritize pre physics in order to reset velocities when releasing before physics solver to
  // avoid weird velocity issues
  PrimaryComponentTick.TickGroup = ETickingGroup::TG_PrePhysics;
  Transformer = CreateDefaultSubobject<UIsdkTransformer>(TEXT("ISDK Grabbable Transformer"));

  GameplayTagContainer.AddTag(IsdkGameplayTags::TAG_Isdk_Type_Interactable_Grab);
}

void UIsdkGrabbableComponent::BeginPlay()
{
  if (IsThrowable)
  {
    ThrowableComponent = NewObject<UIsdkThrowable>(GetOwner(), TEXT("ISDK Throwable"));

    if (IsValid(ThrowableComponent))
    {
      ThrowableComponent->Settings = this->ThrowSettings;
      ThrowableComponent->RegisterComponent();
      ThrowableComponent->AttachToComponent(
          GetOwner()->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
      ThrowableComponent->TrackedComponent = nullptr;
    }
  }

  Collider = Cast<UPrimitiveComponent>(ColliderComponent);

  switch (TransformerRotateType)
  {
    case EIsdkTransformerRotationType::None:
      break;
    case EIsdkTransformerRotationType::All:
      break;
    case EIsdkTransformerRotationType::XAxis:
      RotateConstrainAxes.XAxis = SingleAxisRotateConstrain;
      break;
    case EIsdkTransformerRotationType::YAxis:
      RotateConstrainAxes.YAxis = SingleAxisRotateConstrain;
      break;
    case EIsdkTransformerRotationType::ZAxis:
      RotateConstrainAxes.ZAxis = SingleAxisRotateConstrain;
      break;
  }

  TransformerConfig = FIsdkTransformerConfig(
      TransformerTranslate,
      TransformerRotateType,
      TranslateConstrainAxes,
      RotateConstrainAxes,
      TransformerScale,
      ScaleConstrain,
      MaxGrabPoints);

  Transformer->SetConfig(TransformerConfig);
  SetDebugRendering(ShowDebug); // will update transformer as well

  if (const auto parent = GetAttachParent())
  {
    SetTransformTargetComponent(parent);
  }

  if (Collider == nullptr)
  {
    FindCollider();
  }

  Super::BeginPlay();
}

void UIsdkGrabbableComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
  Super::EndPlay(EndPlayReason);
}

void UIsdkGrabbableComponent::TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* TickFn)
{
  Super::TickComponent(DeltaTime, TickType, TickFn);

  if (ShowDebug)
  {
#ifdef USE_DEBUG_DRAW
    FColor Color;
    switch (State)
    {
      case EIsdkInteractableState::Normal:
        Color = FColor::White;
        break;
      case EIsdkInteractableState::Hover:
        Color = FColor::Yellow;
        break;
      case EIsdkInteractableState::Select:
        Color = FColor::Green;
        break;
      default:
        break;
    }

    DrawDebugSphere(
        GetWorld(), GetComponentLocation(), GetCollider()->Bounds.GetSphere().W, 16, Color);
#endif
  }
}

void UIsdkGrabbableComponent::GetInteractableStateRelationships(
    EIsdkInteractableState InState,
    TArray<TScriptInterface<IIsdkIInteractorState>>& OutInteractors) const
{
  for (auto* Interactor : Interactors)
  {
    auto* Grabber = Cast<UIsdkGrabberComponent>(Interactor);
    const bool bIsSelected = IsValid(Grabber) && Transformer->IsBeingGrabbedBy(Grabber);

    const bool bWantsHovered = InState == EIsdkInteractableState::Hover;
    const bool bWantsSelected = InState == EIsdkInteractableState::Select;
    if ((!bIsSelected && bWantsHovered) || (bIsSelected && bWantsSelected))
    {
      OutInteractors.Add(Interactor);
    }
  }
}

void UIsdkGrabbableComponent::PostEvent(const FIsdkInteractionPointerEvent& Event)
{
  InteractionPointerEvent.Broadcast(Event);

  Transformer->PostEvent(Event);
  SetState(Transformer->GetState());

  if (IsThrowable && IsValid(ThrowableComponent))
  {
    if (Event.Type == EIsdkPointerEventType::Select)
    {
      ThrowableComponent->TrackedComponent = Transformer->GetTarget();
    }
    else if (Event.Type == EIsdkPointerEventType::Unselect)
    {
      // may still be holding on with a second grabber
      if (!IsValid(ThrowableComponent->TrackedComponent) ||
          GetInteractableState() == EIsdkInteractableState::Select)
      {
        return;
      }

      // Throw!
      const FVector ReleaseVelocity = ThrowableComponent->GetVelocity();
      const FVector AngularVelocity = ThrowableComponent->GetAngularVelocity().Euler();

      Collider->SetPhysicsLinearVelocity(ReleaseVelocity);
      Collider->SetPhysicsAngularVelocityInDegrees(AngularVelocity);
      Collider->SetEnableGravity(EnableGravityWhenThrown);
      ThrowableComponent->TrackedComponent = nullptr;
    }
  }
}

UPrimitiveComponent* UIsdkGrabbableComponent::GetCollider()
{
  if (!Collider)
  {
    FindCollider();
  }

  return Collider;
}

void UIsdkGrabbableComponent::SetMaxGrabPoints(int Count)
{
  MaxGrabPoints = Count;
  if (IsValid(Transformer))
  {
    TransformerConfig.MaxGrabPoints = Count;
    Transformer->SetConfig(TransformerConfig);
  }
}

void UIsdkGrabbableComponent::SetTransformTargetComponent(USceneComponent* component)
{
  Transformer->SetTarget(component);
}

void UIsdkGrabbableComponent::SetState(EIsdkInteractableState NewState)
{
  const auto oldState = GetInteractableState();
  if (oldState == NewState)
  {
    return;
  }

  Super::SetState(NewState);
  switch (NewState)
  {
    case EIsdkInteractableState::Select:
      if (IsValid(Collider))
      {
        PhysicsEnabledAtSelect = Collider->IsSimulatingPhysics();
        if (PhysicsEnabledAtSelect)
        {
          const auto Vel = Collider->GetPhysicsLinearVelocity();
          Collider->AddForce(-Vel);
          Collider->SetSimulatePhysics(!PhysicsEnabledAtSelect);
        }
      }
      break;
    default:
      if (IsValid(Collider) && oldState == EIsdkInteractableState::Select)
      {
        Collider->SetSimulatePhysics(PhysicsEnabledAtSelect);
      }
      break;
  }
}

UPrimitiveComponent* UIsdkGrabbableComponent::FindCollider()
{
  bool Found{false};
  UStaticMeshComponent* FoundMesh{nullptr};

  if (const auto Root = GetOwner()->GetRootComponent())
  {
    TArray<USceneComponent*> Candidates;
    Root->GetChildrenComponents(true, Candidates);
    Candidates.Add(Root);
    for (const auto Candidate : Candidates)
    {
      if (UShapeComponent* Shape = Cast<UShapeComponent>(Candidate))
      {
        SetCollider(Shape);
        Found = true;
        break;
      }
      else if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(Candidate))
      {
        FoundMesh = Mesh;
      }
    }
  }

  // create and register collision if not provided
  if (!Found && FoundMesh)
  {
    // no collider in our actor?  Fine then, we'll use the whole static mesh
    FoundMesh->UpdateCollisionFromStaticMesh();
    SetCollider(FoundMesh);
  }

  if (Collider)
  {
    Collider->SetMobility(EComponentMobility::Movable);
  }

  return Collider;
}
