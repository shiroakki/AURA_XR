// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitAnchorActorSpawner.h"
#include "MRUtilityKit/Public/MRUtilityKit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitAnchorActorSpawner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchorActorSpawner();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchorActorSpawner_NoRegister();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKAnchorActorSpawner, nullptr, "OnInteriorSpawned__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AMRUKAnchorActorSpawner::FOnInteriorSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnInteriorSpawned)
{
	OnInteriorSpawned.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AMRUKAnchorActorSpawner::execOnSceneLoaded)
	{
		P_GET_UBOOL(Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSceneLoaded(Z_Param_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKAnchorActorSpawner::execSpawnInterior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnInterior();
		P_NATIVE_END;
	}
	void AMRUKAnchorActorSpawner::StaticRegisterNativesAMRUKAnchorActorSpawner()
	{
		UClass* Class = AMRUKAnchorActorSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSceneLoaded", &AMRUKAnchorActorSpawner::execOnSceneLoaded },
			{ "SpawnInterior", &AMRUKAnchorActorSpawner::execSpawnInterior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics
	{
		struct MRUKAnchorActorSpawner_eventOnSceneLoaded_Parms
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
	void Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKAnchorActorSpawner_eventOnSceneLoaded_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKAnchorActorSpawner_eventOnSceneLoaded_Parms), &Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKAnchorActorSpawner, nullptr, "OnSceneLoaded", nullptr, nullptr, Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::MRUKAnchorActorSpawner_eventOnSceneLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::MRUKAnchorActorSpawner_eventOnSceneLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKAnchorActorSpawner_SpawnInterior_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKAnchorActorSpawner_SpawnInterior_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawns the meshes for the given labels above on the anchor positions in each room.\n\x09 * There might be multiple actor classes for a give label. If thats the case a actor class will be chosen radomly. \n\x09 * The seed for this random generator can be set by AnchorRandomSpawnSeed.\n\x09 * This function will be called automatically after the scene toolkit initialized unless\n\x09 * the option SpawnOnStart is set to false.\n\x09 * If there is no actor class specified for a label then a procedural mesh matching the anchors volume and plane\n\x09 * will be generated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "Spawns the meshes for the given labels above on the anchor positions in each room.\nThere might be multiple actor classes for a give label. If thats the case a actor class will be chosen radomly.\nThe seed for this random generator can be set by AnchorRandomSpawnSeed.\nThis function will be called automatically after the scene toolkit initialized unless\nthe option SpawnOnStart is set to false.\nIf there is no actor class specified for a label then a procedural mesh matching the anchors volume and plane\nwill be generated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKAnchorActorSpawner_SpawnInterior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKAnchorActorSpawner, nullptr, "SpawnInterior", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKAnchorActorSpawner_SpawnInterior_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKAnchorActorSpawner_SpawnInterior_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMRUKAnchorActorSpawner_SpawnInterior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKAnchorActorSpawner_SpawnInterior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMRUKAnchorActorSpawner);
	UClass* Z_Construct_UClass_AMRUKAnchorActorSpawner_NoRegister()
	{
		return AMRUKAnchorActorSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActorsSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorsSpawned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorRandomSpawnSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnchorRandomSpawnSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOnStart_MetaData[];
#endif
		static void NewProp_SpawnOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldFallbackToProcedural_MetaData[];
#endif
		static void NewProp_ShouldFallbackToProcedural_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFallbackToProcedural;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnGroups_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpawnGroups_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroups_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnGroups;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteriorActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InteriorActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature, "OnInteriorSpawned__DelegateSignature" }, // 3021202630
		{ &Z_Construct_UFunction_AMRUKAnchorActorSpawner_OnSceneLoaded, "OnSceneLoaded" }, // 831858562
		{ &Z_Construct_UFunction_AMRUKAnchorActorSpawner_SpawnInterior, "SpawnInterior" }, // 1868946922
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * Spawns meshes on anchor positions.\n */" },
		{ "DisplayName", "MR Utility Kit Anchor Actor Spawner" },
		{ "IncludePath", "MRUtilityKitAnchorActorSpawner.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "Spawns meshes on anchor positions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_OnActorsSpawned_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Event that gets fired when the interior spawner finished spawning actors.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "Event that gets fired when the interior spawner finished spawning actors." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_OnActorsSpawned = { "OnActorsSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchorActorSpawner, OnActorsSpawned), Z_Construct_UDelegateFunction_AMRUKAnchorActorSpawner_OnInteriorSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_OnActorsSpawned_MetaData), Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_OnActorsSpawned_MetaData) }; // 3021202630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_AnchorRandomSpawnSeed_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Seed to use for the random generator that decideds wich actor class to \n\x09 * spawn if there a given multiple for a label.\n\x09 * negative values will have the effect to initialize the random generator\n\x09 * to a random seed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "Seed to use for the random generator that decideds wich actor class to\nspawn if there a given multiple for a label.\nnegative values will have the effect to initialize the random generator\nto a random seed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_AnchorRandomSpawnSeed = { "AnchorRandomSpawnSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchorActorSpawner, AnchorRandomSpawnSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_AnchorRandomSpawnSeed_MetaData), Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_AnchorRandomSpawnSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnOnStart_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Whether SpawnInterior() should be called automatically after the scene \n\x09 * toolkit has been initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "Whether SpawnInterior() should be called automatically after the scene\ntoolkit has been initialized." },
	};
#endif
	void Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnOnStart_SetBit(void* Obj)
	{
		((AMRUKAnchorActorSpawner*)Obj)->SpawnOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnOnStart = { "SpawnOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKAnchorActorSpawner), &Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnOnStart_MetaData), Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnOnStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ProceduralMaterial_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Material to use when falling back to procedural material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "Material to use when falling back to procedural material." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchorActorSpawner, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ProceduralMaterial_MetaData), Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ProceduralMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ShouldFallbackToProcedural_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Whether or not the spawner should fallback to procedural meshes in case no actor\n\x09 * class has been defined for a label. This behaviour can be overwritten on the label\n\x09 * basis in SpawnGroups.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "Whether or not the spawner should fallback to procedural meshes in case no actor\nclass has been defined for a label. This behaviour can be overwritten on the label\nbasis in SpawnGroups." },
	};
#endif
	void Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((AMRUKAnchorActorSpawner*)Obj)->ShouldFallbackToProcedural = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKAnchorActorSpawner), &Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ShouldFallbackToProcedural_MetaData), Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ShouldFallbackToProcedural_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 2822779831
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * A map of Actor classes to spawn for the given label.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "A map of Actor classes to spawn for the given label." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchorActorSpawner, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups_MetaData), Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups_MetaData) }; // 2822779831
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_InteriorActors_Inner = { "InteriorActors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_InteriorActors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The spawned interior actors.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitAnchorActorSpawner.h" },
		{ "ToolTip", "The spawned interior actors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_InteriorActors = { "InteriorActors", nullptr, (EPropertyFlags)0x0014000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKAnchorActorSpawner, InteriorActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_InteriorActors_MetaData), Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_InteriorActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_OnActorsSpawned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_AnchorRandomSpawnSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ProceduralMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_ShouldFallbackToProcedural,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_SpawnGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_InteriorActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::NewProp_InteriorActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKAnchorActorSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::ClassParams = {
		&AMRUKAnchorActorSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMRUKAnchorActorSpawner()
	{
		if (!Z_Registration_Info_UClass_AMRUKAnchorActorSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKAnchorActorSpawner.OuterSingleton, Z_Construct_UClass_AMRUKAnchorActorSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMRUKAnchorActorSpawner.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<AMRUKAnchorActorSpawner>()
	{
		return AMRUKAnchorActorSpawner::StaticClass();
	}
	AMRUKAnchorActorSpawner::AMRUKAnchorActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRUKAnchorActorSpawner);
	AMRUKAnchorActorSpawner::~AMRUKAnchorActorSpawner() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchorActorSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchorActorSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKAnchorActorSpawner, AMRUKAnchorActorSpawner::StaticClass, TEXT("AMRUKAnchorActorSpawner"), &Z_Registration_Info_UClass_AMRUKAnchorActorSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKAnchorActorSpawner), 1405069366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchorActorSpawner_h_455187285(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchorActorSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitAnchorActorSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
