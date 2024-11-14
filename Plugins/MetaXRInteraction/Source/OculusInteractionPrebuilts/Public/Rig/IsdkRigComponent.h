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
#include "IsdkHandVisualsRigComponent.h"
#include "IsdkControllerVisualsRigComponent.h"
#include "IsdkInputActionsRigComponent.h"
#include "IsdkRayInteractionRigComponent.h"
#include "IsdkPokeInteractionRigComponent.h"
#include "IsdkGrabInteractionRigComponent.h"
#include "IsdkInteractionGroupRigComponent.h"
#include "Subsystem/IsdkWidgetSubsystem.h"
#include "InteractorVisuals/IsdkRayVisualFunctionLibrary.h"
#include "IsdkRigComponent.generated.h"

class UIsdkPokeLimiterVisual;
class UIsdkPokeInteractor;
class UIsdkGrabberComponent;
class UIsdkHandFingerPinchGrabRecognizer;
class UIsdkRigModifier;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIsdkRigComponentLifecycleEvent);

/**
 * A prebuilt collection of interactors for a single hand.
 *
 * The IsdkLegacyRigHand itself is an abstract class; there are derived types for Left and Right
 * hands that can be instantiated directly. The derived types set appropriate default values for
 * bones and meshes.
 *
 * To customize bone mappings, hand meshes or the behavior of the interactors, either:
 * - If placing an instance of an IsdkLegacyRigHand derived actor in the level: change the desired
 *   component properties directly in the details panel of the actor.
 * - If spawning an IsdkLegacyRigHand derived actor via a Child Actor Component in an actor: change
 * the desired component properties in the "Child Actor Template / InteractionSDK" sub-section.
 */

