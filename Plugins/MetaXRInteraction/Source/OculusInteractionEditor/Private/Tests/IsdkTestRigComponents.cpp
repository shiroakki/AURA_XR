﻿/*
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

#include "IsdkTestRigComponents.h"

#include "IsdkCommonTestCommands.h"
#include "IsdkRuntimeSettings.h"
#include "Interaction/IsdkPokeInteractor.h"
#include "Interaction/IsdkRayInteractor.h"
#include "Rig/IsdkRayInteractionRigComponent.h"
#include "Rig/IsdkGrabInteractionRigComponent.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"
#include "Tests/AutomationEditorCommon.h"

#include <functional>

// A generic test step that finds the AIsdkTestRigActor test object, then passes it into a lambda
DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(
    FIsdkTestRigLambda,
    FAutomationTestBase*,
    Test,
    std::function<void(FAutomationTestBase* Test, AIsdkTestRigActor& Actor)>,
    TestCallback);

bool FIsdkTestRigLambda::Update()
{
  AIsdkTestRigActor* TestActor{};
  if (Test->AddErrorIfFalse(
          AIsdkTestRigActor::TryGetChecked(TestActor),
          TEXT("AIsdkTestRigActor was not in the test scene.")))
  {
    TestCallback(Test, *TestActor);
  }
  return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(
    FIsdkTestSpawnComponents,
    FAutomationTestBase*,
    Test);

// Test Step: Create an instance of AIsdkTestRigActor, which contains the object under test & its
// dependencies.
bool FIsdkTestSpawnComponents::Update()
{
  UWorld* TestWorld = GEditor->GetPIEWorldContext()->World();

  // Disable any known tracking subsystems, in case the are loaded (i.e. when running on local
  // machine) This ensures we test the path that those subsystems are unavailable.
  auto& Subsystems = TestWorld->GetSubsystemArray<UWorldSubsystem>();
  auto& DisabledSubsystems = UIsdkRuntimeSettings::Get().DisabledTrackingDataSubsystems;
  DisabledSubsystems.Empty();
  for (const auto Subsystem : Subsystems)
  {
    if (Subsystem->Implements<UIsdkITrackingDataSubsystem>())
    {
      DisabledSubsystems.Add(Subsystem->GetClass());
    }
  }

  // Spawn the test actor
  const auto TestActor =
      TestWorld->SpawnActor<AIsdkTestRigActor>(FVector::ZeroVector, FRotator::ZeroRotator);

  if (!TestActor)
  {
    Test->AddError("Failed to find TestActor in the scene.");
  }

  TestActor->ControllerVisuals->CustomTrackingData = TestActor->FakeTrackingDataSubsystem;
  TestActor->HandVisuals->CustomTrackingData = TestActor->FakeTrackingDataSubsystem;
  TestActor->ControllerRigLeft->GetControllerVisuals()->CustomTrackingData =
      TestActor->FakeTrackingDataSubsystem;

  return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(
    FIsdkTestControllerVisualsInit,
    FAutomationTestBase*,
    Test);

bool FIsdkTestControllerVisualsInit::Update()
{
  AIsdkTestRigActor* TestActor;
  if (!AIsdkTestRigActor::TryGetChecked(TestActor))
  {
    Test->AddError("Failed to find TestActor in the scene.");
    return true;
  }

  TestActor->ControllerRigLeft->GetControllerVisuals()->TryAttachToParentMotionController(
      TestActor->LeftHandMotionController);

  TestActor->ControllerVisuals->TryAttachToParentMotionController(
      TestActor->LeftHandMotionController);

  Test->TestEqual(
      TEXT(
          "TryAttachToParentMotionController should be able to attach a provided motion controller component"),
      TestActor->ControllerVisuals->AttachedToMotionController,
      TestActor->LeftHandMotionController);

  return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(
    FIsdkTestControllerVisualsCreateDataSources,
    FAutomationTestBase*,
    Test);

bool FIsdkTestControllerVisualsCreateDataSources::Update()
{
  AIsdkTestRigActor* TestActor;
  if (!AIsdkTestRigActor::TryGetChecked(TestActor))
  {
    Test->AddError("Failed to find TestActor in the scene.");
    return true;
  }

  {
    const UIsdkHandDataSource* Actual =
        TestActor->ControllerVisuals->GetDataSources().DataSourceComponent;
    Test->TestNull(
        TEXT(
            "ControllerVisuals should not have a data source set prior to calling CreateDataSourcesAsTrackedController."),
        Actual);
  }

  TestActor->ControllerVisuals->CreateDataSourcesAsTrackedController();
  TestActor->ControllerRigLeft->GetControllerVisuals()->CreateDataSourcesAsTrackedController();

  {
    const auto DataSources = TestActor->ControllerVisuals->GetDataSources();
    const UIsdkHandDataSource* Actual = DataSources.DataSourceComponent;
    const UIsdkHandDataSource* Expected = TestActor->FakeControllerDataSource;
    Test->TestEqual(
        TEXT("ControllerVisuals should use the `CustomTrackingData`, when it is provided."),
        Actual,
        Expected);

    TScriptInterface<IIsdkIHmdDataSource> FakeHmdDataSource = TestActor->FakeHmdDataSource;
    TestActor->PokeInteraction->BindDataSources(
        DataSources, nullptr, TestActor->GetRootComponent(), {});
    TestActor->RayInteraction->BindDataSources(
        DataSources, FakeHmdDataSource, TestActor->GetRootComponent(), {});
    TestActor->GrabInteraction->BindDataSources(
        DataSources, FakeHmdDataSource, TestActor->GetRootComponent(), {});
  }

  return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(
    FIsdkTestRigControllerSetDataSourceConnectedValue,
    bool,
    bIsConnected);

bool FIsdkTestRigControllerSetDataSourceConnectedValue::Update()
{
  AIsdkTestRigActor::Get().FakeControllerDataSource->IsConnected->SetValue(bIsConnected);

  return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(
    FIsdkTestHandVisualsInit,
    FAutomationTestBase*,
    Test);

// Test Step: Initialize the HandVisuals component with a fake TrackingDataSybsystem.
bool FIsdkTestHandVisualsInit::Update()
{
  AIsdkTestRigActor* TestActor;
  if (!AIsdkTestRigActor::TryGetChecked(TestActor))
  {
    Test->AddError("Failed to find TestActor in the scene.");
    return true;
  }

  TestActor->HandVisuals->TryAttachToParentMotionController(TestActor->LeftHandMotionController);

  Test->TestEqual(
      TEXT(
          "TryAttachToParentMotionController should be able to attach a provided motion controller component"),
      TestActor->HandVisuals->AttachedToMotionController,
      TestActor->LeftHandMotionController);

  return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(
    FIsdkTestHandVisualsCreateDataSources,
    FAutomationTestBase*,
    Test);

// Test Step: Verify that data sources created by the HandVisuals match the fake data source.
bool FIsdkTestHandVisualsCreateDataSources::Update()
{
  AIsdkTestRigActor* TestActor;
  if (!AIsdkTestRigActor::TryGetChecked(TestActor))
  {
    Test->AddError("Failed to find TestActor in the scene.");
    return true;
  }

  {
    const UIsdkHandDataSource* Actual =
        TestActor->HandVisuals->GetDataSources().DataSourceComponent;
    Test->TestNull(
        TEXT(
            "HandVisuals not have a data source set prior to calling CreateDataSourcesAsTrackedHand."),
        Actual);
  }

  TestActor->HandVisuals->CreateDataSourcesAsTrackedHand();
  const auto DataSources = TestActor->HandVisuals->GetDataSources();

  {
    const UIsdkHandDataSource* Actual = DataSources.DataSourceComponent;
    const UIsdkHandDataSource* Expected = TestActor->FakeHandDataSource;
    Test->TestEqual(
        TEXT("HandVisuals should use the `CustomTrackingData`, when it is provided."),
        Actual,
        Expected);
  }

  // Empty HMD data that isn't used during testing
  TScriptInterface<IIsdkIHmdDataSource> FakeHmdDataSource{};

  TestActor->PokeInteraction->BindDataSources(
      DataSources, nullptr, TestActor->GetRootComponent(), {});
  TestActor->RayInteraction->BindDataSources(
      DataSources, FakeHmdDataSource, TestActor->GetRootComponent(), {});
  TestActor->GrabInteraction->BindDataSources(
      DataSources, FakeHmdDataSource, TestActor->GetRootComponent(), {});

  return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(
    FIsdkTestRigHandSetDataSourceConnectedValue,
    bool,
    bIsConnected);

bool FIsdkTestRigHandSetDataSourceConnectedValue::Update()
{
  AIsdkTestRigActor::Get().FakeHandDataSource->IsConnected->SetValue(bIsConnected);
  return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_FOUR_PARAMETER(
    FIsdkTestRigHandCheckInteractorEnabledValue,
    FAutomationTestBase*,
    Test,
    bool,
    bExpectedPokeEnabled,
    bool,
    bExpectedRayEnabled,
    FString,
    TestName);

bool FIsdkTestRigHandCheckInteractorEnabledValue::Update()
{
  const AIsdkTestRigActor& Actor = AIsdkTestRigActor::Get();
  const UIsdkPokeInteractor* PokeInteractor = Actor.PokeInteraction->PokeInteractor;
  const UIsdkRayInteractor* RayInteractor = Actor.RayInteraction->RayInteractor;

  const bool bPokeIsEnabled = PokeInteractor->GetCurrentState() != EIsdkInteractorState::Disabled;
  const bool bRayIsEnabled = RayInteractor->GetCurrentState() != EIsdkInteractorState::Disabled;

  Test->TestEqual(*TestName, bPokeIsEnabled, bExpectedPokeEnabled);
  Test->TestEqual(*TestName, bRayIsEnabled, bExpectedRayEnabled);

  return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    IsdkRigHandIsConnectedTests,
    "InteractionSDK.OculusInteraction.Source.OculusInteractionEditor.Private.Tests.Rig.HandIsConnected",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool IsdkRigHandIsConnectedTests::RunTest(const FString& Parameters)
{
  isdk::test::AddInitPieTestSteps(this);

  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestSpawnComponents(this));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestHandVisualsInit(this));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestHandVisualsCreateDataSources(this));

  // Check that toggling the connected state on the tracked hand will enable/disable interactors.
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigHandSetDataSourceConnectedValue(true));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigHandCheckInteractorEnabledValue(
      this, true, true, TEXT("When DataSource is connected")));

  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigHandSetDataSourceConnectedValue(false));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigHandCheckInteractorEnabledValue(
      this, false, false, TEXT("When DataSource not connected")));

  ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);

  return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    IsdkRigInteractionGroupSelectedTests,
    "InteractionSDK.OculusInteraction.Source.OculusInteractionEditor.Private.Tests.Rig.InteractionGroupSelected",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

// Check that selecting interactors disables others accordingly
bool IsdkRigInteractionGroupSelectedTests::RunTest(const FString& Parameters)
{
  isdk::test::AddInitPieTestSteps(this);

  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestSpawnComponents(this));

  FIsdkInteractionGroupMemberBehavior Behavior1{
      .bDisableOnOtherSelect{true},
      .bDisableOnOtherNearFieldHover{false},
      .bIsNearField{false},
  };
  FIsdkInteractionGroupMemberBehavior Behavior2{
      .bDisableOnOtherSelect{false},
      .bDisableOnOtherNearFieldHover{false},
      .bIsNearField{false},
  };
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this,
      AIsdkTestRigActor::InitGroupMembersFn(
          Behavior1, Behavior2, AIsdkTestRigActor::FakeCalculateStateFn())));

  // Select #1 ; #2 should remain enabled since bDisableOnOtherSelect = false.
  using EState = EIsdkInteractorState;
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Select, EState::Normal)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Select #1"), true, true)));

  // Select #2 ; #1 should disable since bDisableOnOtherSelect = true.
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Normal, EState::Select)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Select #2"), false, true)));

  // Test deselect re-enables the conditional
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Normal, EState::Normal)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Select None"), true, true)));

  ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);

  return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    IsdkRigInteractionGroupNearFieldHoverTests,
    "InteractionSDK.OculusInteraction.Source.OculusInteractionEditor.Private.Tests.Rig.InteractionGroupNearFieldHover",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

// Check that selecting interactors disables others accordingly
bool IsdkRigInteractionGroupNearFieldHoverTests::RunTest(const FString& Parameters)
{
  isdk::test::AddInitPieTestSteps(this);

  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestSpawnComponents(this));

  // Poke-like behavior
  constexpr FIsdkInteractionGroupMemberBehavior Behavior1{
      .bDisableOnOtherSelect{true},
      .bDisableOnOtherNearFieldHover{false},
      .bIsNearField{true},
  };
  // Ray-like behavior
  constexpr FIsdkInteractionGroupMemberBehavior Behavior2{
      .bDisableOnOtherSelect{true},
      .bDisableOnOtherNearFieldHover{true},
      .bIsNearField{false},
  };
  // Grab-like behavior
  constexpr FIsdkInteractionGroupMemberBehavior Behavior3{
      .bDisableOnOtherSelect{true},
      .bDisableOnOtherNearFieldHover{true},
      .bIsNearField{true},
  };
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this,
      AIsdkTestRigActor::InitGroupMembersFn(
          Behavior1, Behavior2, Behavior3, AIsdkTestRigActor::FakeCalculateStateFn())));

  // Poke Hovers; Ray & Grab should disable
  using EState = EIsdkInteractorState;
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this,
      AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Hover, EState::Normal, EState::Normal)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Hover #1"), true, false, false)));

  // Ray Hovers; nothing should disable
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this,
      AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Normal, EState::Hover, EState::Normal)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Hover #2"), true, true, true)));

  // Grab Hovers; Ray should disable but poke remain enabled as it has
  // bDisableOnOtherNearFieldHover=false
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this,
      AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Normal, EState::Normal, EState::Hover)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Hover #3"), true, false, true)));

  ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);

  return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    IsdkRigInteractionGroupNonBlockingSelectTests,
    "InteractionSDK.OculusInteraction.Source.OculusInteractionEditor.Private.Tests.Rig.InteractionGroupNonBlockingSelect",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

// Tests blocking versus non-blocking select. A non blocking select happens when an interactor
// is in the Select state, but doesn't have a selected interactor.
bool IsdkRigInteractionGroupNonBlockingSelectTests::RunTest(const FString& Parameters)
{
  isdk::test::AddInitPieTestSteps(this);

  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestSpawnComponents(this));

  constexpr FIsdkInteractionGroupMemberBehavior Behavior{
      .bDisableOnOtherSelect{true},
      .bDisableOnOtherNearFieldHover{false},
      .bIsNearField{false},
  };

  const FIsdkInteractorGroupMember::CalculateStateFn CalculateStateFn =
      [](const FIsdkInteractorStateEvent& Event)
  {
    return FIsdkInteractionGroupMemberState{
        // FakeInteractor1 is "Blocking", FakeInteractor2 is not.
        .bIsSelectStateBlocking =
            Event.Interactor.GetObject()->GetName() == TEXT("FakeInteractor1")};
  };
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::InitGroupMembersFn(Behavior, Behavior, CalculateStateFn)));

  // When blocking selector Selects, other one should disable.
  using EState = EIsdkInteractorState;
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Select, EState::Normal)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Select #1"), true, false)));

  // When non-blocking selector Selects, nothing should disable
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Normal, EState::Select)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Select #2"), true, true)));

  ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);

  return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    IsdkRigInteractionGroupDeletedInteractorTests,
    "InteractionSDK.OculusInteraction.Source.OculusInteractionEditor.Private.Tests.Rig.InteractionGroupDeletedInteractor",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

// Tests that interactors can be removed from the interaction group, and that
// the state of the conditionals are updated correctly.
bool IsdkRigInteractionGroupDeletedInteractorTests::RunTest(const FString& Parameters)
{
  isdk::test::AddInitPieTestSteps(this);

  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestSpawnComponents(this));

  constexpr FIsdkInteractionGroupMemberBehavior Behavior{
      .bDisableOnOtherSelect{true},
      .bDisableOnOtherNearFieldHover{false},
      .bIsNearField{false},
  };

  const FIsdkInteractorGroupMember::CalculateStateFn CalculateStateFn =
      [](const FIsdkInteractorStateEvent& Event)
  {
    return FIsdkInteractionGroupMemberState{
        // FakeInteractor1 is "Blocking", FakeInteractor2 is not.
        .bIsSelectStateBlocking =
            Event.Interactor.GetObject()->GetName() == TEXT("FakeInteractor1")};
  };
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::InitGroupMembersFn(Behavior, Behavior, CalculateStateFn)));

  using EState = EIsdkInteractorState;
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::SetGroupMemberStatesFn(EState::Select, EState::Hover)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("Select #1"), true, false)));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));

  // Now delete the first interactor. Second one should now be able to hover
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this,
      [](FAutomationTestBase*, AIsdkTestRigActor& Actor)
      { Actor.InteractionGroup->RemoveInteractor(Actor.FakeInteractor1); }));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));

  // After the component was removed, its conditional should be set to false and the other
  // conditional will become true as it is no longer blocked by the select.
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this, AIsdkTestRigActor::CheckGroupMemberStatesFn(TEXT("After Delete"), {}, true)));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this,
      [](FAutomationTestBase* Test, AIsdkTestRigActor& Actor)
      {
        Test->TestEqual(
            TEXT("After Delete conditional value"),
            Actor.InteractorGroupConditional1->GetResolvedValue(),
            false);
      }));

  ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);

  return true;
}
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    IsdkRigControllerIsConnectedTests,
    "InteractionSDK.OculusInteraction.Source.OculusInteractionEditor.Private.Tests.Rig.ControllerIsConnected",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool IsdkRigControllerIsConnectedTests::RunTest(const FString& Parameters)
{
  isdk::test::AddInitPieTestSteps(this);
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestSpawnComponents(this));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestControllerVisualsInit(this));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestControllerVisualsCreateDataSources(this));

  // Check that toggling the connected state on the tracked controller will enable/disable
  // interactors.
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigControllerSetDataSourceConnectedValue(true));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigHandCheckInteractorEnabledValue(
      this, true, true, TEXT("When DataSource is connected")));

  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigControllerSetDataSourceConnectedValue(false));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigHandCheckInteractorEnabledValue(
      this, false, false, TEXT("When DataSource not connected")));

  ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);
  return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    IsdkControllerRigComponentTest,
    "InteractionSDK.OculusInteraction.Source.OculusInteractionEditor.Private.Tests.Rig.ControllerHands",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool IsdkControllerRigComponentTest::RunTest(const FString& Parameters)
{
  isdk::test::AddInitPieTestSteps(this);
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestSpawnComponents(this));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestControllerVisualsInit(this));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(isdk::test::OneFrameDelay));
  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestControllerVisualsCreateDataSources(this));

  ADD_LATENT_AUTOMATION_COMMAND(FIsdkTestRigLambda(
      this,
      [](FAutomationTestBase* Test, AIsdkTestRigActor& Actor)
      {
        UIsdkControllerRigComponent* ControllerRigComponent = Actor.ControllerRigLeft;
        if (!ControllerRigComponent)
        {
          Test->AddError("ControllerRigComponent is not found on the actor.");
          return;
        }

        ControllerRigComponent->InitializeControllerHand();
        AActor* SpawnedHandActor = ControllerRigComponent->GetSpawnedHandActor();
        Test->TestNotNull(
            "Hand actor should be spawned by InitializeControllerHand.", SpawnedHandActor);
        Test->TestTrue(
            "Spawned hand actor should be attached to the component.",
            SpawnedHandActor->GetAttachParentActor() == &Actor);

        // Test Visibility Handling
        AActor* MockControllerHand = NewObject<AActor>(&Actor);
        ControllerRigComponent->SetSpawnedHandActor(MockControllerHand);
        TArray<EControllerHandVisibilityMode> VisibilityModes = {
            EControllerHandVisibilityMode::Both,
            EControllerHandVisibilityMode::ControllerOnly,
            EControllerHandVisibilityMode::HandsOnly};
        for (EControllerHandVisibilityMode Mode : VisibilityModes)
        {
          ControllerRigComponent->SetVisibilityMode(Mode);

          switch (Mode)
          {
            case EControllerHandVisibilityMode::Both:
              Test->TestFalse(
                  "ControllerHand should be visible in Both mode.", MockControllerHand->IsHidden());
              break;
            case EControllerHandVisibilityMode::ControllerOnly:
              Test->TestTrue(
                  "ControllerHand should be hidden in ControllerOnly mode.",
                  MockControllerHand->IsHidden());
              break;
            case EControllerHandVisibilityMode::HandsOnly:
              Test->TestFalse(
                  "ControllerHand should be visible in HandsOnly mode.",
                  MockControllerHand->IsHidden());
              break;
          }
        }
      }));

  ADD_LATENT_AUTOMATION_COMMAND(FEndPlayMapCommand);
  return true;
}
