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

// Includes needed in StructTypes.h
class IIsdkIPayload;
class IIsdkIPose;
class IIsdkIActiveState;

#include "StructTypesNonGenerated.generated.h"

USTRUCT(BlueprintType)
struct OCULUSINTERACTION_API FIsdkPosef
{
  GENERATED_USTRUCT_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK)
  FQuat Orientation = FQuat::Identity;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK)
  FVector3f Position = FVector3f::ZeroVector;

  FTransform ToTransform()
  {
    return FTransform(Orientation, FVector(Position));
  }

  void FromTransform(FTransform transform)
  {
    Orientation = transform.GetRotation();
    Position = (FVector3f)transform.GetLocation();
  }
};

USTRUCT(Category = InteractionSDK, BlueprintType)
struct OCULUSINTERACTION_API FIsdkInteractionRelationshipCounts
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK)
  int NumHover{};

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK)
  int NumSelect{};
};

class UIsdkStandardEntity;
class UIsdkStandardPayload;
