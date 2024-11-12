// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitRoom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FMRUKSpawnGroup;
class AActor;
class AMRUKAnchor;
class UMaterialInterface;
enum class EMRUKPositioningMethod : uint8;
struct FMRUKAnchorWithPlaneUVs;
struct FMRUKHit;
struct FMRUKLabelFilter;
struct FMRUKTexCoordModes;
struct FRandomStream;
#ifdef MRUTILITYKIT_MRUtilityKitRoom_generated_h
#error "MRUtilityKitRoom.generated.h already included, missing '#pragma once' in MRUtilityKitRoom.h"
#endif
#define MRUTILITYKIT_MRUtilityKitRoom_generated_h

#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics; \
	MRUTILITYKIT_API static class UScriptStruct* StaticStruct();


template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<struct FMRUKAnchorWithPlaneUVs>();

#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_62_DELEGATE \
static void FOnAnchorUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorUpdated, AMRUKAnchor* Anchor);


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_63_DELEGATE \
static void FOnAnchorCreated_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorCreated, AMRUKAnchor* Anchor);


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_64_DELEGATE \
static void FOnAnchorRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorRemoved, AMRUKAnchor* Anchor);


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_SPARSE_DATA
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAnchorToRoom); \
	DECLARE_FUNCTION(execLoadGlobalMeshFromJsonString); \
	DECLARE_FUNCTION(execLoadGlobalMeshFromDevice); \
	DECLARE_FUNCTION(execComputeWallMeshUVAdjustments); \
	DECLARE_FUNCTION(execIsWallAnchor); \
	DECLARE_FUNCTION(execSpawnInteriorFromStream); \
	DECLARE_FUNCTION(execSpawnInterior); \
	DECLARE_FUNCTION(execAttachProceduralMeshToWalls); \
	DECLARE_FUNCTION(execGetLargestSurface); \
	DECLARE_FUNCTION(execGetKeyWall); \
	DECLARE_FUNCTION(execGetBestPoseFromRaycast); \
	DECLARE_FUNCTION(execGetFirstAnchorByLabel); \
	DECLARE_FUNCTION(execGetAnchorsByLabel); \
	DECLARE_FUNCTION(execTryGetClosestSeatPose); \
	DECLARE_FUNCTION(execIsPositionInSceneVolume); \
	DECLARE_FUNCTION(execTryGetClosestSurfacePosition); \
	DECLARE_FUNCTION(execDoesRoomHave); \
	DECLARE_FUNCTION(execClearRoom); \
	DECLARE_FUNCTION(execRaycastAll); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execGenerateRandomPositionInRoomFromStream); \
	DECLARE_FUNCTION(execGenerateRandomPositionInRoom); \
	DECLARE_FUNCTION(execIsPositionInRoom);


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKRoom(); \
	friend struct Z_Construct_UClass_AMRUKRoom_Statics; \
public: \
	DECLARE_CLASS(AMRUKRoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), NO_API) \
	DECLARE_SERIALIZER(AMRUKRoom)


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRUKRoom(AMRUKRoom&&); \
	NO_API AMRUKRoom(const AMRUKRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRUKRoom) \
	NO_API virtual ~AMRUKRoom();


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_56_PROLOG
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_SPARSE_DATA \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_INCLASS_NO_PURE_DECLS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRUTILITYKIT_API UClass* StaticClass<class AMRUKRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h


#define FOREACH_ENUM_EMRUKPOSITIONINGMETHOD(op) \
	op(EMRUKPositioningMethod::Center) \
	op(EMRUKPositioningMethod::Edge) \
	op(EMRUKPositioningMethod::Default) 

enum class EMRUKPositioningMethod : uint8;
template<> struct TIsUEnumClass<EMRUKPositioningMethod> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKPositioningMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