UCLASS(
    Abstract,
    Blueprintable,
    ClassGroup = ("InteractionSDK|Rig"),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Rig Component"))
class OCULUSINTERACTIONPREBUILTS_API UIsdkRigComponent : public USceneComponent
{
  GENERATED_BODY()

 public:
  // Default constructor required for Unreal object system.
  UIsdkRigComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
  void CreateInteractionGroupConditionals();

  virtual void BeginPlay() override;
  virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkPokeInteractor* GetPokeInteractor() const
  {
    return PokeInteraction->PokeInteractor;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkRayInteractor* GetRayInteractor() const
  {
    return RayInteraction->RayInteractor;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkPokeLimiterVisual* GetPokeLimiterVisual() const
  {
    return PokeInteraction->PokeLimiterVisual;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkGrabberComponent* GetGrabber() const
  {
    return GrabInteraction->Grabber;
  }

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkHandVisualsRigComponent* GetHandVisuals() const
  {
    return HandVisuals;
  }
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkControllerVisualsRigComponent* GetControllerVisuals() const
  {
    return ControllerVisuals;
  }
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkRayInteractionRigComponent* GetRayInteraction() const
  {
    return RayInteraction;
  }
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkPokeInteractionRigComponent* GetPokeInteraction() const
  {
    return PokeInteraction;
  }
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkGrabInteractionRigComponent* GetGrabInteraction() const
  {
    return GrabInteraction;
  }
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkInputActionsRigComponent* GetInputActions() const
  {
    return InputActions;
  }
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkInteractionGroupRigComponent* GetInteractionGroup() const
  {
    return InteractionGroup;
  }
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  const FIsdkVirtualUserInfo& GetWidgetVirtualUser() const
  {
    return WidgetVirtualUser;
  }
  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetWidgetVirtualUser(const FIsdkVirtualUserInfo& InWidgetVirtualUser)
  {
    WidgetVirtualUser = InWidgetVirtualUser;
  }

  /* Returns all of the active rig modifiers successfully spawned from RigModifiersToSpawn*/
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  const TArray<UIsdkRigModifier*> GetActiveRigModifiers() const
  {
    return ActiveRigModifiers;
  }

  /* Returns true if HMD DataSource is valid and returns reference to it */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool GetHmdDataSource(TScriptInterface<IIsdkIHmdDataSource>& HmdDataSourceOut) const
  {
    HmdDataSourceOut = HmdDataSource;
    return IsValid(HmdDataSource.GetObject());
  }

  /**
   * @brief When true, during BeginPlay this actor will bind the configured input actions to the
   * PlayerController at index 0.
   * If false, a manual call to BindInputActionEvents must be made to bind the input actions.
   */
  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  bool bAutoBindInputActions = true;

  /**
   * @brief Binds input actions used by the interactors to the given component. This method will not
   * undo any previous bindings, therefore should only be called once. If you intend to call this,
   * make sure to set `bAutoBindInputActions` to false.
   */
  virtual void BindInputActions(UEnhancedInputComponent* EnhancedInputComponent);

  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "InteractionSDK|Customization")
  EIsdkHandBones RayInteractorSocket = EIsdkHandBones::HandWristRoot;
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "InteractionSDK|Customization")
  EIsdkHandBones PokeInteractorSocket = EIsdkHandBones::HandIndexTip;
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "InteractionSDK|Customization")
  EIsdkHandBones GrabberSocket = EIsdkHandBones::HandWristRoot;

  /* All Rig Modifiers that this Rig Component should spawn and initialize */
  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  TArray<TSubclassOf<UIsdkRigModifier>> RigModifiersToSpawn;

  UIsdkTrackedDataSourceRigComponent* GetVisuals();

  UPROPERTY(BlueprintAssignable, Category = InteractionSDK)
  FIsdkRigComponentLifecycleEvent DataSourcesReady;

  const FName OpenXRName = "OpenXR";

 protected:
  virtual void OnHandVisualsAttached() {}
  virtual void OnControllerVisualsAttached() {}
  virtual void UpdateComponentDataSources();
  virtual void RegisterInteractorWidgetIndices();
  virtual void UnregisterInteractorWidgetIndices();

  void SetRigComponentDefaults(EIsdkHandType HandType);

  // Attempts to find another already created HmdDataSource on other RigComponents. If unable,
  // creates one. Sets either result to member variable.
  void InitializeHmdDataSource();

  bool bHasBoundInputActions = false;
  bool bAreDataSourcesReady = false;

  // Properties for access of attached components.
  UPROPERTY(BlueprintGetter = GetHandVisuals, EditAnywhere, Category = InteractionSDK)
  UIsdkHandVisualsRigComponent* HandVisuals{};
  UPROPERTY(BlueprintGetter = GetControllerVisuals, EditAnywhere, Category = InteractionSDK)
  UIsdkControllerVisualsRigComponent* ControllerVisuals{};
  UPROPERTY(BlueprintGetter = GetRayInteraction, EditAnywhere, Category = InteractionSDK)
  UIsdkRayInteractionRigComponent* RayInteraction{};
  UPROPERTY(BlueprintGetter = GetPokeInteraction, EditAnywhere, Category = InteractionSDK)
  UIsdkPokeInteractionRigComponent* PokeInteraction{};
  UPROPERTY(BlueprintGetter = GetGrabInteraction, EditAnywhere, Category = InteractionSDK)
  UIsdkGrabInteractionRigComponent* GrabInteraction{};
  UPROPERTY(BlueprintGetter = GetInputActions, EditAnywhere, Category = InteractionSDK)
  UIsdkInputActionsRigComponent* InputActions{};
  UPROPERTY(BlueprintGetter = GetInteractionGroup, EditAnywhere, Category = InteractionSDK)
  UIsdkInteractionGroupRigComponent* InteractionGroup{};
  UPROPERTY(
      BlueprintGetter = GetWidgetVirtualUser,
      BlueprintSetter = SetWidgetVirtualUser,
      EditAnywhere,
      Category = InteractionSDK,
      meta = (ExposeOnSpawn = true))
  FIsdkVirtualUserInfo WidgetVirtualUser{};

  UPROPERTY()
  TArray<UIsdkRigModifier*> ActiveRigModifiers;

  UPROPERTY()
  TScriptInterface<IIsdkIHmdDataSource> HmdDataSource{};
};

UCLASS(
    Blueprintable,
    ClassGroup = ("InteractionSDK|Rig"),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Hand Rig (L)"))
class OCULUSINTERACTIONPREBUILTS_API UIsdkHandRigComponentLeft : public UIsdkRigComponent
{
  GENERATED_BODY()

 public:
  UIsdkHandRigComponentLeft(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get())
      : Super(ObjectInitializer.DoNotCreateDefaultSubobject(TEXT("ControllerVisuals")))
  {
    SetRigComponentDefaults(EIsdkHandType::HandLeft);
  }

 protected:
  virtual void OnHandVisualsAttached() override;
};

UCLASS(
    Blueprintable,
    ClassGroup = ("InteractionSDK|Rig"),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Hand Rig (R)"))
class OCULUSINTERACTIONPREBUILTS_API UIsdkHandRigComponentRight : public UIsdkRigComponent
{
  GENERATED_BODY()

 public:
  UIsdkHandRigComponentRight(
      const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get())
      : Super(ObjectInitializer.DoNotCreateDefaultSubobject(TEXT("ControllerVisuals")))
  {
    SetRigComponentDefaults(EIsdkHandType::HandRight);
  }

 protected:
  virtual void OnHandVisualsAttached() override;
};
