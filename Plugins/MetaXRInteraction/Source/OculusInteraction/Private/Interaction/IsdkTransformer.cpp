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

#include "Interaction/IsdkTransformer.h"
#include "Subsystem/IsdkWorldSubsystem.h"
#include "Interaction/IsdkGrabberComponent.h"

#include "CoreMinimal.h"

void FIsdkGrabPointDelta::Initialize(const FVector& centroid)
{
  ensureMsgf(
      Grabber->SelectingCollider != nullptr,
      TEXT("FIsdkGrabPointDelta initialized with no corresponding selecting collider"));
  if (Grabber->SelectingCollider)
  {
    const FTransform t = Grabber->SelectingCollider->GetComponentTransform();
    PrevPrevCentroidOffset = PrevCentroidOffset = CentroidOffset =
        FIsdkTransformerUtils::GetOffsetFromTransformToPoint(t, centroid);
    PrevRotation = Rotation = t.GetRotation();
  }
}

void FIsdkGrabPointDelta::UpdateData(FVector Centroid, FTransform transform)
{
  PrevPrevCentroidOffset = PrevCentroidOffset;
  PrevCentroidOffset = CentroidOffset;
  CentroidOffset = FIsdkTransformerUtils::GetOffsetFromTransformToPoint(transform, Centroid);
  PrevRotation = Rotation;

  auto rotation = transform.GetRotation();

  // Quaternions have two ways of expressing the same rotation.
  // This code ensures that the result is the same rotation but expressed in the desired sign.
  if ((rotation | Rotation) < 0)
  {
    rotation.X = -rotation.X;
    rotation.Y = -rotation.Y;
    rotation.Z = -rotation.Z;
    rotation.W = -rotation.W;
  }

  Rotation = rotation;
}

UIsdkTransformer::UIsdkTransformer()
    : Config(
          true,
          EIsdkTransformerRotationType::All,
          FIsdkConstraintAxes{},
          FIsdkConstraintAxes{},
          true,
          FIsdkAxisConstraints{},
          1)
{
  PrimaryComponentTick.bCanEverTick = true;
}

void UIsdkTransformer::ShowDebug(bool on)
{
  if (on != IsShowingDebug)
  {
    IsShowingDebug = on;
    if (on)
    {
      if (!IsValid(DebugUI))
      {
        DebugUI = NewObject<UIsdkObjectDebugUI>(GetWorld(), TEXT("TransformerDebugUI"));
      }
    }
    else
    {
      if (IsValid(DebugUI))
      {
        DebugUI->DestroyComponent();
        DebugUI = nullptr;
      }
    }
  }
}

void UIsdkTransformer::BeginPlay()
{
  Super::BeginPlay();
}

void UIsdkTransformer::UpdateDebug() const
{
  if (IsShowingDebug)
  {
#ifdef USE_DEBUG_DRAW
    DrawDebugSphere(GetWorld(), GetCentroidWorldSpace(), .5, 8, FColor::Purple);

    FVector Centroid = GetCentroidWorldSpace();
    for (int i = 0; i < Deltas.Num(); i++)
    {
      DrawDebugLine(
          GetWorld(),
          Centroid + Deltas[i].CentroidOffset,
          Centroid + Deltas[(i + 1) % Deltas.Num()].CentroidOffset,
          FColor::Orange);
    }
#endif

    if (IsValid(DebugUI))
    {
      if (const auto Count = Deltas.Num())
      {
        const auto Str = FString::Printf(TEXT("%d Deltas"), Count);
        const auto Text = FText::FromString(Str);
        DebugUI->SetText(Text);
      }
    }
  }
}

void UIsdkTransformer::TickComponent(
    float deltaTime,
    ELevelTick tickType,
    FActorComponentTickFunction* tickFn)
{
  UActorComponent::TickComponent(deltaTime, tickType, tickFn);

  if (IsShowingDebug)
  {
    UpdateDebug();
  }
}

