// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitSeatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitSeatsComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSeatsComponent();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSeatsComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	DEFINE_FUNCTION(UMRUKSeatsComponent::execCalculateSeatPoses)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SeatWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateSeatPoses(Z_Param_SeatWidth);
		P_NATIVE_END;
	}
	void UMRUKSeatsComponent::StaticRegisterNativesUMRUKSeatsComponent()
	{
		UClass* Class = UMRUKSeatsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateSeatPoses", &UMRUKSeatsComponent::execCalculateSeatPoses },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics
	{
		struct MRUKSeatsComponent_eventCalculateSeatPoses_Parms
		{
			double SeatWidth;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SeatWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::NewProp_SeatWidth = { "SeatWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSeatsComponent_eventCalculateSeatPoses_Parms, SeatWidth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::NewProp_SeatWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Calculate the seats poses that are available on the actor.\n\x09 * This gets called automatically after the room has been loaded.\n\x09 * However, it's okay to call this function again with a different SeatWidth. \n\x09 * The seat poses will then get recalculated.\n\x09 * @param SeatWidth The width of each seat.\n\x09 */" },
		{ "CPP_Default_SeatWidth", "60.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSeatsComponent.h" },
		{ "ToolTip", "Calculate the seats poses that are available on the actor.\nThis gets called automatically after the room has been loaded.\nHowever, it's okay to call this function again with a different SeatWidth.\nThe seat poses will then get recalculated.\n@param SeatWidth The width of each seat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSeatsComponent, nullptr, "CalculateSeatPoses", nullptr, nullptr, Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::MRUKSeatsComponent_eventCalculateSeatPoses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::MRUKSeatsComponent_eventCalculateSeatPoses_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKSeatsComponent);
	UClass* Z_Construct_UClass_UMRUKSeatsComponent_NoRegister()
	{
		return UMRUKSeatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKSeatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeatPoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeatPoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SeatPoses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKSeatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSeatsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRUKSeatsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKSeatsComponent_CalculateSeatPoses, "CalculateSeatPoses" }, // 284190738
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSeatsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSeatsComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * This component gets attached to Anchors which have seats available.\n * Seats can be used for example to spawn avatars in the correct locations.\n */" },
		{ "IncludePath", "MRUtilityKitSeatsComponent.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSeatsComponent.h" },
		{ "ToolTip", "This component gets attached to Anchors which have seats available.\nSeats can be used for example to spawn avatars in the correct locations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRUKSeatsComponent_Statics::NewProp_SeatPoses_Inner = { "SeatPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSeatsComponent_Statics::NewProp_SeatPoses_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSeatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMRUKSeatsComponent_Statics::NewProp_SeatPoses = { "SeatPoses", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSeatsComponent, SeatPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSeatsComponent_Statics::NewProp_SeatPoses_MetaData), Z_Construct_UClass_UMRUKSeatsComponent_Statics::NewProp_SeatPoses_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKSeatsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSeatsComponent_Statics::NewProp_SeatPoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSeatsComponent_Statics::NewProp_SeatPoses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKSeatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKSeatsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKSeatsComponent_Statics::ClassParams = {
		&UMRUKSeatsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRUKSeatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSeatsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSeatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKSeatsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSeatsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMRUKSeatsComponent()
	{
		if (!Z_Registration_Info_UClass_UMRUKSeatsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKSeatsComponent.OuterSingleton, Z_Construct_UClass_UMRUKSeatsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKSeatsComponent.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKSeatsComponent>()
	{
		return UMRUKSeatsComponent::StaticClass();
	}
	UMRUKSeatsComponent::UMRUKSeatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKSeatsComponent);
	UMRUKSeatsComponent::~UMRUKSeatsComponent() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKSeatsComponent, UMRUKSeatsComponent::StaticClass, TEXT("UMRUKSeatsComponent"), &Z_Registration_Info_UClass_UMRUKSeatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKSeatsComponent), 3872219737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_3853159764(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
