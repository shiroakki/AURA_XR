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

#include "Rig/IsdkGrabInteractionRigComponent.h"
#include "EnhancedInputComponent.h"
#include "Core/IsdkConditionalComponentIsActive.h"
#include "Core/IsdkConditionalGroupAll.h"
#include "Interaction/IsdkGrabberComponent.h"
#include "HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h"
#include "HandPoseDetection/IsdkHandPalmGrabRecognizer.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UIsdkGrabInteractionRigComponent::UIsdkGrabInteractionRigComponent()
{
  PrimaryComponentTick.bCanEverTick = true;
  bWantsInitializeComponent = true;
  bAutoActivate = true;

  Grabber = CreateDefaultSubobject<UIsdkGrabberComponent>(
      TEXT("IsdkGrabInteraction IsdkGrabberComponent"));
  GrabSelectPose = CreateDefaultSubobject<UIsdkHandFingerPinchGrabRecognizer>(
      TEXT("IsdkHandFingerPinchGrabRecognizer"));
  PalmGrabSelectPose =
      CreateDefaultSubobject<UIsdkHandPalmGrabRecognizer>(TEXT("IsdkHandPalmGrabRecognizer"));

  EnabledConditionalGroup =
      CreateDefaultSubobject<UIsdkConditionalGroupAll>(TEXT("GrabEnabledConditionalAll"));
  IsActiveConditional =
      CreateDefaultSubobject<UIsdkConditionalComponentIsActive>(TEXT("GrabIsActiveConditional"));
}

void UIsdkGrabInteractionRigComponent::InitializeComponent()
{
  Super::InitializeComponent();

  IsActiveConditional->SetComponent(this);
  EnabledConditionalGroup->AddConditional(IsActiveConditional);
  EnabledConditionalGroup->ResolvedValueChanged.AddWeakLambda(
      this, [this](bool bIsEnabled) { HandleIsEnabledConditionalChanged(bIsEnabled); });
}

void UIsdkGrabInteractionRigComponent::TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  if (IsValid(GrabSelectPose) && IsValid(GrabSelectPose->HandVisual))
  {
    if (IsValid(HandRootPose.GetObject()))
    {
      GrabSelectPose->CurrentWristForward = UKismetMathLibrary::GetForwardVector(
          IIsdkIRootPose::Execute_GetRootPose(HandRootPose.GetObject()).GetRotation().Rotator());
    }

    if (IsValid(HmdDataSource.GetObject()))
    {
      FTransform HmdPose;
      bool bIsTracked;
      IIsdkIHmdDataSource::Execute_GetHmdPose(HmdDataSource.GetObject(), HmdPose, bIsTracked);
      GrabSelectPose->CurrentHMDForward =
          UKismetMathLibrary::GetForwardVector(HmdPose.GetRotation().Rotator());
    }

    GrabSelectPose->UpdateState(DeltaTime);

    if (Grabber->bIsGrabbing != LastIsGrabbing)
    {
      UpdatePinchCollider(Grabber->bIsGrabbing);
      LastIsGrabbing = Grabber->bIsGrabbing;
    }
  }

  if (IsValid(PalmGrabSelectPose) && IsValid(PalmGrabSelectPose->HandVisual))
  {
    PalmGrabSelectPose->UpdateState(DeltaTime);

    if (Grabber->bIsGrabbing != LastIsGrabbing)
    {
      UpdatePinchCollider(Grabber->bIsGrabbing);
      LastIsGrabbing = Grabber->bIsGrabbing;
    }
  }
}

void UIsdkGrabInteractionRigComponent::HandleIsEnabledConditionalChanged(bool bIsEnabled)
{
  if (!bIsEnabled)
  {
    Grabber->Deactivate();
  }
  else
  {
    Grabber->Activate();
  }
}