void UIsdkTransformer::PostEvent(const FIsdkInteractionPointerEvent& Event)
{
  const auto Grabber = Cast<UIsdkGrabberComponent>(Event.Interactor);
  if (IsValid(Grabber))
  {
    if (IsValid(Target))
    {
      ParentInvTransform = GetTargetParentTransform().Inverse();
    }

    // could be a grabber that used to be grabbing but got kicked out
    // when another grabber came along and stole it
    const bool IsGrabbing = IsBeingGrabbedBy(Grabber);

    switch (Event.Type)
    {
      case EIsdkPointerEventType::Select:
      {
        State = EIsdkInteractableState::Select;

        // Will this make for more grabbers than this transformer supports?
        while (Deltas.Num() && Config.MaxGrabPoints <= SelectCount)
        {
          // remove old grabbers to make room for new one
          Deltas.RemoveAt(0);
          SelectCount--;
        }

        SelectCount++;
        BeginTransform(Grabber);
        break;
      }
      case EIsdkPointerEventType::Unselect:
        if (!IsGrabbing)
          break;
        State = EIsdkInteractableState::Normal;
        for (int i = Deltas.Num() - 1; i >= 0; i--)
        {
          if (Deltas[i].Grabber == Grabber)
          {
            SelectCount--;
            Deltas.RemoveAt(i);
            break;
          }
        }
        if (Deltas.Num())
        {
          BeginTransform(nullptr);
        }
        break;
      case EIsdkPointerEventType::Hover:
        HoverCount++;
        if (!SelectCount)
        {
          State = EIsdkInteractableState::Hover;
        }
        break;
      case EIsdkPointerEventType::Unhover:
        HoverCount--;
        if (HoverCount == 0 && SelectCount == 0)
        {
          State = EIsdkInteractableState::Normal;
        }
        break;
      case EIsdkPointerEventType::Move:
      {
        if (!IsGrabbing)
          break;

        if (!IsValid(Target))
        {
          SetTarget(nullptr);
          State = EIsdkInteractableState::Normal;
          break;
        }

        UpdateTransform();

        if (!Config.Translate)
        {
          Target->SetRelativeLocation(TargetRelativeTransformAtSelect.GetLocation());
        }
        else
        {
          Target->SetRelativeLocation(
              ApplyTranslateConstraints(Target->GetRelativeTransform().GetLocation()));
        }
        break;
      }

      case EIsdkPointerEventType::Cancel:
        State = EIsdkInteractableState::Normal;
        break;
    }
  }

  if (IsValid(DebugUI))
  {
    DebugUI->SetText(FText::FromString(
        FString::Printf(TEXT("SelectCount %d   HoverCount %d"), SelectCount, HoverCount)));
  }
}

void UIsdkTransformer::UpdateDeltas()
{
  const auto curCentroid = GetCentroidWorldSpace();
  for (int i = 0; i < Deltas.Num(); i++)
  {
    FIsdkGrabPointDelta& delta = Deltas[i];
    const FTransform newT = delta.Grabber->SelectingCollider->GetComponentTransform();
    delta.UpdateData(curCentroid, newT);
  }
}

void UIsdkTransformer::ApplyRotationConstraints(FTransform& RelativeTransform) const
{
  switch (Config.RotationType)
  {
    case EIsdkTransformerRotationType::None:
      RelativeTransform.SetRotation(TargetRelativeTransformAtSelect.GetRotation());
      break;

    case EIsdkTransformerRotationType::All:
    {
      // check to see if there's anything to constrain before to avoid using cycles on
      // Quat->Euler->Quat conversions we don't need
      if (Config.RotateConstrainAxes.HasConstraints())
      {
        auto startTargetRelativeRotationEuler =
            TargetRelativeTransformAtSelect.GetRotation().Euler();

        UE::Math::TVector<double> relativeRotationEuler =
            GetTargetLocalTransform().GetRotation().Euler();

        // TODO: rework constrain axes to be array of axis values (Axis[3]) to refactor this into
        // something simpler
        if (Config.RotateConstrainAxes.XAxis.Constrain)
        {
          relativeRotationEuler[0] = FMath::Clamp(
              relativeRotationEuler[0],
              Config.RotateConstrainAxes.XAxis.Min,
              Config.RotateConstrainAxes.XAxis.Max);
        }
        if (Config.RotateConstrainAxes.YAxis.Constrain)
        {
          relativeRotationEuler[1] = FMath::Clamp(
              relativeRotationEuler[1],
              Config.RotateConstrainAxes.YAxis.Min,
              Config.RotateConstrainAxes.YAxis.Max);
        }
        if (Config.RotateConstrainAxes.ZAxis.Constrain)
        {
          relativeRotationEuler[2] = FMath::Clamp(
              relativeRotationEuler[2],
              Config.RotateConstrainAxes.ZAxis.Min,
              Config.RotateConstrainAxes.ZAxis.Max);
        }

        if (!relativeRotationEuler.ContainsNaN())
        {
          Target->SetRelativeRotation(FQuat::MakeFromEuler(relativeRotationEuler));
        }
      }
    }
    break;

    default:
      break;
  }
}

FTransform UIsdkTransformer::GetTargetWorldTransform() const
{
  return Target->GetComponentTransform();
}

FTransform UIsdkTransformer::GetTargetLocalTransform() const
{
  return Target->GetRelativeTransform();
}

