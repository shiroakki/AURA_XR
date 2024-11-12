// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitSubsystem.h"
#include "../../../../../Plugins/Marketplace/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "MRUtilityKit/Public/MRUtilityKit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSceneData_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSubsystem();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSubsystem_NoRegister();
	MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics
	{
		struct MRUKSubsystem_eventOnLoaded_Parms
		{
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventOnLoaded_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventOnLoaded_Parms), &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::MRUKSubsystem_eventOnLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::MRUKSubsystem_eventOnLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMRUKSubsystem::FOnLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnLoaded, bool Success)
{
	struct MRUKSubsystem_eventOnLoaded_Parms
	{
		bool Success;
	};
	MRUKSubsystem_eventOnLoaded_Parms Parms;
	Parms.Success=Success ? true : false;
	OnLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics
	{
		struct MRUKSubsystem_eventOnCaptureComplete_Parms
		{
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventOnCaptureComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventOnCaptureComplete_Parms), &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnCaptureComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::MRUKSubsystem_eventOnCaptureComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::MRUKSubsystem_eventOnCaptureComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMRUKSubsystem::FOnCaptureComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureComplete, bool Success)
{
	struct MRUKSubsystem_eventOnCaptureComplete_Parms
	{
		bool Success;
	};
	MRUKSubsystem_eventOnCaptureComplete_Parms Parms;
	Parms.Success=Success ? true : false;
	OnCaptureComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics
	{
		struct MRUKSubsystem_eventOnRoomCreated_Parms
		{
			AMRUKRoom* Room;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnRoomCreated_Parms, Room), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnRoomCreated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::MRUKSubsystem_eventOnRoomCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::MRUKSubsystem_eventOnRoomCreated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMRUKSubsystem::FOnRoomCreated_DelegateWrapper(const FMulticastScriptDelegate& OnRoomCreated, AMRUKRoom* Room)
{
	struct MRUKSubsystem_eventOnRoomCreated_Parms
	{
		AMRUKRoom* Room;
	};
	MRUKSubsystem_eventOnRoomCreated_Parms Parms;
	Parms.Room=Room;
	OnRoomCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics
	{
		struct MRUKSubsystem_eventOnRoomUpdated_Parms
		{
			AMRUKRoom* Room;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnRoomUpdated_Parms, Room), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnRoomUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::MRUKSubsystem_eventOnRoomUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::MRUKSubsystem_eventOnRoomUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMRUKSubsystem::FOnRoomUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnRoomUpdated, AMRUKRoom* Room)
{
	struct MRUKSubsystem_eventOnRoomUpdated_Parms
	{
		AMRUKRoom* Room;
	};
	MRUKSubsystem_eventOnRoomUpdated_Parms Parms;
	Parms.Room=Room;
	OnRoomUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics
	{
		struct MRUKSubsystem_eventOnRoomRemoved_Parms
		{
			AMRUKRoom* Room;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventOnRoomRemoved_Parms, Room), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "OnRoomRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::MRUKSubsystem_eventOnRoomRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::MRUKSubsystem_eventOnRoomRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMRUKSubsystem::FOnRoomRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnRoomRemoved, AMRUKRoom* Room)
{
	struct MRUKSubsystem_eventOnRoomRemoved_Parms
	{
		AMRUKRoom* Room;
	};
	MRUKSubsystem_eventOnRoomRemoved_Parms Parms;
	Parms.Room=Room;
	OnRoomRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMRUKSubsystem::execSceneCaptureComplete)
	{
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_RequestId);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SceneCaptureComplete(Z_Param_RequestId,Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execUpdatedSceneDataLoadedComplete)
	{
		P_GET_UBOOL(Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatedSceneDataLoadedComplete(Z_Param_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execSceneDataLoadedComplete)
	{
		P_GET_UBOOL(Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SceneDataLoadedComplete(Z_Param_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execLaunchSceneCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LaunchSceneCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execSpawnInteriorFromStream)
	{
		P_GET_TMAP_REF(FString,FMRUKSpawnGroup,Z_Param_Out_SpawnGroups);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
		P_GET_UBOOL(Z_Param_ShouldFallbackToProcedural);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnInteriorFromStream(Z_Param_Out_SpawnGroups,Z_Param_Out_RandomStream,Z_Param_ProceduralMaterial,Z_Param_ShouldFallbackToProcedural);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execSpawnInterior)
	{
		P_GET_TMAP_REF(FString,FMRUKSpawnGroup,Z_Param_Out_SpawnGroups);
		P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
		P_GET_UBOOL(Z_Param_ShouldFallbackToProcedural);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnInterior(Z_Param_Out_SpawnGroups,Z_Param_ProceduralMaterial,Z_Param_ShouldFallbackToProcedural);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execIsPositionInSceneVolume)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_UBOOL(Z_Param_TestVerticalBounds);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->IsPositionInSceneVolume(Z_Param_Out_WorldPosition,Z_Param_TestVerticalBounds,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execTryGetClosestSurfacePosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSurfacePosition);
		P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->TryGetClosestSurfacePosition(Z_Param_Out_WorldPosition,Z_Param_Out_OutSurfacePosition,Z_Param_Out_LabelFilter,Z_Param_MaxDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execClearScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execLoadSceneFromDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxQueries);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSceneFromDevice(Z_Param_MaxQueries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execLoadSceneFromJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSceneFromJsonString(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execSaveSceneToJsonString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SaveSceneToJsonString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execGetCurrentRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKRoom**)Z_Param__Result=P_THIS->GetCurrentRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execRaycastAll)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDist);
		P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
		P_GET_TARRAY_REF(FMRUKHit,Z_Param_Out_OutHits);
		P_GET_TARRAY_REF(AMRUKAnchor*,Z_Param_Out_OutAnchors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RaycastAll(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutHits,Z_Param_Out_OutAnchors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKSubsystem::execRaycast)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDist);
		P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
		P_GET_STRUCT_REF(FMRUKHit,Z_Param_Out_OutHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutHit);
		P_NATIVE_END;
	}
	void UMRUKSubsystem::StaticRegisterNativesUMRUKSubsystem()
	{
		UClass* Class = UMRUKSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearScene", &UMRUKSubsystem::execClearScene },
			{ "GetCurrentRoom", &UMRUKSubsystem::execGetCurrentRoom },
			{ "IsPositionInSceneVolume", &UMRUKSubsystem::execIsPositionInSceneVolume },
			{ "LaunchSceneCapture", &UMRUKSubsystem::execLaunchSceneCapture },
			{ "LoadSceneFromDevice", &UMRUKSubsystem::execLoadSceneFromDevice },
			{ "LoadSceneFromJsonString", &UMRUKSubsystem::execLoadSceneFromJsonString },
			{ "Raycast", &UMRUKSubsystem::execRaycast },
			{ "RaycastAll", &UMRUKSubsystem::execRaycastAll },
			{ "SaveSceneToJsonString", &UMRUKSubsystem::execSaveSceneToJsonString },
			{ "SceneCaptureComplete", &UMRUKSubsystem::execSceneCaptureComplete },
			{ "SceneDataLoadedComplete", &UMRUKSubsystem::execSceneDataLoadedComplete },
			{ "SpawnInterior", &UMRUKSubsystem::execSpawnInterior },
			{ "SpawnInteriorFromStream", &UMRUKSubsystem::execSpawnInteriorFromStream },
			{ "TryGetClosestSurfacePosition", &UMRUKSubsystem::execTryGetClosestSurfacePosition },
			{ "UpdatedSceneDataLoadedComplete", &UMRUKSubsystem::execUpdatedSceneDataLoadedComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_ClearScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_ClearScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Removes and clears every room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Removes and clears every room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_ClearScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "ClearScene", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_ClearScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_ClearScene_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_ClearScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_ClearScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics
	{
		struct MRUKSubsystem_eventGetCurrentRoom_Parms
		{
			AMRUKRoom* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventGetCurrentRoom_Parms, ReturnValue), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Return the room that the user is currently in. (NOTE: This is not yet fully implemented and only returns the first room).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Return the room that the user is currently in. (NOTE: This is not yet fully implemented and only returns the first room)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "GetCurrentRoom", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::MRUKSubsystem_eventGetCurrentRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::MRUKSubsystem_eventGetCurrentRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics
	{
		struct MRUKSubsystem_eventIsPositionInSceneVolume_Parms
		{
			FVector WorldPosition;
			bool TestVerticalBounds;
			double Tolerance;
			AMRUKAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static void NewProp_TestVerticalBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TestVerticalBounds;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventIsPositionInSceneVolume_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_WorldPosition_MetaData), Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_WorldPosition_MetaData) };
	void Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_TestVerticalBounds_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventIsPositionInSceneVolume_Parms*)Obj)->TestVerticalBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_TestVerticalBounds = { "TestVerticalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventIsPositionInSceneVolume_Parms), &Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_TestVerticalBounds_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventIsPositionInSceneVolume_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventIsPositionInSceneVolume_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_TestVerticalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Checks if the given position is on or inside of any scene volume in the rooms.\n\x09 * All rooms will be checked and the first anchors scene volume that has the point on or inside it will be returned.\n\x09 * @param WorldPosition      The position in world space to check\n\x09 * @param TestVerticalBounds Whether the vertical bounds should be checked or not\n\x09 * @param Tolerance          Tolerance\n\x09 * @return\x09\x09\x09\x09\x09 The anchor the WorldPosition is in. A null pointer otherwise.\n\x09 */" },
		{ "CPP_Default_TestVerticalBounds", "true" },
		{ "CPP_Default_Tolerance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Checks if the given position is on or inside of any scene volume in the rooms.\nAll rooms will be checked and the first anchors scene volume that has the point on or inside it will be returned.\n@param WorldPosition      The position in world space to check\n@param TestVerticalBounds Whether the vertical bounds should be checked or not\n@param Tolerance          Tolerance\n@return                                       The anchor the WorldPosition is in. A null pointer otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "IsPositionInSceneVolume", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::MRUKSubsystem_eventIsPositionInSceneVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::MRUKSubsystem_eventIsPositionInSceneVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics
	{
		struct MRUKSubsystem_eventLaunchSceneCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventLaunchSceneCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventLaunchSceneCapture_Parms), &Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Launch the scene capture. After a successful capture the scene should be updated.\n\x09 * @return Whether the capture was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Launch the scene capture. After a successful capture the scene should be updated.\n@return Whether the capture was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "LaunchSceneCapture", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::MRUKSubsystem_eventLaunchSceneCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::MRUKSubsystem_eventLaunchSceneCapture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics
	{
		struct MRUKSubsystem_eventLoadSceneFromDevice_Parms
		{
			int32 MaxQueries;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxQueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::NewProp_MaxQueries = { "MaxQueries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventLoadSceneFromDevice_Parms, MaxQueries), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::NewProp_MaxQueries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load rooms and anchors from the device.\n\x09 * If the scene is already loaded the scene will be updated with the changes.\n\x09 */" },
		{ "CPP_Default_MaxQueries", "64" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Load rooms and anchors from the device.\nIf the scene is already loaded the scene will be updated with the changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "LoadSceneFromDevice", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::MRUKSubsystem_eventLoadSceneFromDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::MRUKSubsystem_eventLoadSceneFromDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics
	{
		struct MRUKSubsystem_eventLoadSceneFromJsonString_Parms
		{
			FString String;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventLoadSceneFromJsonString_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::NewProp_String_MetaData), Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::NewProp_String_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load rooms and anchors from a JSON representation.\n\x09 * If the scene is already loaded the scene will be updated with the changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Load rooms and anchors from a JSON representation.\nIf the scene is already loaded the scene will be updated with the changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "LoadSceneFromJsonString", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::MRUKSubsystem_eventLoadSceneFromJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::MRUKSubsystem_eventLoadSceneFromJsonString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics
	{
		struct MRUKSubsystem_eventRaycast_Parms
		{
			FVector Origin;
			FVector Direction;
			float MaxDist;
			FMRUKLabelFilter LabelFilter;
			FMRUKHit OutHit;
			AMRUKAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Origin_MetaData), Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Origin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_LabelFilter_MetaData), Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_LabelFilter_MetaData) }; // 1424266031
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, OutHit), Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // 1662470029
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycast_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_MaxDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_LabelFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_OutHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Cast a ray and return the closest hit anchor in the scene.\n\x09 * @param Origin      Origin The origin of the ray.\n\x09 * @param Direction   Direction The direction of the ray.\n\x09 * @param MaxDist     The maximum distance the ray should travel.\n\x09 * @param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutHit      The closest hit.\n\x09 * @return            The anchor that the ray hit\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Cast a ray and return the closest hit anchor in the scene.\n@param Origin      Origin The origin of the ray.\n@param Direction   Direction The direction of the ray.\n@param MaxDist     The maximum distance the ray should travel.\n@param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n@param OutHit      The closest hit.\n@return            The anchor that the ray hit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "Raycast", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::MRUKSubsystem_eventRaycast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::MRUKSubsystem_eventRaycast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_Raycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_Raycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics
	{
		struct MRUKSubsystem_eventRaycastAll_Parms
		{
			FVector Origin;
			FVector Direction;
			float MaxDist;
			FMRUKLabelFilter LabelFilter;
			TArray<FMRUKHit> OutHits;
			TArray<AMRUKAnchor*> OutAnchors;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAnchors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnchors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Origin_MetaData), Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Origin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_LabelFilter_MetaData), Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_LabelFilter_MetaData) }; // 1424266031
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // 1662470029
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1662470029
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_OutAnchors_Inner = { "OutAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_OutAnchors = { "OutAnchors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventRaycastAll_Parms, OutAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventRaycastAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventRaycastAll_Parms), &Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_MaxDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_LabelFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_OutHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_OutHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_OutAnchors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_OutAnchors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Cast a ray and collect hits against the volumes and plane bounds in every room in the scene.\n     * The order of the hits in the array is not specified.\n\x09 * @param Origin      Origin The origin of the ray.\n\x09 * @param Direction   Direction The direction of the ray.\n\x09 * @param MaxDist     The maximum distance the ray should travel.\n\x09 * @param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutHits     The hits the ray collected.\n\x09 * @param OutAnchors  The anchors that were hit. Each anchor in this array corresponds to a entry at the same position in OutHits.\n\x09 * @return            Whether the ray hit anything\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Cast a ray and collect hits against the volumes and plane bounds in every room in the scene.\nThe order of the hits in the array is not specified.\n@param Origin      Origin The origin of the ray.\n@param Direction   Direction The direction of the ray.\n@param MaxDist     The maximum distance the ray should travel.\n@param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n@param OutHits     The hits the ray collected.\n@param OutAnchors  The anchors that were hit. Each anchor in this array corresponds to a entry at the same position in OutHits.\n@return            Whether the ray hit anything" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "RaycastAll", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::MRUKSubsystem_eventRaycastAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::MRUKSubsystem_eventRaycastAll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_RaycastAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_RaycastAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics
	{
		struct MRUKSubsystem_eventSaveSceneToJsonString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSaveSceneToJsonString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Save all rooms and anchors to JSON. This JSON representation can than later be used by\n\x09 * LoadSceneFromJsonString() to load the scene again.\n\x09 * @return the JSON string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Save all rooms and anchors to JSON. This JSON representation can than later be used by\nLoadSceneFromJsonString() to load the scene again.\n@return the JSON string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "SaveSceneToJsonString", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::MRUKSubsystem_eventSaveSceneToJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::MRUKSubsystem_eventSaveSceneToJsonString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics
	{
		struct MRUKSubsystem_eventSceneCaptureComplete_Parms
		{
			FOculusXRUInt64 RequestId;
			bool bSuccess;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestId;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSceneCaptureComplete_Parms, RequestId), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
	void Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventSceneCaptureComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventSceneCaptureComplete_Parms), &Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::NewProp_RequestId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "SceneCaptureComplete", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::MRUKSubsystem_eventSceneCaptureComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::MRUKSubsystem_eventSceneCaptureComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics
	{
		struct MRUKSubsystem_eventSceneDataLoadedComplete_Parms
		{
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventSceneDataLoadedComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventSceneDataLoadedComplete_Parms), &Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~FTickableGameObject interface\n" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "~FTickableGameObject interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "SceneDataLoadedComplete", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::MRUKSubsystem_eventSceneDataLoadedComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::MRUKSubsystem_eventSceneDataLoadedComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics
	{
		struct MRUKSubsystem_eventSpawnInterior_Parms
		{
			TMap<FString,FMRUKSpawnGroup> SpawnGroups;
			UMaterialInterface* ProceduralMaterial;
			bool ShouldFallbackToProcedural;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnGroups_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpawnGroups_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroups_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnGroups;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
		static void NewProp_ShouldFallbackToProcedural_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFallbackToProcedural;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 2822779831
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInterior_Parms, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups_MetaData), Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups_MetaData) }; // 2822779831
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInterior_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventSpawnInterior_Parms*)Obj)->ShouldFallbackToProcedural = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventSpawnInterior_Parms), &Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInterior_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_SpawnGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ProceduralMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ShouldFallbackToProcedural,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawn meshes on the position of the anchors of each room.\n\x09 * The actors should have Z as up Y as right and X as forward.\n\x09 * The pivot point should be in the bottom center.\n\x09 * @param SpawnGroups                A map wich tells to spawn which actor to a given label.\n\x09 * @param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n\x09 * @param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n\x09 * @return                           The spawned actors.\n\x09 */" },
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "CPP_Default_ShouldFallbackToProcedural", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Spawn meshes on the position of the anchors of each room.\nThe actors should have Z as up Y as right and X as forward.\nThe pivot point should be in the bottom center.\n@param SpawnGroups                A map wich tells to spawn which actor to a given label.\n@param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n@param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n@return                           The spawned actors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "SpawnInterior", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::MRUKSubsystem_eventSpawnInterior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::MRUKSubsystem_eventSpawnInterior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics
	{
		struct MRUKSubsystem_eventSpawnInteriorFromStream_Parms
		{
			TMap<FString,FMRUKSpawnGroup> SpawnGroups;
			FRandomStream RandomStream;
			UMaterialInterface* ProceduralMaterial;
			bool ShouldFallbackToProcedural;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnGroups_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpawnGroups_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroups_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
		static void NewProp_ShouldFallbackToProcedural_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFallbackToProcedural;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 2822779831
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_MetaData), Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_MetaData) }; // 2822779831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_RandomStream_MetaData), Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_RandomStream_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventSpawnInteriorFromStream_Parms*)Obj)->ShouldFallbackToProcedural = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventSpawnInteriorFromStream_Parms), &Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventSpawnInteriorFromStream_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ProceduralMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ShouldFallbackToProcedural,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawn meshes on the position of the anchors of each room from a random stream.\n\x09 * The actors should have Z as up Y as right and X as forward.\n\x09 * The pivot point should be in the bottom center.\n\x09 * @param SpawnGroups                A map wich tells to spawn which actor to a given label.\n\x09 * @param RandomStream               A random generator to choose randomly between actor classes if there a multiple for one label.\n\x09 * @param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n\x09 * @param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n\x09 * @return                           The spawned actors.\n\x09 */" },
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "CPP_Default_ShouldFallbackToProcedural", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Spawn meshes on the position of the anchors of each room from a random stream.\nThe actors should have Z as up Y as right and X as forward.\nThe pivot point should be in the bottom center.\n@param SpawnGroups                A map wich tells to spawn which actor to a given label.\n@param RandomStream               A random generator to choose randomly between actor classes if there a multiple for one label.\n@param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n@param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n@return                           The spawned actors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "SpawnInteriorFromStream", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::MRUKSubsystem_eventSpawnInteriorFromStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::MRUKSubsystem_eventSpawnInteriorFromStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics
	{
		struct MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms
		{
			FVector WorldPosition;
			FVector OutSurfacePosition;
			FMRUKLabelFilter LabelFilter;
			double MaxDistance;
			AMRUKAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSurfacePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition_MetaData), Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_OutSurfacePosition = { "OutSurfacePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, OutSurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter_MetaData), Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter_MetaData) }; // 1424266031
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_OutSurfacePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 *  Get the position on the surface that is closest to the given position with respect to the distance in all rooms.\n\x09 *  @param WorldPosition      The position in world space from which the closest surface point should be found.\n\x09 *  @param OutSurfacePosition The closest position on the closest surface if any. Otherwise zero.\n\x09 *  @param LabelFilter        The label filter can be used to include/exclude certain labels from the search.\n\x09 *  @param MaxDistance        The distance to which a closest surface position should be searched. Everything below or equal to zero will be treated as infinity.\n\x09 *  @return                   The Anchor on which the closest surface position was found or a null pointer otherwise.\n\x09 */" },
		{ "CPP_Default_MaxDistance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Get the position on the surface that is closest to the given position with respect to the distance in all rooms.\n@param WorldPosition      The position in world space from which the closest surface point should be found.\n@param OutSurfacePosition The closest position on the closest surface if any. Otherwise zero.\n@param LabelFilter        The label filter can be used to include/exclude certain labels from the search.\n@param MaxDistance        The distance to which a closest surface position should be searched. Everything below or equal to zero will be treated as infinity.\n@return                   The Anchor on which the closest surface position was found or a null pointer otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "TryGetClosestSurfacePosition", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::MRUKSubsystem_eventTryGetClosestSurfacePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics
	{
		struct MRUKSubsystem_eventUpdatedSceneDataLoadedComplete_Parms
		{
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSubsystem_eventUpdatedSceneDataLoadedComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSubsystem_eventUpdatedSceneDataLoadedComplete_Parms), &Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSubsystem, nullptr, "UpdatedSceneDataLoadedComplete", nullptr, nullptr, Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::MRUKSubsystem_eventUpdatedSceneDataLoadedComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::MRUKSubsystem_eventUpdatedSceneDataLoadedComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKSubsystem);
	UClass* Z_Construct_UClass_UMRUKSubsystem_NoRegister()
	{
		return UMRUKSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SceneLoadStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneLoadStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneLoadStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSceneLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCaptureComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureComplete;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Rooms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableWorldLock_MetaData[];
#endif
		static void NewProp_EnableWorldLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableWorldLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRUKSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKSubsystem_ClearScene, "ClearScene" }, // 2825997921
		{ &Z_Construct_UFunction_UMRUKSubsystem_GetCurrentRoom, "GetCurrentRoom" }, // 2692218090
		{ &Z_Construct_UFunction_UMRUKSubsystem_IsPositionInSceneVolume, "IsPositionInSceneVolume" }, // 3310838299
		{ &Z_Construct_UFunction_UMRUKSubsystem_LaunchSceneCapture, "LaunchSceneCapture" }, // 2958823815
		{ &Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromDevice, "LoadSceneFromDevice" }, // 3710070820
		{ &Z_Construct_UFunction_UMRUKSubsystem_LoadSceneFromJsonString, "LoadSceneFromJsonString" }, // 2939312199
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature, "OnCaptureComplete__DelegateSignature" }, // 482297259
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature, "OnLoaded__DelegateSignature" }, // 3486886064
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature, "OnRoomCreated__DelegateSignature" }, // 3552904370
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature, "OnRoomRemoved__DelegateSignature" }, // 4056280333
		{ &Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature, "OnRoomUpdated__DelegateSignature" }, // 3582209943
		{ &Z_Construct_UFunction_UMRUKSubsystem_Raycast, "Raycast" }, // 2682610765
		{ &Z_Construct_UFunction_UMRUKSubsystem_RaycastAll, "RaycastAll" }, // 252990577
		{ &Z_Construct_UFunction_UMRUKSubsystem_SaveSceneToJsonString, "SaveSceneToJsonString" }, // 998604562
		{ &Z_Construct_UFunction_UMRUKSubsystem_SceneCaptureComplete, "SceneCaptureComplete" }, // 3003437298
		{ &Z_Construct_UFunction_UMRUKSubsystem_SceneDataLoadedComplete, "SceneDataLoadedComplete" }, // 2353628596
		{ &Z_Construct_UFunction_UMRUKSubsystem_SpawnInterior, "SpawnInterior" }, // 432942739
		{ &Z_Construct_UFunction_UMRUKSubsystem_SpawnInteriorFromStream, "SpawnInteriorFromStream" }, // 163264169
		{ &Z_Construct_UFunction_UMRUKSubsystem_TryGetClosestSurfacePosition, "TryGetClosestSurfacePosition" }, // 4133921419
		{ &Z_Construct_UFunction_UMRUKSubsystem_UpdatedSceneDataLoadedComplete, "UpdatedSceneDataLoadedComplete" }, // 2484078754
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * The scene toolkit subsystem allows to load and access the scene data.\n */" },
		{ "IncludePath", "MRUtilityKitSubsystem.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "The scene toolkit subsystem allows to load and access the scene data." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneLoadStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneLoadStatus_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The status of the scene loading. When loading from device this is an asynchronous process\n\x09 * so will be in the Busy state until it moves to Complete or Failed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "The status of the scene loading. When loading from device this is an asynchronous process\nso will be in the Busy state until it moves to Complete or Failed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneLoadStatus = { "SceneLoadStatus", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, SceneLoadStatus), Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneLoadStatus_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneLoadStatus_MetaData) }; // 320048577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnSceneLoaded_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that will trigger when a scene is loaded either from Device or from JSON.\n\x09 * The Success parameter indicates whether the scene was loaded successfully or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that will trigger when a scene is loaded either from Device or from JSON.\nThe Success parameter indicates whether the scene was loaded successfully or not." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnSceneLoaded = { "OnSceneLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnSceneLoaded), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnSceneLoaded_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnSceneLoaded_MetaData) }; // 3486886064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomCreated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired after a room has been created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired after a room has been created." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomCreated = { "OnRoomCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnRoomCreated), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomCreated_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomCreated_MetaData) }; // 3552904370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomUpdated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired after a room has been updated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired after a room has been updated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomUpdated = { "OnRoomUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnRoomUpdated), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomUpdated_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomUpdated_MetaData) }; // 3582209943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomRemoved_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that gets fired when a room gets removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that gets fired when a room gets removed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomRemoved = { "OnRoomRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnRoomRemoved), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnRoomRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomRemoved_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomRemoved_MetaData) }; // 4056280333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnCaptureComplete_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * An event that will trigger when the capture flow completed.\n\x09 * The Success parameter indicates whether the scene was captured successfully or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "An event that will trigger when the capture flow completed.\nThe Success parameter indicates whether the scene was captured successfully or not." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnCaptureComplete = { "OnCaptureComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, OnCaptureComplete), Z_Construct_UDelegateFunction_UMRUKSubsystem_OnCaptureComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnCaptureComplete_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnCaptureComplete_MetaData) }; // 482297259
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_Rooms_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Contains a list of rooms that are tracked by the scene toolkit subsystem.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "Contains a list of rooms that are tracked by the scene toolkit subsystem." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0014000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_Rooms_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_Rooms_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_EnableWorldLock_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * When world locking is enabled the position of the VR Pawn will be adjusted each frame to ensure\n\x09 * the room anchors are where they should be relative to the camera position. This is necessary to\n\x09 * ensure the position of the virtual objects in the world do not get out of sync with the real world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
		{ "ToolTip", "When world locking is enabled the position of the VR Pawn will be adjusted each frame to ensure\nthe room anchors are where they should be relative to the camera position. This is necessary to\nensure the position of the virtual objects in the world do not get out of sync with the real world." },
	};
#endif
	void Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_EnableWorldLock_SetBit(void* Obj)
	{
		((UMRUKSubsystem*)Obj)->EnableWorldLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_EnableWorldLock = { "EnableWorldLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRUKSubsystem), &Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_EnableWorldLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_EnableWorldLock_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_EnableWorldLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneData = { "SceneData", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSubsystem, SceneData), Z_Construct_UClass_UMRUKSceneData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneData_MetaData), Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneLoadStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneLoadStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnSceneLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnRoomRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_OnCaptureComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_Rooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_Rooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_EnableWorldLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSubsystem_Statics::NewProp_SceneData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKSubsystem_Statics::ClassParams = {
		&UMRUKSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRUKSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMRUKSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMRUKSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKSubsystem.OuterSingleton, Z_Construct_UClass_UMRUKSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKSubsystem.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKSubsystem>()
	{
		return UMRUKSubsystem::StaticClass();
	}
	UMRUKSubsystem::UMRUKSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKSubsystem);
	UMRUKSubsystem::~UMRUKSubsystem() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKSubsystem, UMRUKSubsystem::StaticClass, TEXT("UMRUKSubsystem"), &Z_Registration_Info_UClass_UMRUKSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKSubsystem), 726711524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_2076949600(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
