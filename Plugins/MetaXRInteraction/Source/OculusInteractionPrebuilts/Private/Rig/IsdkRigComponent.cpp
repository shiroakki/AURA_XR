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

#include "Rig/IsdkRigComponent.h"

#include "UObject/UObjectIterator.h"
#include "Subsystem/IsdkWidgetSubsystem.h"
#include "EnhancedInputComponent.h"
#include "Subsystem/IsdkITrackingDataSubsystem.h"
#include "Interaction/IsdkRayInteractor.h"
#include "Rig/IsdkRigModifier.h"
#include "Engine/SkeletalMesh.h"
#include "CollisionShape.h"
#include "IsdkControllerVisual.h"
#include "Interaction/IsdkPokeInteractor.h"
#include "Interaction/IsdkGrabberComponent.h"
#include "IsdkFunctionLibrary.h"
#include "IXRTrackingSystem.h"
#include "Rig/IsdkHandVisualsRigComponent.h"
#include "Materials/Material.h"
#include "DataSources/IsdkIHandJoints.h"
#include "DataSources/IsdkSyntheticHand.h"
#include "HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
UIsdkRigComponent::UIsdkRigComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
  PrimaryComponentTick.bCanEverTick = true;
  PrimaryComponentTick.bStartWithTickEnabled = true;

  HandVisuals = CreateOptionalDefaultSubobject<UIsdkHandVisualsRigComponent>(TEXT("HandVisuals"));
  ControllerVisuals =
      CreateOptionalDefaultSubobject<UIsdkControllerVisualsRigComponent>(TEXT("ControllerVisuals"));

  InputActions = CreateDefaultSubobject<UIsdkInputActionsRigComponent>(TEXT("InputActions"));
  RayInteraction = CreateDefaultSubobject<UIsdkRayInteractionRigComponent>(TEXT("RayInteraction"));
  PokeInteraction =
      CreateDefaultSubobject<UIsdkPokeInteractionRigComponent>(TEXT("PokeInteraction"));
  GrabInteraction =
      CreateDefaultSubobject<UIsdkGrabInteractionRigComponent>(TEXT("GrabInteraction"));
  RayInteraction->GrabSelectPose = GrabInteraction->GrabSelectPose;
  InteractionGroup =
      CreateDefaultSubobject<UIsdkInteractionGroupRigComponent>(TEXT("InteractionGroup"));
}

void UIsdkRigComponent::BeginPlay()
{
  Super::BeginPlay();

  // Subscribe to input action events
  if (bAutoBindInputActions)
  {
    const auto FirstLocalPlayer = UGameplayStatics::GetPlayerController(this, 0);

    AActor* OwnerActor = GetOwner();
    OwnerActor->EnableInput(FirstLocalPlayer);
    const auto EnhancedInputComponent = Cast<UEnhancedInputComponent>(OwnerActor->InputComponent);
    if (ensureMsgf(
            IsValid(EnhancedInputComponent),
            TEXT("IsdkRigHand: Could not create UEnhancedInputComponent.")))
    {
      BindInputActions(EnhancedInputComponent);
    }
  }

  // Register interactors to the widget system
  RegisterInteractorWidgetIndices();

  // Setup interaction groups
  CreateInteractionGroupConditionals();

  // Spawn & Initialize Rig Modifiers
  for (TSubclassOf<UIsdkRigModifier> RigModifierClass : RigModifiersToSpawn)
  {
    UIsdkRigModifier* NewRigModifier = NewObject<UIsdkRigModifier>(this, RigModifierClass);
    NewRigModifier->InitializeRigModifier(this);
    ActiveRigModifiers.Add(NewRigModifier);
  }
}

void UIsdkRigComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
  Super::EndPlay(EndPlayReason);

  UnregisterInteractorWidgetIndices();

  // Shut Down Active Rig Modifiers
  for (UIsdkRigModifier* ThisRigModifier : ActiveRigModifiers)
  {
    ThisRigModifier->ShutdownRigModifier(this);
  }
}

