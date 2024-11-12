// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitGuardianSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitGuardianSpawner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardian_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardianSpawner();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardianSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	DEFINE_FUNCTION(AMRUKGuardianSpawner::execSceneLoaded)
	{
		P_GET_UBOOL(Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SceneLoaded(Z_Param_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKGuardianSpawner::execSetGridDensity)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Density);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGridDensity(Z_Param_Density);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKGuardianSpawner::execSetGuardianMaterial)
	{
		P_GET_OBJECT(UMaterialInstance,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGuardianMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKGuardianSpawner::execSpawnGuardian)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnGuardian();
		P_NATIVE_END;
	}
	void AMRUKGuardianSpawner::StaticRegisterNativesAMRUKGuardianSpawner()
	{
		UClass* Class = AMRUKGuardianSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SceneLoaded", &AMRUKGuardianSpawner::execSceneLoaded },
			{ "SetGridDensity", &AMRUKGuardianSpawner::execSetGridDensity },
			{ "SetGuardianMaterial", &AMRUKGuardianSpawner::execSetGuardianMaterial },
			{ "SpawnGuardian", &AMRUKGuardianSpawner::execSpawnGuardian },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics
	{
		struct MRUKGuardianSpawner_eventSceneLoaded_Parms
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
	void Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKGuardianSpawner_eventSceneLoaded_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKGuardianSpawner_eventSceneLoaded_Parms), &Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "SceneLoaded", nullptr, nullptr, Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::MRUKGuardianSpawner_eventSceneLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::MRUKGuardianSpawner_eventSceneLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics
	{
		struct MRUKGuardianSpawner_eventSetGridDensity_Parms
		{
			double Density;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Density;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventSetGridDensity_Parms, Density), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::NewProp_Density,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Set the density of the grid.\n\x09 * @param Density The grid density.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Set the density of the grid.\n@param Density The grid density." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "SetGridDensity", nullptr, nullptr, Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::MRUKGuardianSpawner_eventSetGridDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::MRUKGuardianSpawner_eventSetGridDensity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics
	{
		struct MRUKGuardianSpawner_eventSetGuardianMaterial_Parms
		{
			UMaterialInstance* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardianSpawner_eventSetGuardianMaterial_Parms, Material), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Set the guardian material to a different one.\n\x09 * @param Material The guardian material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Set the guardian material to a different one.\n@param Material The guardian material." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "SetGuardianMaterial", nullptr, nullptr, Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::MRUKGuardianSpawner_eventSetGuardianMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::MRUKGuardianSpawner_eventSetGuardianMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardian_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardian_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawn the guardian. This will get called automatically after the scene toolkit has \n\x09 * been initialized if SpawnOnStart is set to true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Spawn the guardian. This will get called automatically after the scene toolkit has\nbeen initialized if SpawnOnStart is set to true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKGuardianSpawner, nullptr, "SpawnGuardian", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardian_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardian_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMRUKGuardianSpawner);
	UClass* Z_Construct_UClass_AMRUKGuardianSpawner_NoRegister()
	{
		return AMRUKGuardianSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AMRUKGuardianSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOnStart_MetaData[];
#endif
		static void NewProp_SpawnOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuardianDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_GuardianDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableFade_MetaData[];
#endif
		static void NewProp_EnableFade_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuardianMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GuardianMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridDensity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_GridDensity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardianActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuardianActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GuardianActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRUKGuardianSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRUKGuardianSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_SceneLoaded, "SceneLoaded" }, // 861578652
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_SetGridDensity, "SetGridDensity" }, // 1806794404
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_SetGuardianMaterial, "SetGuardianMaterial" }, // 320620102
		{ &Z_Construct_UFunction_AMRUKGuardianSpawner_SpawnGuardian, "SpawnGuardian" }, // 277603479
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardianSpawner_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * Show a guardian if the player gets close to any furniture or walls.\n */" },
		{ "DisplayName", "MR Utility Kit Guardian" },
		{ "IncludePath", "MRUtilityKitGuardianSpawner.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Show a guardian if the player gets close to any furniture or walls." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_SpawnOnStart_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Whether SpawnGuardian() should be called automatically after the scene \n\x09 * toolkit has been initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Whether SpawnGuardian() should be called automatically after the scene\ntoolkit has been initialized." },
	};
#endif
	void Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_SpawnOnStart_SetBit(void* Obj)
	{
		((AMRUKGuardianSpawner*)Obj)->SpawnOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_SpawnOnStart = { "SpawnOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKGuardianSpawner), &Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_SpawnOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_SpawnOnStart_MetaData), Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_SpawnOnStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * How close the camera needs to come to a surface before the guardian appears.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "How close the camera needs to come to a surface before the guardian appears." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianDistance = { "GuardianDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, GuardianDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianDistance_MetaData), Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_EnableFade_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Whether the fading value should be calculated for the shader or not.\n\x09 If fading is not needed this can save performance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "Whether the fading value should be calculated for the shader or not.\n        If fading is not needed this can save performance." },
	};
#endif
	void Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_EnableFade_SetBit(void* Obj)
	{
		((AMRUKGuardianSpawner*)Obj)->EnableFade = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_EnableFade = { "EnableFade", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKGuardianSpawner), &Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_EnableFade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_EnableFade_MetaData), Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_EnableFade_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetGuardianMaterial" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The material to use for the guardian. It needs to have a scalar parameter Fade \n\x09 * and a vector parameter WallScale. If this material is not set a default one\n\x09 * will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "The material to use for the guardian. It needs to have a scalar parameter Fade\nand a vector parameter WallScale. If this material is not set a default one\nwill be used." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianMaterial = { "GuardianMaterial", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, GuardianMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianMaterial_MetaData), Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GridDensity_MetaData[] = {
		{ "BlueprintSetter", "SetGridDensity" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * How dense the grid should be.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
		{ "ToolTip", "How dense the grid should be." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GridDensity = { "GridDensity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, GridDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GridDensity_MetaData), Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GridDensity_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianActors_Inner = { "GuardianActors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKGuardian_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianActors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardianSpawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianActors = { "GuardianActors", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardianSpawner, GuardianActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianActors_MetaData), Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKGuardianSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_SpawnOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_EnableFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GridDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKGuardianSpawner_Statics::NewProp_GuardianActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRUKGuardianSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKGuardianSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKGuardianSpawner_Statics::ClassParams = {
		&AMRUKGuardianSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMRUKGuardianSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKGuardianSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardianSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMRUKGuardianSpawner()
	{
		if (!Z_Registration_Info_UClass_AMRUKGuardianSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKGuardianSpawner.OuterSingleton, Z_Construct_UClass_AMRUKGuardianSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMRUKGuardianSpawner.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<AMRUKGuardianSpawner>()
	{
		return AMRUKGuardianSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRUKGuardianSpawner);
	AMRUKGuardianSpawner::~AMRUKGuardianSpawner() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKGuardianSpawner, AMRUKGuardianSpawner::StaticClass, TEXT("AMRUKGuardianSpawner"), &Z_Registration_Info_UClass_AMRUKGuardianSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKGuardianSpawner), 1297274830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_2066058703(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
