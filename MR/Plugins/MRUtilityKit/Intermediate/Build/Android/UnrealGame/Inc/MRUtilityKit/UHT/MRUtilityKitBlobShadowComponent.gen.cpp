// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitBlobShadowComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitBlobShadowComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBlobShadowComponent();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBlobShadowComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	DEFINE_FUNCTION(UMRUKBlobShadowComponent::execUpdatePlaneSizeAndPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlaneSizeAndPosition();
		P_NATIVE_END;
	}
	void UMRUKBlobShadowComponent::StaticRegisterNativesUMRUKBlobShadowComponent()
	{
		UClass* Class = UMRUKBlobShadowComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdatePlaneSizeAndPosition", &UMRUKBlobShadowComponent::execUpdatePlaneSizeAndPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Only callable in the editor from the scene, will update the blob shadow size, position and material parameters\n\x09 * to give a preview how the blob shadow would look like.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
		{ "ToolTip", "Only callable in the editor from the scene, will update the blob shadow size, position and material parameters\nto give a preview how the blob shadow would look like." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKBlobShadowComponent, nullptr, "UpdatePlaneSizeAndPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKBlobShadowComponent);
	UClass* Z_Construct_UClass_UMRUKBlobShadowComponent_NoRegister()
	{
		return UMRUKBlobShadowComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKBlobShadowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roundness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Roundness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gradient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gradient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GradientPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GradientPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVerticalDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKBlobShadowComponent_UpdatePlaneSizeAndPosition, "UpdatePlaneSizeAndPosition" }, // 225893201
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * Adds a blob shadow below the actor.\n * The blob shadow will position and resize itself automatically during runtime.\n */" },
		{ "DisplayName", "MR Utility Kit Blob Shadow Component" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MRUtilityKitBlobShadowComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
		{ "ToolTip", "Adds a blob shadow below the actor.\nThe blob shadow will position and resize itself automatically during runtime." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Roundness_MetaData[] = {
		{ "Category", "MR Utility Kit|Aspect" },
		{ "Comment", "/**\n\x09 * Controls the look of the blob shadow corners (0 = squared corners, 1 = rounded corners).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
		{ "ToolTip", "Controls the look of the blob shadow corners (0 = squared corners, 1 = rounded corners)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Roundness = { "Roundness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, Roundness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Roundness_MetaData), Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Roundness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Gradient_MetaData[] = {
		{ "Category", "MR Utility Kit|Aspect" },
		{ "Comment", "/**\n\x09 * Controls the look of the blob shadow alpha (0 = fully opaque, 1 = gradient from the center).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
		{ "ToolTip", "Controls the look of the blob shadow alpha (0 = fully opaque, 1 = gradient from the center)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Gradient = { "Gradient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, Gradient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Gradient_MetaData), Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Gradient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_GradientPower_MetaData[] = {
		{ "Category", "MR Utility Kit|Aspect" },
		{ "Comment", "/**\n\x09 * Controls the curve of the blob shadow alpha gradient (only available if Gradient > 0).\n\x09 */" },
		{ "EditCondition", "Gradient > 0" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
		{ "ToolTip", "Controls the curve of the blob shadow alpha gradient (only available if Gradient > 0)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_GradientPower = { "GradientPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, GradientPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_GradientPower_MetaData), Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_GradientPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_ExtraExtent_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Increase or decrease the calculated blob shadow size by a fixed amount.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
		{ "ToolTip", "Increase or decrease the calculated blob shadow size by a fixed amount." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_ExtraExtent = { "ExtraExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, ExtraExtent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_ExtraExtent_MetaData), Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_ExtraExtent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_MaxVerticalDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Maximum distance the actor can be away from the ground until the blob shadow is not shown anymore.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
		{ "ToolTip", "Maximum distance the actor can be away from the ground until the blob shadow is not shown anymore." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_MaxVerticalDistance = { "MaxVerticalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, MaxVerticalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_MaxVerticalDistance_MetaData), Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_MaxVerticalDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_FadeDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Distance from the ground until the blob shadow starts to fade.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
		{ "ToolTip", "Distance from the ground until the blob shadow starts to fade." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_FadeDistance = { "FadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, FadeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_FadeDistance_MetaData), Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_FadeDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_DynMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitBlobShadowComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_DynMaterial = { "DynMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKBlobShadowComponent, DynMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_DynMaterial_MetaData), Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_DynMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Roundness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_Gradient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_GradientPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_ExtraExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_MaxVerticalDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_FadeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::NewProp_DynMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKBlobShadowComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::ClassParams = {
		&UMRUKBlobShadowComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMRUKBlobShadowComponent()
	{
		if (!Z_Registration_Info_UClass_UMRUKBlobShadowComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKBlobShadowComponent.OuterSingleton, Z_Construct_UClass_UMRUKBlobShadowComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKBlobShadowComponent.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKBlobShadowComponent>()
	{
		return UMRUKBlobShadowComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKBlobShadowComponent);
	UMRUKBlobShadowComponent::~UMRUKBlobShadowComponent() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBlobShadowComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBlobShadowComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKBlobShadowComponent, UMRUKBlobShadowComponent::StaticClass, TEXT("UMRUKBlobShadowComponent"), &Z_Registration_Info_UClass_UMRUKBlobShadowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKBlobShadowComponent), 1315590113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBlobShadowComponent_h_2698607125(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBlobShadowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitBlobShadowComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