FTransform UIsdkTransformer::GetTargetParentTransform() const
{
  AActor* parent = Target->GetAttachParentActor();
  if (parent)
  {
    return parent->GetActorTransform();
  }
  return FTransform::Identity;
}

FTransform UIsdkTransformer::GetInverseTargetParentTransform() const
{
  return GetTargetParentTransform().Inverse();
}

void UIsdkTransformer::BeginTransform(UIsdkGrabberComponent* grabber)
{
  // if Grabber is null this is being called after an unselect causing an existing grabber to be
  // removed
  if (grabber)
  {
    // Need to add the Grabber to the list first for the new centroid to be properly calculated
    Deltas.Add(FIsdkGrabPointDelta(grabber));
  }

  // Now that the list of grabbers is up-to-date, the new centroid can be calculated to set the
  // Deltas' initial centroid offsets
  const FVector CentroidWorldSpace = GetCentroidWorldSpace();
  for (auto& Delta : Deltas)
  {
    Delta.Initialize(CentroidWorldSpace);
  }

  LastCentroid = CentroidWorldSpace;
  TargetRelativeTransformAtSelect = Target->GetRelativeTransform();
  CentroidStartPosRelativeToTarget = CentroidWorldSpace - Target->GetComponentLocation();
  TargetSingleAxisStartAngle = ConstrainedSingleAxisAngle;
  CurrentSingleAxisAngle = ConstrainedSingleAxisAngle;

  switch (Config.RotationType)
  {
    case EIsdkTransformerRotationType::XAxis:
      RotationAxis = FVector::XAxisVector;
      AxisConstraints = Config.RotateConstrainAxes.XAxis;
      break;
    case EIsdkTransformerRotationType::YAxis:
      RotationAxis = FVector::YAxisVector;
      AxisConstraints = Config.RotateConstrainAxes.YAxis;
      break;
    case EIsdkTransformerRotationType::ZAxis:
      RotationAxis = FVector::ZAxisVector;
      AxisConstraints = Config.RotateConstrainAxes.ZAxis;
      break;
    default:
      RotationAxis = FVector::ZeroVector;
  }

  const auto WorldOffset = FIsdkTransformerUtils::GetOffsetFromTransformToPoint(
      GetTargetWorldTransform(), CentroidWorldSpace);
  const auto LocalOffset = GetInverseTargetParentTransform().TransformVector(WorldOffset);
  GrabDeltaInLocalSpace = FTransform(TargetRelativeTransformAtSelect.GetRotation(), LocalOffset);
  LastRotation = FQuat::Identity;
}

void UIsdkTransformer::UpdateTransform()
{
  const FVector centroid = GetCentroidWorldSpace();

  UpdateDeltas();

  switch (Config.RotationType)
  {
    case EIsdkTransformerRotationType::None:
      break;
    case EIsdkTransformerRotationType::All:
    {
      LastRotation = CalculateFreeRotationDelta() * LastRotation;

      FQuat NewTargetRelativeRotation = LastRotation * GrabDeltaInLocalSpace.GetRotation();
      Target->SetRelativeRotation(NewTargetRelativeRotation);
      break;
    }
    case EIsdkTransformerRotationType::XAxis:
    case EIsdkTransformerRotationType::YAxis:
    case EIsdkTransformerRotationType::ZAxis:
    {
      UpdateAxisRotation();
      break;
    }
  }

  const FVector LocalPosition = GetInverseTargetParentTransform().TransformPosition(centroid) -
      LastRotation.RotateVector(GrabDeltaInLocalSpace.GetLocation());
  Target->SetRelativeLocation(LocalPosition);

  if (Config.Scale)
  {
    const float scaleDelta = UpdateScale();
    const FVector Scale = Target->GetRelativeScale3D() * scaleDelta;
    Target->SetRelativeScale3D(
        FIsdkTransformerUtils::GetConstrainedTransformScale(Scale, TargetScaleConstrain));
  }

  LastCentroid = centroid;
}

