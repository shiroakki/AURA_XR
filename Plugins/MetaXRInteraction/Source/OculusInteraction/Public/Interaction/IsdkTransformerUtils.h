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
#include "IsdkTransformerUtils.generated.h"

USTRUCT(BlueprintType) struct FIsdkAxisConstraints
{
  GENERATED_USTRUCT_BODY()

 public:
  FIsdkAxisConstraints() = default;
  FIsdkAxisConstraints(bool ConstrainVal, float MinVal, float MaxVal)
      : Constrain(ConstrainVal), Min(MinVal), Max(MaxVal)
  {
  }

  UPROPERTY(BlueprintReadWrite, meta = (Input))
  bool Constrain{false};
  UPROPERTY(BlueprintReadWrite, meta = (Input))
  float Min{0};
  UPROPERTY(BlueprintReadWrite, meta = (Input))
  float Max{0};
};

USTRUCT(BlueprintType) struct FIsdkConstraintAxes
{
  GENERATED_USTRUCT_BODY()

 public:
  FIsdkConstraintAxes() = default;

  UPROPERTY(BlueprintReadWrite, meta = (Input))
  FIsdkAxisConstraints XAxis;

  UPROPERTY(BlueprintReadWrite, meta = (Input))
  FIsdkAxisConstraints YAxis;

  UPROPERTY(BlueprintReadWrite, meta = (Input))
  FIsdkAxisConstraints ZAxis;

  bool HasConstraints() const
  {
    return XAxis.Constrain || YAxis.Constrain || ZAxis.Constrain;
  }
};

namespace FIsdkTransformerUtils
{
using Pose = FTransform;
using ScaleConstraints = FIsdkAxisConstraints;
using PositionConstraints = FIsdkConstraintAxes;
using ConstrainedAxis = FIsdkAxisConstraints;
using RotationConstraints = FIsdkConstraintAxes;

static PositionConstraints GenerateParentPositionConstraints(
    PositionConstraints constraints,
    FVector initialPosition)
{
  PositionConstraints parentConstraints;

  if (constraints.XAxis.Constrain)
  {
    parentConstraints.XAxis.Constrain = true;
    parentConstraints.XAxis.Min = constraints.XAxis.Min + initialPosition.X;
    parentConstraints.XAxis.Max = constraints.XAxis.Max + initialPosition.X;
  }
  if (constraints.YAxis.Constrain)
  {
    parentConstraints.YAxis.Constrain = true;
    parentConstraints.YAxis.Min = constraints.YAxis.Min + initialPosition.Y;
    parentConstraints.YAxis.Max = constraints.YAxis.Max + initialPosition.Y;
  }
  if (constraints.ZAxis.Constrain)
  {
    parentConstraints.ZAxis.Constrain = true;
    parentConstraints.ZAxis.Min = constraints.ZAxis.Min + initialPosition.Z;
    parentConstraints.ZAxis.Max = constraints.ZAxis.Max + initialPosition.Z;
  }

  return parentConstraints;
}

static ScaleConstraints GenerateParentScaleConstraints(
    ScaleConstraints constraints,
    FVector initialScale)
{
  ScaleConstraints parentConstraints;

  if (constraints.Constrain)
  {
    parentConstraints.Constrain = true;
    parentConstraints.Min = constraints.Min * initialScale.X;
    parentConstraints.Max = constraints.Max * initialScale.X;
  }

  return parentConstraints;
}

static FVector GetConstrainedTransformPosition(
    FVector unconstrainedPosition,
    PositionConstraints positionConstraints,
    FTransform relativeTransform = FTransform::Identity)
{
  FVector constrainedPosition = unconstrainedPosition;

  // the translation constraints occur in parent space
  constrainedPosition = relativeTransform.InverseTransformPosition(constrainedPosition);

  if (positionConstraints.XAxis.Constrain)
  {
    constrainedPosition.X = FMath::Clamp(
        constrainedPosition.X, positionConstraints.XAxis.Min, positionConstraints.XAxis.Max);
  }
  if (positionConstraints.YAxis.Constrain)
  {
    constrainedPosition.Y = FMath::Clamp(
        constrainedPosition.Y, positionConstraints.YAxis.Min, positionConstraints.YAxis.Max);
  }
  if (positionConstraints.ZAxis.Constrain)
  {
    constrainedPosition.Z = FMath::Clamp(
        constrainedPosition.Z, positionConstraints.ZAxis.Min, positionConstraints.ZAxis.Max);
  }

  // Convert the constrained position back to world space
  constrainedPosition = relativeTransform.TransformPosition(constrainedPosition);

  return constrainedPosition;
}

static FQuat GetConstrainedTransformRotation(
    FQuat unconstrainedRotation,
    RotationConstraints rotationConstraints)
{
  auto newX = unconstrainedRotation.Euler().X;
  auto newY = unconstrainedRotation.Euler().Y;
  auto newZ = unconstrainedRotation.Euler().Z;

  if (rotationConstraints.XAxis.Constrain)
  {
    newX = FMath::Clamp(
        unconstrainedRotation.Euler().X,
        rotationConstraints.XAxis.Min,
        rotationConstraints.XAxis.Max);
  }
  if (rotationConstraints.YAxis.Constrain)
  {
    newY = FMath::Clamp(
        unconstrainedRotation.Euler().Y,
        rotationConstraints.YAxis.Min,
        rotationConstraints.YAxis.Max);
  }
  if (rotationConstraints.ZAxis.Constrain)
  {
    newZ = FMath::Clamp(
        unconstrainedRotation.Euler().Z,
        rotationConstraints.ZAxis.Min,
        rotationConstraints.ZAxis.Max);
  }

  return FQuat::MakeFromEuler(FVector(newX, newY, newZ));
}

static FVector GetConstrainedTransformScale(
    FVector unconstrainedScale,
    ScaleConstraints scaleConstraints)
{
  FVector constrainedScale = unconstrainedScale;

  if (scaleConstraints.Constrain)
  {
    constrainedScale.X =
        FMath::Clamp(constrainedScale.X, scaleConstraints.Min, scaleConstraints.Max);
    constrainedScale.Y =
        FMath::Clamp(constrainedScale.Y, scaleConstraints.Min, scaleConstraints.Max);
    constrainedScale.Z =
        FMath::Clamp(constrainedScale.Z, scaleConstraints.Min, scaleConstraints.Max);
  }

  return constrainedScale;
}

static FVector GetOffsetFromTransformToPoint(const Pose& Pose, const FVector& Center)
{
  return Center - Pose.GetLocation();
}

} // namespace FIsdkTransformerUtils
