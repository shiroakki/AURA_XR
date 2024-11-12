// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitGuardian.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitGuardian() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardian();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardian_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	DEFINE_FUNCTION(AMRUKGuardian::execCreateGuardian)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_GuardianMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGuardian(Z_Param_GuardianMesh);
		P_NATIVE_END;
	}
	void AMRUKGuardian::StaticRegisterNativesAMRUKGuardian()
	{
		UClass* Class = AMRUKGuardian::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGuardian", &AMRUKGuardian::execCreateGuardian },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics
	{
		struct MRUKGuardian_eventCreateGuardian_Parms
		{
			UProceduralMeshComponent* GuardianMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuardianMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardianMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::NewProp_GuardianMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::NewProp_GuardianMesh = { "GuardianMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKGuardian_eventCreateGuardian_Parms, GuardianMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::NewProp_GuardianMesh_MetaData), Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::NewProp_GuardianMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::NewProp_GuardianMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Attaches the procedural mesh component to this actor.\n\x09 * @param GuardianMesh The mesh to attach.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardian.h" },
		{ "ToolTip", "Attaches the procedural mesh component to this actor.\n@param GuardianMesh The mesh to attach." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKGuardian, nullptr, "CreateGuardian", nullptr, nullptr, Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::MRUKGuardian_eventCreateGuardian_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::MRUKGuardian_eventCreateGuardian_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKGuardian_CreateGuardian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKGuardian_CreateGuardian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMRUKGuardian);
	UClass* Z_Construct_UClass_AMRUKGuardian_NoRegister()
	{
		return AMRUKGuardian::StaticClass();
	}
	struct Z_Construct_UClass_AMRUKGuardian_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuardianMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GuardianMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRUKGuardian_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardian_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRUKGuardian_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKGuardian_CreateGuardian, "CreateGuardian" }, // 847874063
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardian_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardian_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "DisplayName", "MR Utility Kit Guardian Actor" },
		{ "IncludePath", "MRUtilityKitGuardian.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardian.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKGuardian_Statics::NewProp_GuardianMeshComponent_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Procedural mesh that is generated from the anchor geometry and has the guardian material applied.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitGuardian.h" },
		{ "ToolTip", "Procedural mesh that is generated from the anchor geometry and has the guardian material applied." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKGuardian_Statics::NewProp_GuardianMeshComponent = { "GuardianMeshComponent", nullptr, (EPropertyFlags)0x00140000000a281d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKGuardian, GuardianMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardian_Statics::NewProp_GuardianMeshComponent_MetaData), Z_Construct_UClass_AMRUKGuardian_Statics::NewProp_GuardianMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKGuardian_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKGuardian_Statics::NewProp_GuardianMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRUKGuardian_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKGuardian>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKGuardian_Statics::ClassParams = {
		&AMRUKGuardian::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMRUKGuardian_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardian_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardian_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKGuardian_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKGuardian_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMRUKGuardian()
	{
		if (!Z_Registration_Info_UClass_AMRUKGuardian.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKGuardian.OuterSingleton, Z_Construct_UClass_AMRUKGuardian_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMRUKGuardian.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<AMRUKGuardian>()
	{
		return AMRUKGuardian::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRUKGuardian);
	AMRUKGuardian::~AMRUKGuardian() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardian_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardian_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKGuardian, AMRUKGuardian::StaticClass, TEXT("AMRUKGuardian"), &Z_Registration_Info_UClass_AMRUKGuardian, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKGuardian), 2150047936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardian_h_689935892(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardian_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitGuardian_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
