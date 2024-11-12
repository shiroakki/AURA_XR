// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitBPLibrary.h"
#include "../../../../../Plugins/Marketplace/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBPLibrary();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBPLibrary_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromDevice();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKLoadFromDevice, nullptr, "MRUKLoaded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMRUKLoadFromDevice::FMRUKLoaded_DelegateWrapper(const FMulticastScriptDelegate& MRUKLoaded)
{
	MRUKLoaded.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UMRUKLoadFromDevice::execOnSceneLoaded)
	{
		P_GET_UBOOL(Z_Param_Succeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSceneLoaded(Z_Param_Succeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKLoadFromDevice::execLoadSceneFromDeviceAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMRUKLoadFromDevice**)Z_Param__Result=UMRUKLoadFromDevice::LoadSceneFromDeviceAsync(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	void UMRUKLoadFromDevice::StaticRegisterNativesUMRUKLoadFromDevice()
	{
		UClass* Class = UMRUKLoadFromDevice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadSceneFromDeviceAsync", &UMRUKLoadFromDevice::execLoadSceneFromDeviceAsync },
			{ "OnSceneLoaded", &UMRUKLoadFromDevice::execOnSceneLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics
	{
		struct MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms
		{
			const UObject* WorldContext;
			UMRUKLoadFromDevice* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::NewProp_WorldContext_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms, ReturnValue), Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKLoadFromDevice, nullptr, "LoadSceneFromDeviceAsync", nullptr, nullptr, Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::MRUKLoadFromDevice_eventLoadSceneFromDeviceAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics
	{
		struct MRUKLoadFromDevice_eventOnSceneLoaded_Parms
		{
			bool Succeeded;
		};
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((MRUKLoadFromDevice_eventOnSceneLoaded_Parms*)Obj)->Succeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKLoadFromDevice_eventOnSceneLoaded_Parms), &Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::NewProp_Succeeded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKLoadFromDevice, nullptr, "OnSceneLoaded", nullptr, nullptr, Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::MRUKLoadFromDevice_eventOnSceneLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::MRUKLoadFromDevice_eventOnSceneLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKLoadFromDevice);
	UClass* Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister()
	{
		return UMRUKLoadFromDevice::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKLoadFromDevice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKLoadFromDevice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKLoadFromDevice_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRUKLoadFromDevice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKLoadFromDevice_LoadSceneFromDeviceAsync, "LoadSceneFromDeviceAsync" }, // 444438611
		{ &Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature, "MRUKLoaded__DelegateSignature" }, // 2959242985
		{ &Z_Construct_UFunction_UMRUKLoadFromDevice_OnSceneLoaded, "OnSceneLoaded" }, // 1163925479
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKLoadFromDevice_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKLoadFromDevice_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Load the scene async from device.\n */" },
		{ "IncludePath", "MRUtilityKitBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
		{ "ToolTip", "Load the scene async from device." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKLoadFromDevice, Success), Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Success_MetaData) }; // 2959242985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKLoadFromDevice, Failure), Z_Construct_UDelegateFunction_UMRUKLoadFromDevice_MRUKLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Failure_MetaData), Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Failure_MetaData) }; // 2959242985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKLoadFromDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKLoadFromDevice_Statics::NewProp_Failure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKLoadFromDevice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKLoadFromDevice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKLoadFromDevice_Statics::ClassParams = {
		&UMRUKLoadFromDevice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRUKLoadFromDevice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKLoadFromDevice_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKLoadFromDevice_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKLoadFromDevice_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKLoadFromDevice_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMRUKLoadFromDevice()
	{
		if (!Z_Registration_Info_UClass_UMRUKLoadFromDevice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKLoadFromDevice.OuterSingleton, Z_Construct_UClass_UMRUKLoadFromDevice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKLoadFromDevice.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKLoadFromDevice>()
	{
		return UMRUKLoadFromDevice::StaticClass();
	}
	UMRUKLoadFromDevice::UMRUKLoadFromDevice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKLoadFromDevice);
	UMRUKLoadFromDevice::~UMRUKLoadFromDevice() {}
	DEFINE_FUNCTION(UMRUKBPLibrary::execIsUnrealEngineMetaFork)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMRUKBPLibrary::IsUnrealEngineMetaFork();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKBPLibrary::execRecalculateProceduralMeshAndTangents)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMRUKBPLibrary::RecalculateProceduralMeshAndTangents(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKBPLibrary::execLoadGlobalMeshFromJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_STRUCT(FOculusXRSpaceQueryResult,Z_Param_SpaceQuery);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_OutProceduralMesh);
		P_GET_UBOOL(Z_Param_LoadCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMRUKBPLibrary::LoadGlobalMeshFromJsonString(Z_Param_JsonString,Z_Param_SpaceQuery,Z_Param_OutProceduralMesh,Z_Param_LoadCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRUKBPLibrary::execLoadGlobalMeshFromDevice)
	{
		P_GET_STRUCT(FOculusXRSpaceQueryResult,Z_Param_SpaceQuery);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_OutProceduralMesh);
		P_GET_UBOOL(Z_Param_LoadCollision);
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMRUKBPLibrary::LoadGlobalMeshFromDevice(Z_Param_SpaceQuery,Z_Param_OutProceduralMesh,Z_Param_LoadCollision,Z_Param_WorldContext);
		P_NATIVE_END;
	}
	void UMRUKBPLibrary::StaticRegisterNativesUMRUKBPLibrary()
	{
		UClass* Class = UMRUKBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsUnrealEngineMetaFork", &UMRUKBPLibrary::execIsUnrealEngineMetaFork },
			{ "LoadGlobalMeshFromDevice", &UMRUKBPLibrary::execLoadGlobalMeshFromDevice },
			{ "LoadGlobalMeshFromJsonString", &UMRUKBPLibrary::execLoadGlobalMeshFromJsonString },
			{ "RecalculateProceduralMeshAndTangents", &UMRUKBPLibrary::execRecalculateProceduralMeshAndTangents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics
	{
		struct MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms
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
	void Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms), &Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n     * Check if the current Unreal Engine is the fork of Meta.\n\x09 * @return Whether its the fork or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
		{ "ToolTip", "Check if the current Unreal Engine is the fork of Meta.\n@return Whether its the fork or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKBPLibrary, nullptr, "IsUnrealEngineMetaFork", nullptr, nullptr, Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::MRUKBPLibrary_eventIsUnrealEngineMetaFork_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics
	{
		struct MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms
		{
			FOculusXRSpaceQueryResult SpaceQuery;
			UProceduralMeshComponent* OutProceduralMesh;
			bool LoadCollision;
			const UObject* WorldContext;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutProceduralMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutProceduralMesh;
		static void NewProp_LoadCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_SpaceQuery = { "SpaceQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms, SpaceQuery), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, METADATA_PARAMS(0, nullptr) }; // 4111585324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_OutProceduralMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_OutProceduralMesh = { "OutProceduralMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms, OutProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_OutProceduralMesh_MetaData), Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_OutProceduralMesh_MetaData) };
	void Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_LoadCollision_SetBit(void* Obj)
	{
		((MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms*)Obj)->LoadCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_LoadCollision = { "LoadCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms), &Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_LoadCollision_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_WorldContext_MetaData) };
	void Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms), &Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_SpaceQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_OutProceduralMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_LoadCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load the global mesh from the device.\n\x09 * @param SpaceQuery        Space query of the room.\n\x09 * @param OutProceduralMesh Procedural mesh to load the triangle data in.\n\x09 * @param LoadCollision     Whether to generate collision or not.\n\x09 * @param WorldContext      Context of the world.\n\x09 * @return                  Whether the load was successful or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
		{ "ToolTip", "Load the global mesh from the device.\n@param SpaceQuery        Space query of the room.\n@param OutProceduralMesh Procedural mesh to load the triangle data in.\n@param LoadCollision     Whether to generate collision or not.\n@param WorldContext      Context of the world.\n@return                  Whether the load was successful or not." },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKBPLibrary, nullptr, "LoadGlobalMeshFromDevice", nullptr, nullptr, Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::MRUKBPLibrary_eventLoadGlobalMeshFromDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics
	{
		struct MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms
		{
			FString JsonString;
			FOculusXRSpaceQueryResult SpaceQuery;
			UProceduralMeshComponent* OutProceduralMesh;
			bool LoadCollision;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutProceduralMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutProceduralMesh;
		static void NewProp_LoadCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadCollision;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_SpaceQuery = { "SpaceQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms, SpaceQuery), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, METADATA_PARAMS(0, nullptr) }; // 4111585324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_OutProceduralMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_OutProceduralMesh = { "OutProceduralMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms, OutProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_OutProceduralMesh_MetaData), Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_OutProceduralMesh_MetaData) };
	void Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_LoadCollision_SetBit(void* Obj)
	{
		((MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms*)Obj)->LoadCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_LoadCollision = { "LoadCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms), &Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_LoadCollision_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms), &Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_SpaceQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_OutProceduralMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_LoadCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load the global mesh from a JSON string.\n\x09 * @param JsonString        The string containing the JSON.\n\x09 * @param SpaceQuery        Space query of the room.\n\x09 * @param OutProceduralMesh Procedural mesh to load the triangle data in.\n\x09 * @param LoadCollision     Whether to generate collision or not\n\x09 * @return                  Whether the load was successful or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
		{ "ToolTip", "Load the global mesh from a JSON string.\n@param JsonString        The string containing the JSON.\n@param SpaceQuery        Space query of the room.\n@param OutProceduralMesh Procedural mesh to load the triangle data in.\n@param LoadCollision     Whether to generate collision or not\n@return                  Whether the load was successful or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKBPLibrary, nullptr, "LoadGlobalMeshFromJsonString", nullptr, nullptr, Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::MRUKBPLibrary_eventLoadGlobalMeshFromJsonString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics
	{
		struct MRUKBPLibrary_eventRecalculateProceduralMeshAndTangents_Parms
		{
			UProceduralMeshComponent* Mesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKBPLibrary_eventRecalculateProceduralMeshAndTangents_Parms, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n     * (Re)Calculate Normals and Tangents of the given procedural mesh.\n\x09 * @param Mesh The procedural mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
		{ "ToolTip", "(Re)Calculate Normals and Tangents of the given procedural mesh.\n@param Mesh The procedural mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKBPLibrary, nullptr, "RecalculateProceduralMeshAndTangents", nullptr, nullptr, Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::MRUKBPLibrary_eventRecalculateProceduralMeshAndTangents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::MRUKBPLibrary_eventRecalculateProceduralMeshAndTangents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKBPLibrary);
	UClass* Z_Construct_UClass_UMRUKBPLibrary_NoRegister()
	{
		return UMRUKBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRUKBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKBPLibrary_IsUnrealEngineMetaFork, "IsUnrealEngineMetaFork" }, // 954286720
		{ &Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromDevice, "LoadGlobalMeshFromDevice" }, // 1112518054
		{ &Z_Construct_UFunction_UMRUKBPLibrary_LoadGlobalMeshFromJsonString, "LoadGlobalMeshFromJsonString" }, // 1552367000
		{ &Z_Construct_UFunction_UMRUKBPLibrary_RecalculateProceduralMeshAndTangents, "RecalculateProceduralMeshAndTangents" }, // 2062154335
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MRUtilityKitBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKBPLibrary_Statics::ClassParams = {
		&UMRUKBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMRUKBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UMRUKBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKBPLibrary.OuterSingleton, Z_Construct_UClass_UMRUKBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKBPLibrary.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKBPLibrary>()
	{
		return UMRUKBPLibrary::StaticClass();
	}
	UMRUKBPLibrary::UMRUKBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKBPLibrary);
	UMRUKBPLibrary::~UMRUKBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKLoadFromDevice, UMRUKLoadFromDevice::StaticClass, TEXT("UMRUKLoadFromDevice"), &Z_Registration_Info_UClass_UMRUKLoadFromDevice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKLoadFromDevice), 3872584555U) },
		{ Z_Construct_UClass_UMRUKBPLibrary, UMRUKBPLibrary::StaticClass, TEXT("UMRUKBPLibrary"), &Z_Registration_Info_UClass_UMRUKBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKBPLibrary), 2284042053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_4145797856(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
