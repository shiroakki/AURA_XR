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
#include "IsdkIInteractorState.h"
#include "Components/ActorComponent.h"
#include "Components/AudioComponent.h"
#include "Engine/World.h"
#include "Interaction/IsdkGrabbableComponent.h"
#include "Sound/SoundBase.h"
#include "Math/UnrealMathUtility.h"

#include "IsdkGrabbableAudio.generated.h"

enum Direction
{
  None,
  ScaleUp,
  ScaleDown,
};

/// Raises events when an object is scaled up or down. Events are raised in steps,
/// meaning scale changes are only responded to when the scale magnitude delta since
/// last step exceeds a provided amount.
/// </summary>
UCLASS(
    Blueprintable,
    ClassGroup = (InteractionSDK),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Grabbable Audio"))
class OCULUSINTERACTION_API UIsdkGrabbableAudio final : public UActorComponent
{
  GENERATED_BODY()

 public:
  UPROPERTY(BlueprintReadWrite, Category = InteractionSDK)
  TScriptInterface<IIsdkIInteractableState> ScalingInteractable{};

  UIsdkGrabbableAudio()
  {
    PrimaryComponentTick.bCanEverTick = true;
    GrabbableAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Grabbable Audio"));
  }

  UFUNCTION(BlueprintInternalUseOnly)
  void OnInteractableStateChange(FIsdkInteractableStateEvent Event)
  {
    const auto NewState = Event.Args.NewState;
    if (NewState != State)
    {
      // are we switching to Select?
      if (NewState == EIsdkInteractableState::Select)
      {
        if (GrabbingSounds.Num())
        {
          GrabbableAudioComponent->SetSound(
              GrabbingSounds[FMath::Rand() % (GrabbingSounds.Num() - 1)]);
          GrabbableAudioComponent->SetPitchMultiplier(
              GrabbingBasePitch + FMath::RandRange(-GrabbingPitchRange, GrabbingPitchRange));
          GrabbableAudioComponent->VolumeMultiplier =
              (GrabbingBaseVolume + FMath::RandRange(-GrabbingVolumeRange, GrabbingVolumeRange));
          GrabbableAudioComponent->Play();
        }
      }

      // are we leaving Select?
      if (State == EIsdkInteractableState::Select)
      {
        if (ReleasingSounds.Num())
        {
          GrabbableAudioComponent->SetSound(
              ReleasingSounds[FMath::RandRange(0, ReleasingSounds.Num() - 1)]);
          GrabbableAudioComponent->SetPitchMultiplier(
              GrabbingBasePitch + FMath::RandRange(-GrabbingPitchRange, GrabbingPitchRange));
          GrabbableAudioComponent->VolumeMultiplier =
              (GrabbingBaseVolume + FMath::RandRange(-GrabbingVolumeRange, GrabbingVolumeRange));
          GrabbableAudioComponent->Play();
        }
      }
      State = NewState;
    }
  }

  void PreloadSounds(const TArray<USoundBase*>& Sounds)
  {
    for (int i = 0; i < Sounds.Num(); i++)
    {
      USoundBase* Sound = Sounds[i];
      GrabbableAudioComponent->SetSound(Sound);
    }
  }

  virtual void BeginPlay() override
  {
    Super::BeginPlay();

    PreloadSounds(GrabbingSounds);
    PreloadSounds(ReleasingSounds);
    PreloadSounds(ScalingSounds);

    if (!IsValid(ScalingInteractable.GetObject()))
    {
      // find interactable component in actor
      ScalingInteractable = Cast<UIsdkGrabbableComponent>(
          GetOwner()->GetComponentByClass(UIsdkGrabbableComponent::StaticClass()));
      if (IsValid(ScalingInteractable.GetObject()))
      {
        ScalingInteractable->GetInteractableStateChangedDelegate()->AddDynamic(
            this, &UIsdkGrabbableAudio::OnInteractableStateChange);
      }
    }
  }

  virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override
  {
    if (IsValid(ScalingInteractable.GetObject()))
    {
      ScalingInteractable->GetInteractableStateChangedDelegate()->RemoveDynamic(
          this, &UIsdkGrabbableAudio::OnInteractableStateChange);
    }
  }

  FTransform TrackedTransform;

  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Grabbable|Audio|Scaling",
      meta = (Tooltip = "The increase in scale magnitude that will fire the step event"))
  float StepSize = 0.6f;

  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Grabbable|Audio|Scaling",
      meta = (Tooltip = "Events will not be fired more frequently than this many times per second"))
  int MaxEventFreq = 25;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractionSDK|Grabbable|Audio|Scaling")
  TArray<USoundBase*> ScalingSounds;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractionSDK|Grabbable|Audio|Grabbing")
  TArray<USoundBase*> GrabbingSounds;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractionSDK|Grabbable|Audio|Grabbing")
  TArray<USoundBase*> ReleasingSounds;

  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Grabbable|Audio|Grabbing",
      meta =
          (Tooltip = "Sets the default pitch for the grabbing sound (1 is normal pitch)",
           ClampMin = ".1",
           ClampMax = "3.0",
           UIMin = ".1",
           UIMax = "3.0"))
  float GrabbingBasePitch{1};

  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Grabbable|Audio|Grabbing",
      meta =
          (Tooltip =
               "Adjust the slider value for randomized pitch of the grabbing sound (0 is no randomization)",
           ClampMin = "-3",
           ClampMax = "3",
           UIMin = "-3",
           UIMax = "3"))
  float GrabbingPitchRange{.1f};

  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Grabbable|Audio|Grabbing",
      meta =
          (Tooltip =
               "Sets the default volume for the grabbing sound (0 = silent, 1 = full volume)"))
  float GrabbingBaseVolume{1};

  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Grabbable|Audio|Grabbing",
      meta =
          (Tooltip =
               "Adjust the slider value for randomized volume level playback if the grabbing sound (0 is no randomization)"))
  float GrabbingVolumeRange{0};

  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Grabbable|Audio|Scaling",
      meta =
          (Tooltip = "Sets the default pitch for the scaling sound (1 is normal pitch)",
           ClampMin = ".1",
           ClampMax = "3.0",
           UIMin = ".1",
           UIMax = "3.0"))
  float ScalingBasePitch{1};

  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Grabbable|Audio|Scaling",
      meta =
          (Tooltip = "Sets the pitch range for the scaling sound ",
           ClampMin = "-3",
           ClampMax = "3",
           UIMin = "-3",
           UIMax = "3"))
  float ScalingPitchRange{.1};

 private:
  bool IsScaling{false};
  FVector LastStep{};
  float LastEventTime{0};
  Direction CurDirection = Direction::None;
  UPROPERTY()
  TObjectPtr<USoundBase> SoundObject{nullptr};
  EIsdkInteractableState State{EIsdkInteractableState::Normal};

 protected:
  bool Started{false};

 private:
  UPROPERTY()
  UAudioComponent* GrabbableAudioComponent{nullptr};

  FVector GetActorScale()
  {
    return GetOwner()->GetRootComponent()->GetRelativeScale3D();
  }
  void ScalingStarted()
  {
    LastStep = GetActorScale();
  }

  void ScalingEnded() {}

  float GetTotalDelta(Direction& direction)
  {
    const float PrevMagnitude = LastStep.Length();
    const float NewMagnitude = GetActorScale().Length();
    if (NewMagnitude == PrevMagnitude)
    {
      direction = Direction::None;
    }
    else
    {
      direction = NewMagnitude > PrevMagnitude ? Direction::ScaleUp : Direction::ScaleDown;
    }

    return direction == Direction::ScaleUp ? NewMagnitude - PrevMagnitude
                                           : PrevMagnitude - NewMagnitude;
  }

  void UpdateScaling()
  {
    if (StepSize <= 0 || MaxEventFreq <= 0)
    {
      return;
    }

    if (ScalingSounds.Num())
    {
      float totalDelta = GetTotalDelta(CurDirection);
      if (totalDelta > StepSize)
      {
        LastStep = GetOwner()->GetActorScale();
        auto CurTime = GetWorld()->GetRealTimeSeconds();
        float timeSince = CurTime - LastEventTime;
        if (timeSince >= 1.f / MaxEventFreq)
        {
          LastEventTime = CurTime;
          GrabbableAudioComponent->SetSound(
              ScalingSounds[FMath::RandRange(0, ScalingSounds.Num() - 1)]);
          if (CurDirection == Direction::ScaleUp)
          {
            // scaling up
            GrabbableAudioComponent->SetPitchMultiplier(GrabbingBasePitch + ScalingPitchRange);
          }
          else
          {
            // scaling down
            GrabbableAudioComponent->SetPitchMultiplier(GrabbingBasePitch - ScalingPitchRange);
          }
          GrabbableAudioComponent->VolumeMultiplier = GrabbingBaseVolume;
          GrabbableAudioComponent->Play();
        }
      }
    }
  }

  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override
  {
    const bool wasScaling = IsScaling;
    IsScaling = ScalingInteractable->GetInteractableState() == EIsdkInteractableState::Select;

    if (!IsScaling)
    {
      if (wasScaling)
      {
        ScalingEnded();
      }
    }
    else
    {
      if (!wasScaling)
      {
        ScalingStarted();
      }
      UpdateScaling();
    }
  }
};
