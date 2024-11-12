// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitAnchor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInterface;
enum class EMRUKSpawnerScalingMode : uint8;
struct FMRUKHit;
struct FMRUKLabelFilter;
struct FMRUKPlaneUV;
struct FRandomStream;
#ifdef MRUTILITYKIT_MRUtilityKitAnchor_generated_h
#error "MRUtilityKitAnchor.generated.h already included, missing '#pragma once' in MRUtilityKitAnchor.h"
#endif
#define MRUTILITYKIT_MRUtilityKitAnchor_generated_h

#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_SPARSE_DATA
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnInterior); \
	DECLARE_FUNCTION(execGetFacingDirection); \
	DECLARE_FUNCTION(execIsPositionInVolumeBounds); \
	DECLARE_FUNCTION(execGetClosestSurfacePosition); \
	DECLARE_FUNCTION(execPassesLabelFilter); \
	DECLARE_FUNCTION(execHasAnyLabel); \
	DECLARE_FUNCTION(execHasLabel); \
	DECLARE_FUNCTION(execAttachProceduralMesh); \
	DECLARE_FUNCTION(execRaycastAll); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execGenerateRandomPositionOnPlaneFromStream); \
	DECLARE_FUNCTION(execGenerateRandomPositionOnPlane); \
	DECLARE_FUNCTION(execIsPositionInBoundary);


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_ACCESSORS
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKAnchor(); \
	friend struct Z_Construct_UClass_AMRUKAnchor_Statics; \
public: \
	DECLARE_CLASS(AMRUKAnchor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), NO_API) \
	DECLARE_SERIALIZER(AMRUKAnchor)


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRUKAnchor(AMRUKAnchor&&); \
	NO_API AMRUKAnchor(const AMRUKAnchor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRUKAnchor) \
	NO_API virtual ~AMRUKAnchor();


#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_21_PROLOG
#define FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_SPARSE_DATA \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_ACCESSORS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_INCLASS_NO_PURE_DECLS \
	FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRUTILITYKIT_API UClass* StaticClass<class AMRUKAnchor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
