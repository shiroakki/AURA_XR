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
#include "Pointable/IsdkIPointable.h"
#include "IsdkTransformerUtils.h"
#include "MathUtil.h"

#include "Tools/IsdkObjectDebugUI.h"
#include "IsdkTransformer.generated.h"

class UIsdkGrabberComponent;

USTRUCT()
struct FIsdkGrabPointDelta
{
  GENERATED_USTRUCT_BODY()

 public:
  static constexpr float _epsilon = 0.000001f;

  FVector PrevCentroidOffset, PrevPrevCentroidOffset;
  FVector CentroidOffset;
  FQuat PrevRotation;
  FQuat Rotation;
  UPROPERTY()
  UIsdkGrabberComponent* Grabber{};

  FIsdkGrabPointDelta() = default;
  FIsdkGrabPointDelta(UIsdkGrabberComponent* grabber) : Grabber(grabber) {}

  FIsdkGrabPointDelta(UIsdkGrabberComponent* grabber, const FVector& centroid)
      : FIsdkGrabPointDelta(grabber)
  {
    Initialize(centroid);
  }

  void Initialize(const FVector& centroid);

  void UpdateData(FVector Centroid, FTransform transform);

  bool IsValidAxis()
  {
    return CentroidOffset.SquaredLength() > _epsilon;
  }
};

USTRUCT() struct FIsdkGrabberInfo
{
  GENERATED_USTRUCT_BODY()

 public:
};

UENUM()
enum class EIsdkTransformerRotationType : uint8
{
  // No rotation on grabbable
  None,

  // Grabbable pivot rotation uses grabber rotation
  All,

  // Grabbable can only be rotated about X axis by grabbing and dragging
  XAxis,

  // Grabbable can only be rotated about Y axis by grabbing and dragging
  YAxis,

  // Grabbable can only be rotated about Z axis by grabbing and dragging
  ZAxis,
};

USTRUCT(Blueprintable) struct FIsdkTransformerConfig
{
  GENERATED_USTRUCT_BODY()

 public:
  FIsdkTransformerConfig(
      bool AllowTranslate = true,
      EIsdkTransformerRotationType RotType = EIsdkTransformerRotationType::All,
      const FIsdkConstraintAxes& TranslateConstraints = FIsdkConstraintAxes(),
      const FIsdkConstraintAxes& RotateConstraints = FIsdkConstraintAxes(),
      bool AllowScale = true,
      const FIsdkAxisConstraints& ScaleConstraints = FIsdkAxisConstraints(),
      int MaxGrabs = 1)
      : Translate(AllowTranslate),
        TranslateConstrainAxes(TranslateConstraints),
        RotationType(RotType),
        RotateConstrainAxes(RotateConstraints),
        Scale(AllowScale),
        ScaleConstrain(ScaleConstraints),
        MaxGrabPoints(MaxGrabs)
  {
  }

  bool Translate{true};
  FIsdkConstraintAxes TranslateConstrainAxes;
  EIsdkTransformerRotationType RotationType{EIsdkTransformerRotationType::All};
  FIsdkConstraintAxes RotateConstrainAxes;
  bool Scale{true};
  FIsdkAxisConstraints ScaleConstrain;
  int MaxGrabPoints;
};