void UIsdkTransformer::UpdateAxisRotation()
{
  // Project our positional offsets onto a plane with normal equal to the rotation axis
  const auto TargetLocation = Target->GetComponentTransform().GetLocation();
  FVector TargetVector = GetCentroidWorldSpace() - TargetLocation;

  // Project the current and previous target vectors onto the rotation plane
  FVector ProjectedTargetVector = FVector::VectorPlaneProject(TargetVector, RotationAxis);
  FVector ProjectedPreviousTargetVector =
      FVector::VectorPlaneProject(LastCentroid - TargetLocation, RotationAxis);

  // Get the signed angle between the current and last frame
  const auto A = ProjectedTargetVector.GetSafeNormal();
  const auto B = ProjectedPreviousTargetVector.GetSafeNormal();
  const auto SignedRotationAngle = FMath::Atan2(
      FVector::DotProduct(FVector::CrossProduct(A, B), RotationAxis), FVector::DotProduct(B, A));

  // Add the delta angle for the frame to the total relative angle, and constrain it, optionally
  CurrentSingleAxisAngle += FMath::RadiansToDegrees(SignedRotationAngle);
  ConstrainedSingleAxisAngle = AxisConstraints.Constrain
      ? FMath::Clamp(CurrentSingleAxisAngle, AxisConstraints.Min, AxisConstraints.Max)
      : CurrentSingleAxisAngle;

  // Construct a quaternion and set the target's rotation
  FQuat FinalRotation =
      FQuat(RotationAxis, FMath::DegreesToRadians(ConstrainedSingleAxisAngle)).Inverse();
  Target->SetRelativeRotation(FinalRotation);
}

// Calculate the delta rotation from previous frame
FQuat UIsdkTransformer::CalculateFreeRotationDelta()
{
  FQuat combinedRotation = FQuat::Identity;

  // each point can only affect a fraction of the rotation
  const int count = Deltas.Num();
  const float fraction = 1.f / static_cast<float>(count);

  FVector totalCentroidDelta{0};
  for (auto& delta : Deltas)
  {
    // overall delta rotation since last update
    FQuat RotDelta = delta.Rotation * delta.PrevRotation.Inverse();

    if (delta.IsValidAxis())
    {
      FVector aimingAxis = delta.CentroidOffset.GetSafeNormal();
      // rotation along aiming axis
      FQuat DirDelta =
          FQuat::FindBetweenVectors(delta.PrevCentroidOffset.GetSafeNormal(), aimingAxis);
      combinedRotation = FQuat::Slerp(FQuat::Identity, DirDelta, fraction) * combinedRotation;

      // twist along the aiming axis
      float angle;
      FVector axis;
      RotDelta.ToAxisAndAngle(axis, angle);
      const float projectionFactor = axis.Dot(aimingAxis);
      RotDelta = FQuat(aimingAxis, angle * projectionFactor);
    }
    else
    {
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
//      GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("invalid axis"));
#endif
    }
    if (Deltas.Num() > 1)
      totalCentroidDelta += (delta.CentroidOffset - delta.PrevCentroidOffset);

    combinedRotation = FQuat::Slerp(FQuat::Identity, RotDelta, fraction) * combinedRotation;
  }

  return combinedRotation;
}

FVector UIsdkTransformer::ApplyTranslateConstraints(FVector Vec) const
{
  if (Config.TranslateConstrainAxes.XAxis.Constrain)
  {
    Vec.X = FMath::Clamp(
        Vec.X, Config.TranslateConstrainAxes.XAxis.Min, Config.TranslateConstrainAxes.XAxis.Max);
  }
  if (Config.TranslateConstrainAxes.YAxis.Constrain)
  {
    Vec.Y = FMath::Clamp(
        Vec.Y, Config.TranslateConstrainAxes.YAxis.Min, Config.TranslateConstrainAxes.YAxis.Max);
  }
  if (Config.TranslateConstrainAxes.ZAxis.Constrain)
  {
    Vec.Z = FMath::Clamp(
        Vec.Z, Config.TranslateConstrainAxes.ZAxis.Min, Config.TranslateConstrainAxes.ZAxis.Max);
  }

  return Vec;
}

FVector UIsdkTransformer::GetCentroidWorldSpace() const
{
  FVector combinedTranslation = FVector::Zero();

  if (Deltas.Num())
  {
    for (const auto& delta : Deltas)
    {
      combinedTranslation +=
          delta.Grabber->SelectingCollider->GetComponentTransform().GetLocation();
    }

    if (Deltas.Num() > 0)
    {
      combinedTranslation /= static_cast<float>(Deltas.Num());
    }
  }

  return combinedTranslation;
}

float UIsdkTransformer::UpdateScale()
{
  float ScaleDelta = 0;
  const float fraction = 1.f / static_cast<float>(Deltas.Num());
  for (const auto& delta : Deltas)
  {
    if (delta.CentroidOffset.IsNearlyZero())
    {
      ScaleDelta += fraction;
    }
    else
    {
      const float factor = FMath::Sqrt(
          delta.CentroidOffset.SquaredLength() / delta.PrevCentroidOffset.SquaredLength());
      ScaleDelta += factor * fraction;
    }
  }

  return ScaleDelta;
}

int UIsdkTransformer::GetGrabCount()
{
  return Deltas.Num();
}

EIsdkInteractableState UIsdkTransformer::GetState()
{
  return State;
}
