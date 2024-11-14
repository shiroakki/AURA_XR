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

#include "Rig/IsdkInputActionsRigComponent.h"

#include "InputAction.h"
#include "IsdkHandData.h"
#include "IsdkContentAssetPaths.h"
#include "Misc/UObjectToken.h"
#include "UObject/ConstructorHelpers.h"
#include "Logging/MessageLog.h"

UIsdkInputActionsRigComponent::UIsdkInputActionsRigComponent()
{
  PrimaryComponentTick.bCanEverTick = false;
}

void UIsdkInputActionsRigComponent::SetSubobjectPropertyDefaults(EIsdkHandType InHandType)
{
  check(InHandType != EIsdkHandType::None);
  struct FStaticObjectFinders
  {
    ConstructorHelpers::FObjectFinderOptional<UInputAction> LeftHandPinchSelectAction;
    ConstructorHelpers::FObjectFinderOptional<UInputAction> RightHandPinchSelectAction;
    ConstructorHelpers::FObjectFinderOptional<UInputAction> LeftHandPinchSelectStrengthAction;
    ConstructorHelpers::FObjectFinderOptional<UInputAction> RightHandPinchSelectStrengthAction;
    ConstructorHelpers::FObjectFinderOptional<UInputAction> LeftHandPinchGrabAction;
    ConstructorHelpers::FObjectFinderOptional<UInputAction> RightHandPinchGrabAction;

    FStaticObjectFinders()
        : LeftHandPinchSelectAction(IsdkContentAssetPaths::Inputs::ISDK_IA_LeftHandPinchSelect),
          RightHandPinchSelectAction(IsdkContentAssetPaths::Inputs::ISDK_IA_RightHandPinchSelect),
          LeftHandPinchSelectStrengthAction(
              IsdkContentAssetPaths::Inputs::ISDK_IA_LeftHandPinchSelectStrength),
          RightHandPinchSelectStrengthAction(
              IsdkContentAssetPaths::Inputs::ISDK_IA_RightHandPinchSelectStrength),
          LeftHandPinchGrabAction(IsdkContentAssetPaths::Inputs::ISDK_IA_LeftHandPinchGrab),
          RightHandPinchGrabAction(IsdkContentAssetPaths::Inputs::ISDK_IA_RightHandPinchGrab)
    {
    }
  };
  static FStaticObjectFinders StaticObjectFinders;
  if (InHandType == EIsdkHandType::HandLeft)
  {
    SelectAction = StaticObjectFinders.LeftHandPinchSelectAction.Get();
    SelectStrengthAction = StaticObjectFinders.LeftHandPinchSelectStrengthAction.Get();
    PinchGrabAction = StaticObjectFinders.LeftHandPinchGrabAction.Get();
  }
  else if (InHandType == EIsdkHandType::HandRight)
  {
    SelectAction = StaticObjectFinders.RightHandPinchSelectAction.Get();
    SelectStrengthAction = StaticObjectFinders.RightHandPinchSelectStrengthAction.Get();
    PinchGrabAction = StaticObjectFinders.RightHandPinchGrabAction.Get();
  }
}

#if WITH_EDITOR
void UIsdkInputActionsRigComponent::CheckForErrors()
{
  Super::CheckForErrors();

#define LOCTEXT_NAMESPACE "InteractionSDK"
  if (!IsValid(SelectAction))
  {
    FMessageLog("MapCheck")
        .Warning()
        ->AddToken(FUObjectToken::Create(this))
        ->AddToken(FTextToken::Create(LOCTEXT(
            "MapCheck_Message_IsdkInputActionsRigComponent", "SelectAction field must be set.")));
  }
  if (!IsValid(SelectStrengthAction))
  {
    FMessageLog("MapCheck")
        .Warning()
        ->AddToken(FUObjectToken::Create(this))
        ->AddToken(FTextToken::Create(LOCTEXT(
            "MapCheck_Message_IsdkInputActionsRigComponent",
            "SelectStrengthAction field must be set.")));
  }
#undef LOCTEXT_NAMESPACE
}
#endif
