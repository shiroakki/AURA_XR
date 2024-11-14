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
#include "Interaction/IsdkSceneInteractableComponent.h"
#include "Pointable/IsdkIPointable.h"

#include "StructTypes.h"
#include "IsdkThrowable.h"
#include "IsdkTransformer.h"
#include "IsdkGrabbableComponent.generated.h"

using Pose = FTransform;
class UIsdkGrabberComponent;
class UIsdkTransformer;

UENUM()
enum class EIsdkGrabColliderType : uint8
{
  Unknown,
  Pinch,
  Palm,
  Custom
};

constexpr int GrabColliderTypeCount = static_cast<int>(EIsdkGrabColliderType::Custom);

UCLASS(
    Blueprintable,
    ClassGroup = (InteractionSDK),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Grabbable Component"))
class OCULUSINTERACTION_API UIsdkGrabbableComponent : public UIsdkSceneInteractableComponent,
                                                      public IIsdkIPointable
{
  GENERATED_BODY()
 public:
  UIsdkGrabbableComponent();
  virtual void BeginPlay() override;
  virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
  virtual void
  TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* TickFn) override;

  virtual void GetInteractableStateRelationships(
      EIsdkInteractableState State,
      TArray<TScriptInterface<IIsdkIInteractorState>>& OutInteractors) const override;

  // Event Getters
  virtual FIsdkInteractionPointerEventDelegate& GetInteractionPointerEventDelegate() override
  {
    return InteractionPointerEvent;
  }

  virtual void PostEvent(const FIsdkInteractionPointerEvent& Event);

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InteractionSDK|Throwable")
  bool IsThrowable = true;

  UPROPERTY(
      BlueprintReadWrite,
      EditAnywhere,
      meta = (EditCondition = "IsThrowable == true", EditConditionHides),
      Category = "InteractionSDK|Throwable")
  bool EnableGravityWhenThrown = true;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractionSDK|Throwable")
  FIsdkThrowableSettings ThrowSettings{};

  UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "InteractionSDK|Throwable")
  UIsdkThrowable* ThrowableComponent;

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InteractionSDK|Grabbable|Rotate")
  EIsdkTransformerRotationType TransformerRotateType{EIsdkTransformerRotationType::All};

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InteractionSDK|Grabbable|Misc")
  TSet<EIsdkGrabColliderType> GrabTypesAllowed{
      EIsdkGrabColliderType::Palm,
      EIsdkGrabColliderType::Pinch};

  UPROPERTY(
      BlueprintReadWrite,
      EditAnywhere,
      meta =
          (EditCondition = "TransformerRotateType == EIsdkTransformerRotationType::All",
           EditConditionHides),
      Category = "InteractionSDK|Grabbable|Rotate")
  FIsdkConstraintAxes RotateConstrainAxes;

  UPROPERTY(
      BlueprintReadWrite,
      EditAnywhere,
      meta =
          (EditCondition =
               "TransformerRotateType == EIsdkTransformerRotationType::XAxis || TransformerRotateType == EIsdkTransformerRotationType::YAxis || TransformerRotateType == EIsdkTransformerRotationType::ZAxis",
           EditConditionHides),
      Category = "InteractionSDK|Grabbable|Rotate")
  FIsdkAxisConstraints SingleAxisRotateConstrain;

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InteractionSDK|Grabbable|Translate")
  bool TransformerTranslate{true};

  UPROPERTY(
      BlueprintReadWrite,
      EditAnywhere,
      meta = (EditCondition = "TransformerTranslate == true", EditConditionHides),
      Category = "InteractionSDK|Grabbable|Translate")
  FIsdkConstraintAxes TranslateConstrainAxes;

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InteractionSDK|Grabbable|Scale")
  bool TransformerScale{true};

  UPROPERTY(
      BlueprintReadWrite,
      EditAnywhere,
      meta = (EditCondition = "TransformerScale == true", EditConditionHides),
      Category = "InteractionSDK|Grabbable|Scale")
  FIsdkAxisConstraints ScaleConstrain{false, 1, 3};

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Grabbable|Misc")
  UPrimitiveComponent* GetCollider();

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Grabbable|Misc")
  void SetCollider(UPrimitiveComponent* Shape)
  {
    Collider = Shape;
    if (Collider)
    {
      Collider->SetGenerateOverlapEvents(true);
    }
  }

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Grabbable|Misc")
  void SetMaxGrabPoints(int Count);

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Grabbable|Misc")
  void SetDebugRendering(bool On)
  {
    ShowDebug = On;
    if (IsValid(Transformer))
    {
      Transformer->ShowDebug(ShowDebug);
    }
  }

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Grabbable|Misc")
  void SetTransformTargetComponent(USceneComponent* component);

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Transformer")
  bool IsBeingGrabbedBy(UIsdkGrabberComponent* Grabber)
  {
    if (IsValid(Transformer))
    {
      return Transformer->IsBeingGrabbedBy(Grabber);
    }

    return false;
  }

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Grabbable|Misc")
  bool AllowsGrabType(EIsdkGrabColliderType Type)
  {
    return GrabTypesAllowed.Contains(Type);
  }

  UFUNCTION(BlueprintCallable, Category = "InteractionSDK|Grabbable|Misc")
  void SetGrabTypeAllowed(EIsdkGrabColliderType Type, bool Allowed)
  {
    const bool CurrentlyAllowed = GrabTypesAllowed.Contains(Type);

    if (CurrentlyAllowed != Allowed)
    {
      if (!Allowed)
        GrabTypesAllowed.Remove(Type);
      else
        GrabTypesAllowed.Add(Type);
    }
  }

 protected:
  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InteractionSDK|Grabbable|Misc")
  bool ShowDebug{false};

  UPROPERTY(
      BlueprintReadOnly,
      EditAnywhere,
      Category = "InteractionSDK|Grabbable|Misc",
      meta = (ClampMin = "1", ClampMax = "2"))
  int MaxGrabPoints{1};

  virtual void SetState(EIsdkInteractableState NewState) override;

  UPROPERTY(Instanced)
  TObjectPtr<USceneComponent> ColliderComponent{};

  UPROPERTY(Instanced)
  TObjectPtr<UIsdkTransformer> Transformer{};

  UPROPERTY(Instanced)
  TObjectPtr<UPrimitiveComponent> Collider{};

  FIsdkTransformerConfig TransformerConfig;
  bool PhysicsEnabledAtSelect{false};

  UPrimitiveComponent* FindCollider();

  float PhysicsZeroTimer{0};

  // Event for PointerEvents
  UPROPERTY(BlueprintAssignable, Category = InteractionSDK)
  FIsdkInteractionPointerEventDelegate InteractionPointerEvent;
};