void UIsdkRigComponent::TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  if (!bAreDataSourcesReady)
  {
    if (!IsValid(HmdDataSource.GetObject()))
    {
      InitializeHmdDataSource();
    }
    if (IsValid(HandVisuals) && !IsValid(HandVisuals->AttachedToMotionController))
    {
      if (HandVisuals->TryAttachToParentMotionController(this))
      {
        OnHandVisualsAttached();
      }
    }
    if (IsValid(ControllerVisuals) && !IsValid(ControllerVisuals->AttachedToMotionController))
    {
      if (ControllerVisuals->TryAttachToParentMotionController(this))
      {
        OnControllerVisualsAttached();
      }
    }

    bAreDataSourcesReady = IsValid(HmdDataSource.GetObject()) &&
        IsValid(GetVisuals()->GetDataSources().DataSourceComponent);
    if (bAreDataSourcesReady)
    {
      // Tell interested parties that data sources are available.
      DataSourcesReady.Broadcast();
    }
  }
}

void UIsdkRigComponent::SetRigComponentDefaults(EIsdkHandType HandType)
{
  check(HandType != EIsdkHandType::None);

  if (IsValid(HandVisuals))
  {
    HandVisuals->SetSubobjectPropertyDefaults(HandType);
  }
  if (IsValid(ControllerVisuals))
  {
    ControllerVisuals->SetSubobjectPropertyDefaults(HandType);
  }
  InputActions->SetSubobjectPropertyDefaults(HandType);

  if (HandType == EIsdkHandType::HandLeft)
  {
    WidgetVirtualUser.VirtualUserIndex = 0;
  }
  else if (HandType == EIsdkHandType::HandRight)
  {
    WidgetVirtualUser.VirtualUserIndex = 1;
  }
}

FName GetMappedBoneName(
    UIsdkHandVisualsRigComponent* HandVisuals,
    EIsdkHandBones HandBone,
    FName DefaultSocket)
{
  if (IsValid(HandVisuals))
  {
    return HandVisuals->TrackedHandVisual->MappedBoneNames[static_cast<size_t>(HandBone)];
  }
  return DefaultSocket;
}

UIsdkTrackedDataSourceRigComponent* UIsdkRigComponent::GetVisuals()
{
  UIsdkTrackedDataSourceRigComponent* Visuals = IsValid(HandVisuals)
      ? static_cast<UIsdkTrackedDataSourceRigComponent*>(HandVisuals)
      : static_cast<UIsdkTrackedDataSourceRigComponent*>(ControllerVisuals);

  checkf(
      IsValid(Visuals),
      TEXT("%s: Either HandVisuals or ControllerVisuals must be set"),
      *GetFullName()) return Visuals;
}

