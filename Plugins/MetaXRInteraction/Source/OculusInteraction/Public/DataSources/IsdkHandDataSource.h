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

#include "GameFramework/Actor.h"

#include "CoreMinimal.h"
#include "IsdkHandData.h"
#include "IsdkIHandJoints.h"
#include "StructTypes.h"
#include "IsdkHandDataSource.generated.h"

// Forward declarations of internal types
namespace isdk::api
{
class IHandDataSource;

namespace helper
{
class FDataSourceImpl;
}
} // namespace isdk::api

UCLASS(Abstract)
class OCULUSINTERACTION_API UIsdkHandDataSource : public UActorComponent, public IIsdkIHandJoints
{
  GENERATED_BODY()

 public:
  UIsdkHandDataSource();
  virtual void BeginDestroy() override;

  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

  virtual bool IsApiInstanceValid() const
      PURE_VIRTUAL(UIsdkHandDataSource::IsApiInstanceValid, return false;);

  virtual isdk::api::IHandDataSource* GetApiIHandDataSource()
      PURE_VIRTUAL(UIsdkHandDataSource::GetApiIHandDataSource, return nullptr;);

  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  virtual UIsdkHandData* GetHandData_Implementation() override
  {
    return HandData;
  }

  static bool EnsureDataSourceResult(EIsdkDataSourceUpdateDataResult RetVal);

  static isdk::api::IHandDataSource* ValidateAndGetApiDataSource(
      UIsdkHandDataSource* InDataSource,
      FString&& ErrMsgFieldName);

  /* Sets the Inbound Hand Data reference, and propagates the bone map data down to it*/
  void SetInboundHandData(UIsdkHandData* HandDataIn)
  {
    if (IsValid(HandDataIn))
    {
      HandDataInbound = HandDataIn;
      PropagateInboundBoneMap();
    }
  }
  /* Pushes down Inbound Bone Map to Inbound Hand Data */
  void PropagateInboundBoneMap()
  {
    if (IsValid(HandDataInbound))
    {
      HandDataInbound->SetInboundBoneMap(InboundBoneMap);
    }
  }

  /* Pushes down Outbound Bone Map to Outbound Hand Data */
  void PropagateOutboundBoneMap()
  {
    if (IsValid(HandData))
    {
      HandData->SetOutboundBoneMap(OutboundBoneMap);
    }
  }

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void GetBoneMaps(TMap<int32, int32>& OutboundMapOut, TMap<int32, int32>& InboundMapOut)
  {
    OutboundMapOut = OutboundBoneMap;
    InboundMapOut = InboundBoneMap;
  }
  UPROPERTY(EditAnywhere, Category = InteractionSDK)
  bool bUpdateInTick = false;
  double LastTickedTime = 0.0f;

 protected:
  void ReadHandJointsFromImpl();
  virtual bool ShouldUpdateDataSource()
  {
    return bUpdateInTick;
  }

  UPROPERTY(BlueprintGetter = GetHandData_Implementation, Category = InteractionSDK)
  UIsdkHandData* HandData{};

  UPROPERTY()
  UIsdkHandData* HandDataInbound{};

  UPROPERTY()
  TMap<int32, int32> InboundBoneMap = {};

  UPROPERTY()
  TMap<int32, int32> OutboundBoneMap = {};

  TPimplPtr<isdk::api::helper::FDataSourceImpl> DataSourceImpl;
};