UCLASS(
    Blueprintable,
    ClassGroup = (InteractionSDK),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Transformer"))
class OCULUSINTERACTION_API UIsdkTransformer : public USceneComponent
{
  GENERATED_BODY()
 public:
  UIsdkTransformer();
  virtual void BeginPlay() override;
  void UpdateDebug() const;
  virtual void
  TickComponent(float deltaTime, ELevelTick tickType, FActorComponentTickFunction* tickFn) override;

  static constexpr int MAX_GRAB_HANDS = 2;

  // Event Getters
  virtual void PostEvent(const FIsdkInteractionPointerEvent& Event);

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Transformer")
  int GetGrabCount();

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Transformer")
  EIsdkInteractableState GetState();

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Transformer")
  void SetConfig(FIsdkTransformerConfig& InConfig)
  {
    Config = InConfig;
    switch (Config.RotationType)
    {
      case EIsdkTransformerRotationType::None:
        break;
      case EIsdkTransformerRotationType::All:
        break;
      case EIsdkTransformerRotationType::XAxis:
        RotationAxis = FVector(1, 0, 0);
        RotationAxisConstraints = Config.RotateConstrainAxes.XAxis;
        break;
      case EIsdkTransformerRotationType::YAxis:
        RotationAxis = FVector(0, 1, 0);
        RotationAxisConstraints = Config.RotateConstrainAxes.YAxis;
        break;
      case EIsdkTransformerRotationType::ZAxis:
        RotationAxis = FVector(0, 0, 1);
        RotationAxisConstraints = Config.RotateConstrainAxes.ZAxis;
        break;
      default:;
    }

    if (Target)
    {
      UpdateTargetScaleConstraints();
    }
    else
    {
      TargetScaleConstrain = Config.ScaleConstrain;
    }
  }

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Transformer")
  void ShowDebug(bool on);

  void UpdateTargetScaleConstraints()
  {
    TargetScaleConstrain = Config.ScaleConstrain;
    TargetScaleConstrain.Min = FMathf::Min(
        FMathf::Min3(TargetScaleConstrain.Min, TargetStartScale.X, TargetStartScale.Y),
        TargetStartScale.Z);
    TargetScaleConstrain.Max = FMathf::Max(
        FMathf::Max3(TargetScaleConstrain.Max, TargetStartScale.X, TargetStartScale.Y),
        TargetStartScale.Z);
  }

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Transformer")
  void SetTarget(USceneComponent* Component)
  {
    Target = Component;
    TargetStartScale = Target->GetRelativeScale3D();
    UpdateTargetScaleConstraints();
  }

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Transformer")
  USceneComponent* GetTarget()
  {
    return Target;
  }

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Transformer")
  bool IsBeingGrabbedBy(UIsdkGrabberComponent* Grabber)
  {
    return FindDeltaFromGrabber(Grabber) != nullptr;
  }

 private:
  // Overrideable
  virtual void BeginTransform(UIsdkGrabberComponent* grabber);
  virtual void UpdateTransform();
  virtual void ApplyRotationConstraints(FTransform& RelativeTransform) const;
  virtual FVector ApplyTranslateConstraints(FVector input) const;

  // helper functions
  void UpdateAxisRotation();
  FQuat CalculateFreeRotationDelta();
  FTransform GetTargetWorldTransform() const;
  FTransform GetTargetLocalTransform() const;
  FTransform GetTargetParentTransform() const;
  FTransform GetInverseTargetParentTransform() const;
  FVector GetCentroidWorldSpace() const;
  float UpdateScale();
  void UpdateDeltas();
  FIsdkGrabPointDelta* FindDeltaFromGrabber(const UIsdkGrabberComponent* Grabber)
  {
    for (int i = 0; i < Deltas.Num(); i++)
    {
      if (Deltas[i].Grabber == Grabber)
      {
        return &Deltas[i];
      }
    }

    return nullptr;
  }

  EIsdkInteractableState State{};
  FIsdkTransformerConfig Config;
  FTransform ParentInvTransform{};
  FQuat LastRotation{FQuat::Identity};
  FVector LastCentroid{FVector::ZeroVector};
  TArray<FIsdkGrabPointDelta> Deltas;
  FVector CentroidStartPosRelativeToTarget;
  bool IsShowingDebug{false};

  // component to be manipulated by the grabber(s)
  UPROPERTY()
  USceneComponent* Target{nullptr};

  // for single-axis rotation
  FVector RotationAxis{};
  FIsdkAxisConstraints AxisConstraints{};
  FVector TargetStartScale{};
  FIsdkAxisConstraints TargetScaleConstrain{};
  FIsdkAxisConstraints RotationAxisConstraints{};
  float TargetSingleAxisStartAngle{0.f};
  float CurrentSingleAxisAngle{0.f};
  float ConstrainedSingleAxisAngle{0.f};
  FTransform TargetRelativeTransformAtSelect{}, GrabDeltaInLocalSpace{};

  /**
   *
   * Current status of any grabbers interacting with transformer
   */
  UPROPERTY()
  TArray<FIsdkGrabberInfo> GrabberInfos;

  UPROPERTY()
  UIsdkObjectDebugUI* DebugUI{nullptr};

  int HoverCount{0}, SelectCount{0};
};
