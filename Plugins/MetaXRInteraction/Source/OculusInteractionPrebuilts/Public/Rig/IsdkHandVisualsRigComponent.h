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
#include "IsdkHandData.h"
#include "IsdkTrackedDataSourceRigComponent.h"
#include "Components/ActorComponent.h"

#include "IsdkHandVisualsRigComponent.generated.h"

class UIsdkHandVisual;
class UIsdkSyntheticHand;
class UIsdkOneEuroFilterDataModifier;
class USceneComponent;
class UMaterial;
class USkeletalMesh;

UCLASS(ClassGroup = (InteractionSDK))
class OCULUSINTERACTIONPREBUILTS_API UIsdkHandVisualsRigComponent
    : public UIsdkTrackedDataSourceRigComponent
{
  GENERATED_BODY()
 public:
  UIsdkHandVisualsRigComponent();

  virtual void InitializeComponent() override;

  // must be called from Target's constructor.
  void SetSubobjectPropertyDefaults(EIsdkHandType InHandType);

  virtual USceneComponent* GetTrackedVisual() const override;
  virtual USceneComponent* GetSyntheticVisual() const override;

  UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = InteractionSDK)
  UIsdkSyntheticHand* SyntheticHand{};
  UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = InteractionSDK)
  UIsdkHandVisual* TrackedHandVisual{};
  UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = InteractionSDK)
  UIsdkHandVisual* SyntheticHandVisual{};
  UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = InteractionSDK)
  UIsdkOneEuroFilterDataModifier* OneEuroFilterDataModifier{};

 protected:
  virtual FTransform GetCurrentSyntheticTransform() override;

  virtual void OnDataSourcesCreated() override;

  void SetHandVisualPropertyDefaults(
      UIsdkHandVisual* HandVisual,
      USkeletalMesh* SkeletalMesh,
      UMaterial* Material);
};
