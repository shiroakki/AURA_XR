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
#include "IsdkGrabbableComponent.h"
#include "Containers/Map.h"
#include "Interaction/IsdkSceneInteractorComponent.h"
#include "StructTypes.h"
#include "IsdkGrabberComponent.generated.h"

class UIsdkGrabbableComponent;

USTRUCT()
struct FIsdkColliderInfo
{
  GENERATED_BODY()
 public:
  EIsdkInteractorState State{EIsdkInteractorState::Normal};
  UPROPERTY(Instanced)
  TMap<UPrimitiveComponent*, UIsdkGrabbableComponent*> HoverObjects{};
  UPROPERTY(Instanced)
  UIsdkGrabbableComponent* SelectObject{};

  // RankIndex is a way to figure which collider has most recently started hovering over a grabbable
  int RankIndex{0};
};

/**
 *
 */
UCLASS(
    Blueprintable,
    ClassGroup = (InteractionSDK),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Grabber Component"))
class OCULUSINTERACTION_API UIsdkGrabberComponent : public UIsdkSceneInteractorComponent
{
  GENERATED_BODY()
 public:
  UIsdkGrabberComponent();

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void GetCollidersByType(EIsdkGrabColliderType Type, TArray<UPrimitiveComponent*>& outArray)
  {
    outArray.Reset();
    for (auto& it : CollidersByType[Type])
    {
      outArray.Add(it.Key);
    }
  }

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool HasCollidersOfType(EIsdkGrabColliderType Type)
  {
    return !CollidersByType[Type].IsEmpty();
  }

  bool GetColliderInfo(
      UPrimitiveComponent* Collider,
      EIsdkGrabColliderType Type,
      FIsdkColliderInfo& outInfo)
  {
    if (CollidersByType.Contains(Type))
    {
      auto& CollidersOfType = CollidersByType[Type];
      if (const FIsdkColliderInfo* ColliderInfo = CollidersOfType.Find(Collider))
      {
        outInfo = *ColliderInfo;
        return true;
      }
    }
    return false;
  }

  void SetColliderInfo(
      UPrimitiveComponent* Collider,
      EIsdkGrabColliderType Type,
      const FIsdkColliderInfo& Info)
  {
    if (CollidersByType.Contains(Type))
    {
      auto& CollidersOfType = CollidersByType[Type];
      CollidersOfType.Emplace(Collider, Info);
    }
  }

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void AddCollider(UPrimitiveComponent* Collider, EIsdkGrabColliderType Type);

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void RemoveCollider(UPrimitiveComponent* Collider, EIsdkGrabColliderType Type)
  {
    auto& CollidersOfType = CollidersByType[Type];
    if (CollidersOfType.Contains(Collider))
    {
      CollidersOfType.Remove(Collider);
    }
  }

  UFUNCTION()
  void ComputeBestGrabbableColliderForGrabType(
      EIsdkGrabColliderType Type,
      UPrimitiveComponent*& MyCollider,
      UPrimitiveComponent*& GrabbableCollider,
      UIsdkGrabbableComponent*& Grabbable);

  virtual void BeginPlay() override;
  void UnregisterAllColliders();
  virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
  virtual void BeginDestroy() override;

  virtual bool HasCandidate() const override;
  virtual bool HasInteractable() const override;
  virtual bool HasSelectedInteractable() const override;

  virtual void UpdateState();

  virtual FIsdkInteractionRelationshipCounts GetInteractorStateRelationshipCounts() const override;

  virtual void GetInteractorStateRelationships(
      EIsdkInteractableState State,
      TArray<TScriptInterface<IIsdkIInteractableState>>& OutInteractables) const override;

  UFUNCTION()
  void SelectPinch();
  UFUNCTION()
  void SelectPalm();
  UFUNCTION()
  void UnselectPinch();
  UFUNCTION()
  void UnselectPalm();

  void SelectByGrabType(EIsdkGrabColliderType Type);
  void UnselectByGrabType(EIsdkGrabColliderType Type);

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void SetDebugRendering(bool on)
  {
    bShowDebug = on;
  }

  /* Returns true if the grabber is grabbing and the component it is grabbing*/
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool GetGrabbingStateWithComponent(UIsdkGrabbableComponent*& GrabbableOut) const;

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  bool bAllowPalmGrab{true};

  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  bool bAllowPinchGrab{true};

  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = InteractionSDK)
  bool bShowDebug{false};

  UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = InteractionSDK)
  UPrimitiveComponent* SelectingCollider{};

  UPROPERTY()
  bool bIsGrabbing = false;

  UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = InteractionSDK)
  float PinchColliderRadius{1.2f};

  UPROPERTY(
      BlueprintReadOnly,
      EditAnywhere,
      meta = (EditCondition = "AllowPalmGrab == true", EditConditionHides),
      Category = InteractionSDK)
  float PalmColliderRadius{4.5f};

  UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = InteractionSDK)
  // Palm offset from the wrist
  FVector PalmOffset{8.0f, -4.0f, 0.0f};

 private:
  UFUNCTION(BlueprintInternalUseOnly, Category = InteractionSDK)
  void BeginOverlap(
      UPrimitiveComponent* OverlappedComponent,
      AActor* OtherActor,
      UPrimitiveComponent* OtherComp,
      int32 OtherBodyIndex,
      bool bFromSweep,
      const FHitResult& SweepResult);

  UFUNCTION(BlueprintInternalUseOnly, Category = InteractionSDK)
  void EndOverlap(
      UPrimitiveComponent* OverlappedComponent,
      AActor* OtherActor,
      UPrimitiveComponent* OtherComp,
      int32 OtherBodyIndex);

  void UpdateOverlappedSet();

  void PostEvent(EIsdkPointerEventType Type, UIsdkGrabbableComponent* Dest);
  virtual void TickComponent(
      float DeltaTime,
      enum ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;
  void UnregisterCollider(UPrimitiveComponent* Collider, EIsdkGrabColliderType Type);

  EIsdkGrabColliderType FindColliderType(UPrimitiveComponent* Collider) const;

  int64 PointerEventToken{};

  UPROPERTY(Instanced)
  UIsdkGrabbableComponent* CandidateGrabbable{};

  UPROPERTY(Instanced)
  UIsdkGrabbableComponent* GrabbedComponent{};

  using PrimitiveComponentToColliderInfoMap = TMap<UPrimitiveComponent*, FIsdkColliderInfo>;
  using ColliderTypeToInfoMap = TMap<EIsdkGrabColliderType, PrimitiveComponentToColliderInfoMap>;
  ColliderTypeToInfoMap CollidersByType;

  UPROPERTY()
  TSet<UIsdkGrabbableComponent*> OverlappedGrabbables{};

  int NextRankIndex{0};
  EIsdkGrabColliderType SelectingColliderType{};
};
