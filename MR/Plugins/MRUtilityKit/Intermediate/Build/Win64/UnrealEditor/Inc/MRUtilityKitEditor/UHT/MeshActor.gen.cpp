// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitEditor/Private/MeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MRUTILITYKITEDITOR_API UClass* Z_Construct_UClass_AMeshActor();
	MRUTILITYKITEDITOR_API UClass* Z_Construct_UClass_AMeshActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKitEditor();
// End Cross Module References
	void AMeshActor::StaticRegisterNativesAMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeshActor);
	UClass* Z_Construct_UClass_AMeshActor_NoRegister()
	{
		return AMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKitEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMeshActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshActor.h" },
		{ "ModuleRelativePath", "Private/MeshActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeshActor_Statics::ClassParams = {
		&AMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMeshActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMeshActor()
	{
		if (!Z_Registration_Info_UClass_AMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeshActor.OuterSingleton, Z_Construct_UClass_AMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMeshActor.OuterSingleton;
	}
	template<> MRUTILITYKITEDITOR_API UClass* StaticClass<AMeshActor>()
	{
		return AMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshActor);
	AMeshActor::~AMeshActor() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_MeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_MeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMeshActor, AMeshActor::StaticClass, TEXT("AMeshActor"), &Z_Registration_Info_UClass_AMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeshActor), 852145595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_MeshActor_h_496100797(TEXT("/Script/MRUtilityKitEditor"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_MeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKitEditor_Private_MeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