void UIsdkGrabInteractionRigComponent::BindDataSources(
    const FIsdkTrackingDataSources& DataSources,
    TScriptInterface<IIsdkIHmdDataSource>& HmdDataSourceIn,
    USceneComponent* AttachToComponent,
    FName AttachToComponentSocket)
{
  Grabber->AttachToComponent(
      AttachToComponent, FAttachmentTransformRules::KeepRelativeTransform, AttachToComponentSocket);

  const auto Handedness = DataSources.HandJoints->GetHandedness_Implementation();

  if (Handedness == EIsdkHandedness::Right)
  {
    TArray<UPrimitiveComponent*> PalmColliders;
    Grabber->GetCollidersByType(EIsdkGrabColliderType::Palm, PalmColliders);
    for (const auto PalmCollider : PalmColliders)
    {
      PalmCollider->SetRelativeLocation(-PalmCollider->GetRelativeLocation());
    }
  }

  // Watch for the data sources becoming enabled/disabled.
  const auto IsConnectedConditional =
      IIsdkIRootPose::Execute_IsRootPoseConnected(DataSources.HandRootPose.GetObject());
  if (ensure(IsValid(IsConnectedConditional)))
  {
    EnabledConditionalGroup->AddConditional(IsConnectedConditional);
  }

  HandRootPose = DataSources.HandRootPose;
  if (IsValid(HmdDataSourceIn.GetObject()))
  {
    HmdDataSource = HmdDataSourceIn;
  }
}

void UIsdkGrabInteractionRigComponent::BindInputActions(
    UEnhancedInputComponent* EnhancedInputComponent,
    UInputAction* InPinchGrabSelectAction)
{
  // Grab select action is optional; usually you'd only use the pose below.
  if (IsValid(InPinchGrabSelectAction))
  {
    EnhancedInputComponent->BindAction(
        InPinchGrabSelectAction,
        ETriggerEvent::Started,
        Grabber,
        &UIsdkGrabberComponent::SelectPinch);
    EnhancedInputComponent->BindAction(
        InPinchGrabSelectAction,
        ETriggerEvent::Completed,
        Grabber,
        &UIsdkGrabberComponent::UnselectPinch);
    EnhancedInputComponent->BindAction(
        InPinchGrabSelectAction,
        ETriggerEvent::Canceled,
        Grabber,
        &UIsdkGrabberComponent::UnselectPinch);
  }
}

void UIsdkGrabInteractionRigComponent::BindInputHandPinch(
    UIsdkHandVisual* SyntheticHandVisual,
    EIsdkFingerType FingerType)
{
  // Bind to grab action
  if (ensure(GrabSelectPose))
  {
    if (IsValid(SyntheticHandVisual))
    {
      AddTickPrerequisiteComponent(SyntheticHandVisual);
    }
    GrabSelectPose->HandVisual = SyntheticHandVisual;
    GrabSelectPose->FingerType = FingerType;
    GrabSelectPose->PinchGrabStarted.AddUniqueDynamic(Grabber, &UIsdkGrabberComponent::SelectPinch);
    GrabSelectPose->PinchGrabFinished.AddUniqueDynamic(
        Grabber, &UIsdkGrabberComponent::UnselectPinch);

    PalmGrabSelectPose->HandVisual = SyntheticHandVisual;
    PalmGrabSelectPose->PalmGrabStarted.AddUniqueDynamic(
        Grabber, &UIsdkGrabberComponent::SelectPalm);
    PalmGrabSelectPose->PalmGrabFinished.AddUniqueDynamic(
        Grabber, &UIsdkGrabberComponent::UnselectPalm);
  }
}

void UIsdkGrabInteractionRigComponent::UpdatePinchCollider(bool isGrabbing)
{
  const FTransform ThumbTipPosition = GetHandBoneTransform(ThumbTipSocketName);

  TArray<UPrimitiveComponent*> PinchColliders;
  Grabber->GetCollidersByType(EIsdkGrabColliderType::Pinch, PinchColliders);
  for (const auto PinchCollider : PinchColliders)
  {
    if (isGrabbing)
    {
      // If the Grabber is grabbing, attach the PinchCollider to the Grabber and set its transform
      // to the thumb tip
      PinchCollider->AttachToComponent(Grabber, FAttachmentTransformRules::KeepRelativeTransform);
      PinchCollider->SetWorldTransform(ThumbTipPosition);
    }
    else
    {
      // If the Grabber is not grabbing, attach the PinchCollider to the thumb tip socket on the
      // HandVisual
      PinchCollider->AttachToComponent(
          GrabSelectPose->HandVisual,
          FAttachmentTransformRules::SnapToTargetIncludingScale,
          ThumbTipSocketName);
    }
  }
}

FTransform UIsdkGrabInteractionRigComponent::GetHandBoneTransform(FName BoneName) const
{
  return GrabSelectPose->HandVisual->GetBoneTransform(BoneName);
}
