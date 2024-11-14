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

class IsdkContentAssetPaths
{
 public:
  struct Configurations
  {
    static inline constexpr auto PokeInteractablePanelConfig =
        TEXT("/OculusInteraction/Configurations/IsdkPokeInteractablePanelConfig");
  };
  struct Engine
  {
    struct BasicShapes
    {
      static inline constexpr auto Plane = TEXT("/Engine/BasicShapes/Plane");
      static inline constexpr auto Cube = TEXT("/Engine/BasicShapes/Cube");
    };
  };
  struct Audio
  {
    static inline constexpr auto Interaction_BasicRay_Press =
        TEXT("/OculusInteraction/Audio/Interaction_BasicRay_Press");
    static inline constexpr auto Interaction_BasicPoke_ButtonPress =
        TEXT("/OculusInteraction/Audio/Interaction_BasicPoke_ButtonPress");
  };
  struct Inputs
  {
    static inline constexpr auto ISDK_IA_RightHandPinchSelectStrength =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_RightHandPinchSelectStrength");
    static inline constexpr auto ISDK_IA_RightHandPinchSelect =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_RightHandPinchSelect");
    static inline constexpr auto ISDK_IA_LeftHandPinchSelectStrength =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_LeftHandPinchSelectStrength");
    static inline constexpr auto ISDK_IA_LeftHandPinchSelect =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_LeftHandPinchSelect");
    static inline constexpr auto ISDK_IA_RightControllerSelectStrength =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_RightControllerSelectStrength");
    static inline constexpr auto ISDK_IA_RightControllerSelect =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_RightControllerSelect");
    static inline constexpr auto ISDK_IA_LeftControllerSelectStrength =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_LeftControllerSelectStrength");
    static inline constexpr auto ISDK_IA_LeftControllerSelect =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_LeftControllerSelect");
    static inline constexpr auto ISDK_IA_LeftHandPinchGrab =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_LeftHandPinchGrab");
    static inline constexpr auto ISDK_IA_RightHandPinchGrab =
        TEXT("/OculusInteraction/Inputs/ISDK_IA_RightHandPinchGrab");
  };
  struct Materials
  {
    static inline constexpr auto TextUnlit = TEXT("/OculusInteraction/Materials/TextUnlit");
    static inline constexpr auto RoundedBoxUnlit =
        TEXT("/OculusInteraction/Materials/RoundedBoxUnlit");
    static inline constexpr auto RoundedBoxUnlit_TwoSided =
        TEXT("/OculusInteraction/Materials/RoundedBoxUnlit_TwoSided");
    static inline constexpr auto PinchArrow =
        TEXT("/OculusInteraction/Materials/PinchArrowMaterial");
    static inline constexpr auto Cursor = TEXT("/OculusInteraction/Materials/CursorMaterial");
    static inline constexpr auto Widget3DRoundedBox_Masked =
        TEXT("/OculusInteraction/Materials/Widget3DRoundedBox");
    static inline constexpr auto Widget3DRoundedBox_Masked_OneSided =
        TEXT("/OculusInteraction/Materials/Widget3DRoundedBox_Masked_OneSided");
    static inline constexpr auto Widget3DRoundedBox_Transparent =
        TEXT("/OculusInteraction/Materials/Widget3DRoundedBox_Transparent");
    static inline constexpr auto Widget3DRoundedBox_Transparent_OneSided =
        TEXT("/OculusInteraction/Materials/Widget3DRoundedBox_Transparent_OneSided");
    static inline constexpr auto GrabbableDefault =
        TEXT("/OculusInteraction/Materials/GrabbableLit");
  };
  struct Models
  {
    struct RoundedButton
    {
      static inline constexpr auto DefaultTransitionCurve =
          TEXT("/OculusInteraction/Models/RoundedButton/DefaultTransitionCurve");
    };
    struct RayVisual
    {
      static inline constexpr auto OculusHandPinchArrowBlended =
          TEXT("/OculusInteraction/Models/RayVisual/OculusHandPinchArrowBlended");
      static inline constexpr auto PinchStrengthCurve =
          TEXT("/OculusInteraction/Models/RayVisual/PinchStrengthCurve");
    };
    struct Hand
    {
      static inline constexpr auto OculusHandL =
          TEXT("/OculusInteraction/Models/Hand/OpenXRLeftHand");
      static inline constexpr auto OculusHandR =
          TEXT("/OculusInteraction/Models/Hand/OpenXRRightHand");
      static inline constexpr auto OculusHandMaterial =
          TEXT("/OculusInteraction/Models/Hand/handmat");
    };
    struct Controller
    {
      static inline constexpr auto OculusControllerL =
          TEXT("/OculusInteraction/Models/Controller/LeftMetaQuestTouchPro");
      static inline constexpr auto OculusControllerR =
          TEXT("/OculusInteraction/Models/Controller/RightMetaQuestTouchPro");
      static inline constexpr auto OculusControllerMaterialL =
          TEXT("/OculusInteraction/Models/Controller/LeftMetaQuestTouchProMaterial");
      static inline constexpr auto OculusControllerMaterialR =
          TEXT("/OculusInteraction/Models/Controller/RightMetaQuestTouchProMaterial");
    };
  };
  struct ControllerHands
  {
    static inline constexpr auto ControllerHandLBP =
        TEXT("/OculusInteraction/ControllerHands/IsdkControllerHandLeft");
    static inline constexpr auto ControllerHandRBP =
        TEXT("/OculusInteraction/ControllerHands/IsdkControllerHandRight");
  };
};