void UIsdkRigComponent::UpdateComponentDataSources()
{
  UIsdkTrackedDataSourceRigComponent* Visuals = GetVisuals();
  UIsdkSyntheticHand* SyntheticHand = IsValid(HandVisuals) ? HandVisuals->SyntheticHand : nullptr;
  const FIsdkTrackingDataSources& DataSources = Visuals->GetDataSources();

  FName InteractorAttachSocket{};
  USceneComponent* InteractorAttachComponent{};
  Visuals->GetDefaultInteractorSocket(InteractorAttachComponent, InteractorAttachSocket);

  // Wire up data sources to interactors that work with either controllers or hands
  RayInteraction->BindDataSources(
      DataSources,
      HmdDataSource,
      InteractorAttachComponent,
      GetMappedBoneName(HandVisuals, RayInteractorSocket, InteractorAttachSocket));

  PokeInteraction->BindDataSources(
      DataSources,
      SyntheticHand,
      InteractorAttachComponent,
      GetMappedBoneName(HandVisuals, PokeInteractorSocket, InteractorAttachSocket));

  GrabInteraction->BindDataSources(
      DataSources,
      HmdDataSource,
      InteractorAttachComponent,
      GetMappedBoneName(HandVisuals, GrabberSocket, InteractorAttachSocket));

  // Some things only work with a hand.
  if (IsValid(HandVisuals))
  {
    // Bind the optional 'Hand Pinch' gesture to the grab interactor, since we have a HandVisual.
    GrabInteraction->BindInputHandPinch(HandVisuals->TrackedHandVisual, EIsdkFingerType::Index);
    GrabInteraction->ThumbTipSocketName =
        HandVisuals->TrackedHandVisual
            ->MappedBoneNames[static_cast<int>(EIsdkHandBones::HandThumbTip)];

    // Setting Inbound HandData Reference to our DataSource from HandVisual
    if (IsValid(HandVisuals->SyntheticHand))
    {
      DataSources.DataSourceComponent->SetInboundHandData(
          IIsdkIHandJoints::Execute_GetHandData(HandVisuals->SyntheticHand));
    }
  }
}

void UIsdkRigComponent::RegisterInteractorWidgetIndices()
{
  if (GetOwner()->HasActorBegunPlay() || GetOwner()->IsActorBeginningPlay())
  {
    // Registering the interactors with the ISDK Widget Subsystem will allow them to send
    // VirtualUserPointerEvents to Slate Widgets.
    UIsdkWidgetSubsystem& IsdkWidgetSubsystem = UIsdkWidgetSubsystem::Get(GetWorld());
    IsdkWidgetSubsystem.RegisterVirtualUserInfo(GetPokeInteractor(), WidgetVirtualUser);
    IsdkWidgetSubsystem.RegisterVirtualUserInfo(GetRayInteractor(), WidgetVirtualUser);
  }
}

void UIsdkRigComponent::UnregisterInteractorWidgetIndices()
{
  UIsdkWidgetSubsystem& IsdkWidgetSubsystem = UIsdkWidgetSubsystem::Get(GetWorld());
  IsdkWidgetSubsystem.UnregisterVirtualUserInfo(GetPokeInteractor());
  IsdkWidgetSubsystem.UnregisterVirtualUserInfo(GetRayInteractor());
}

void UIsdkRigComponent::CreateInteractionGroupConditionals()
{
  constexpr auto PokeInteractorGroupBehavior = FIsdkInteractionGroupMemberBehavior{
      .bDisableOnOtherSelect = true, .bDisableOnOtherNearFieldHover = false, .bIsNearField = true};
  auto CalculateInteractorGroupMemberState = [](const FIsdkInteractorStateEvent& Event)
  {
    FIsdkInteractionGroupMemberState State{};
    if (IsValid(Event.Interactor.GetObject()))
    {
      State.bIsSelectStateBlocking = Event.Interactor->HasSelectedInteractable();
    }
    return State;
  };

  PokeInteraction->GetEnabledConditional()->AddConditional(InteractionGroup->AddInteractor(
      PokeInteraction->PokeInteractor,
      *PokeInteraction->PokeInteractor->GetInteractorStateChangedDelegate(),
      CalculateInteractorGroupMemberState,
      PokeInteractorGroupBehavior));

  constexpr auto RayInteractorGroupBehavior = FIsdkInteractionGroupMemberBehavior{
      .bDisableOnOtherSelect = true,
      .bDisableOnOtherNearFieldHover = true,
      .bIsNearField = false // false here means a ray wont prevent near-field interactors hovering.
  };
  RayInteraction->GetEnabledConditional()->AddConditional(InteractionGroup->AddInteractor(
      RayInteraction->RayInteractor,
      *RayInteraction->RayInteractor->GetInteractorStateChangedDelegate(),
      CalculateInteractorGroupMemberState,
      RayInteractorGroupBehavior));

  constexpr auto GrabInteractorGroupBehavior = FIsdkInteractionGroupMemberBehavior{
      .bDisableOnOtherSelect = true,
      .bDisableOnOtherNearFieldHover = true, // disable grab when poke is hovering
      .bIsNearField = true};
  GrabInteraction->GetEnabledConditional()->AddConditional(InteractionGroup->AddInteractor(
      GrabInteraction->Grabber,
      *GrabInteraction->Grabber->GetInteractorStateChangedDelegate(),
      CalculateInteractorGroupMemberState,
      GrabInteractorGroupBehavior));
}

