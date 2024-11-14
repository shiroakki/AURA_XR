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
#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "Utilities/FIsdkMathUtils.h"
#include "IsdkThrowable.generated.h"

UENUM(BlueprintType)
enum class EIsdkVelocityEstimationMethod : uint8
{
  VE_LeastSquares UMETA(
      DisplayName = "Least Squares",
      Tooltip =
          "A simple and efficient method that assumes a linear relationship. Gives more deterministic results when the tracking data is free of outliers. Note: Outliers are already being filtered out based on the Z-Score threshold."),
  VE_RANSAC UMETA(
      DisplayName = "RANSAC",
      Tooltip =
          "A robust method that can handle a significant amount of outlier data. Best used when the tracking data contains a large number of outliers."),
  VE_KalmanFilter UMETA(
      DisplayName = "Kalman Filter",
      Tooltip =
          "[EXPERIMENTAL] An advanced method that uses a statistical approach to estimate the velocity. The Kalman filter takes into account the uncertainty in the position and time data to provide a more accurate estimate of the velocity.")
};

USTRUCT(BlueprintType, Category = "ISDK Throwable")
struct OCULUSINTERACTION_API FIsdkThrowableSettings
{
  GENERATED_BODY()
  // The number of samples to store for the objects positions and rotations
  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Throwable",
      meta =
          (ClampMin = "1",
           ClampMax = "100",
           Tooltip =
               "The number of recent object positions used to estimate the release velocity."))
  int32 SampleSize = 8;
  // The threshold for the Z-score filter
  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Throwable",
      meta =
          (ClampMin = "1.0",
           ClampMax = "5.0",
           Tooltip =
               "The threshold for the Z-score filter. Object positions with a Z-score above this threshold are considered outliers and are excluded from the velocity estimation."))
  float Z_Score_Threshold = 2.0f;
  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Throwable",
      meta = (ClampMin = "1.0", ClampMax = "5.0", Tooltip = "The scale for the angular velocity."))
  float AngularVelocityScale = 2.0f;

  float LastTime;

  // The method to use for velocity estimation
  UPROPERTY(
      EditAnywhere,
      BlueprintReadWrite,
      Category = "InteractionSDK|Throwable",
      meta = (Tooltip = "The method to use for estimating the release velocity of the object."))
  EIsdkVelocityEstimationMethod VelocityEstimationMethod =
      EIsdkVelocityEstimationMethod::VE_LeastSquares;
};

UCLASS(
    Blueprintable,
    ClassGroup = (InteractionSDK),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Throwable"))
class OCULUSINTERACTION_API UIsdkThrowable : public USceneComponent
{
  GENERATED_BODY()

 public:
  UIsdkThrowable();
  // The scene component that this throwing component is tracking
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ISDK Throwable")
  USceneComponent* TrackedComponent{};
  // The settings for the throwable component
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ISDK Throwable")
  FIsdkThrowableSettings Settings{};
  double MAX_TIME_DELTA = 0.03f;

  // Methods to calculate the release velocity and angular velocity
  UFUNCTION(BlueprintCallable, Category = "ISDK Throwable")
  FVector GetVelocity();
  UFUNCTION(BlueprintCallable, Category = "ISDK Throwable")
  FQuat GetAngularVelocity();

 protected:
  virtual void BeginPlay() override;

 public:
  void SetSamplePositions(TArray<TPair<FVector, float>>& Positions);
  void SetSampleRotations(TArray<TPair<FQuat, float>>& Rotations);
  void ProcessKalmanFilter();
  bool CheckPositionConstraints();

  // Called every frame
  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

 private:
  FKalmanFilterParameters KalmanParams;
  const FVector KalmanProcessNoise = FVector(0.1, 0.1, 0.1);
  const FVector KalmanObservationNoise = FVector(0.01, 0.01, 0.01);
  // A high value for the error covariance means a high degree of uncertainty of the initial state
  // estimate It predicts how much the actual state will deviate from the predicted state
  const FVector KalmanErrorCovariance = FVector(1000, 1000, 1000);
  bool IsFirstFrame = true;
  const float MinPositionThreshold = 0.002f;
  const float MaxPositionThreshold = 100.0f;
  const float MinVelocity = -1000.0f;
  const float MaxVelocity = 1000.0f;
  const float MaxAngularSpeed = 720.0f;
  const int32 Ransac_Iterations = 50;
  const float Ransac_Score_Threshold = 0.01f;

  // Arrays to store the last tracked object positions and rotations
  TArray<TPair<FVector, float>> LastNPositions;
  TArray<TPair<FQuat, float>> LastNRotations;
  void GetLastNPositions(int32 N, TArray<TPair<FVector, float>>& OutPositions);

  int32 CurrentPositionIndex = 0;
  int32 PreviousPositionIndex = 0;
  int32 CurrentRotationIndex = 0;

  void ResetKalmanFilter();
};
