// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMRUKAnchor;
class AMRUKRoom;
#ifdef MRUTILITYKITEDITOR_TestHelper_generated_h
#error "TestHelper.generated.h already included, missing '#pragma once' in TestHelper.h"
#endif
#define MRUTILITYKITEDITOR_TestHelper_generated_h

#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_SPARSE_DATA
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRoomRemoved); \
	DECLARE_FUNCTION(execOnRoomUpdated); \
	DECLARE_FUNCTION(execOnRoomCreated); \
	DECLARE_FUNCTION(execOnAnchorRemoved); \
	DECLARE_FUNCTION(execOnAnchorUpdated); \
	DECLARE_FUNCTION(execOnAnchorCreated);


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomAndAnchorObserver(); \
	friend struct Z_Construct_UClass_URoomAndAnchorObserver_Statics; \
public: \
	DECLARE_CLASS(URoomAndAnchorObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKitEditor"), NO_API) \
	DECLARE_SERIALIZER(URoomAndAnchorObserver)


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoomAndAnchorObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoomAndAnchorObserver(URoomAndAnchorObserver&&); \
	NO_API URoomAndAnchorObserver(const URoomAndAnchorObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomAndAnchorObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomAndAnchorObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomAndAnchorObserver) \
	NO_API virtual ~URoomAndAnchorObserver();


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_15_PROLOG
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_SPARSE_DATA \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_INCLASS_NO_PURE_DECLS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRUTILITYKITEDITOR_API UClass* StaticClass<class URoomAndAnchorObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_TestHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