void UIsdkRigComponent::BindInputActions(UEnhancedInputComponent* EnhancedInputComponent)
{
  // This just ensures we don't call this twice
  // Override this method to do the actual input assignments
  check(!bHasBoundInputActions);
  bHasBoundInputActions = true;

  RayInteraction->BindInputActions(
      EnhancedInputComponent, InputActions->SelectAction, InputActions->SelectStrengthAction);
  GrabInteraction->BindInputActions(EnhancedInputComponent, InputActions->PinchGrabAction);
  // Pinch select input mapping is currently not available for OpenXR hands so we use the native
  // finger recognizer events to trigger pinch select/unselect
  const IXRTrackingSystem* XRTrackingSystem = GEngine->XRSystem.Get();
  if (XRTrackingSystem && XRTrackingSystem->GetSystemName() == OpenXRName)
  {
    RayInteraction->GrabSelectPose->PinchGrabStarted.AddUniqueDynamic(
        RayInteraction->RayInteractor, &UIsdkRayInteractor::Select);
    RayInteraction->GrabSelectPose->PinchGrabFinished.AddUniqueDynamic(
        RayInteraction->RayInteractor, &UIsdkRayInteractor::Unselect);
  }
}

void UIsdkRigComponent::InitializeHmdDataSource()
{
  // If our HMD Data Source is good, we're done
  if (IsValid(HmdDataSource.GetObject()))
  {
    return;
  }

  AActor* OwningActor = this->GetAttachParentActor();
  if (!ensureMsgf(
          IsValid(OwningActor),
          TEXT("UIsdkRigComponent::InitializeHmdDataSource() - OwningActor isn't valid!")))
  {
    return;
  }

  TArray<UIsdkRigComponent*> ActorRigComponents;
  OwningActor->GetComponents(UIsdkRigComponent::StaticClass(), ActorRigComponents);

  // Check every other RigComponent on this actor and if any of them already have an HMD Data
  // Source, grab a reference to that
  for (UIsdkRigComponent* RigComponent : ActorRigComponents)
  {
    if (RigComponent == this || !IsValid(RigComponent))
    {
      continue;
    }
    if (RigComponent->GetHmdDataSource(HmdDataSource))
    {
      break;
    }
  }

  // Our search was in vain, set up an HMD Data Source ourselves
  if (!IsValid(HmdDataSource.GetObject()))
  {
    const auto TrackingData = GetVisuals()->GetTrackingDataSubsystem();
    if (ensureMsgf(
            IsValid(TrackingData.GetObject()),
            TEXT(
                "UIsdkRigComponent::InitializeHmdDataSource() - Could not get the IsdkTrackingDataSubsystem.")))
    {
      HmdDataSource = IIsdkITrackingDataSubsystem::Execute_CreateHmdDataSourceComponent(
          TrackingData.GetObject(), GetOwner());
    }
  }
}

void UIsdkHandRigComponentLeft::OnHandVisualsAttached()
{
  Super::OnHandVisualsAttached();

  HandVisuals->CreateDataSourcesAsTrackedHand();
  UpdateComponentDataSources();
}

void UIsdkHandRigComponentRight::OnHandVisualsAttached()
{
  Super::OnHandVisualsAttached();

  HandVisuals->CreateDataSourcesAsTrackedHand();
  UpdateComponentDataSources();
}
