// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKLocalizer();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKLocalizer_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKAnchorData();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKAnchorData_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKRoomData();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKRoomData_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSceneData();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSceneData_NoRegister();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics
	{
		struct MRUKLocalizer_eventOnComplete_Parms
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
	void Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKLocalizer_eventOnComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKLocalizer_eventOnComplete_Parms), &Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKLocalizer, nullptr, "OnComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::MRUKLocalizer_eventOnComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::MRUKLocalizer_eventOnComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AMRUKLocalizer::FOnComplete_DelegateWrapper(const FMulticastScriptDelegate& OnComplete, bool Success)
{
	struct MRUKLocalizer_eventOnComplete_Parms
	{
		bool Success;
	};
	MRUKLocalizer_eventOnComplete_Parms Parms;
	Parms.Success=Success ? true : false;
	OnComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	void AMRUKLocalizer::StaticRegisterNativesAMRUKLocalizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMRUKLocalizer);
	UClass* Z_Construct_UClass_AMRUKLocalizer_NoRegister()
	{
		return AMRUKLocalizer::StaticClass();
	}
	struct Z_Construct_UClass_AMRUKLocalizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRUKLocalizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKLocalizer_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRUKLocalizer_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature, "OnComplete__DelegateSignature" }, // 2633944390
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKLocalizer_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKLocalizer_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * Actor to help finding the localization of actors.\n * It gets a list of all anchor queries that should be localized\n * and checks every tick if the anchor localization is there.\n * When the localization is complete, it will emit the event OnComplete.\n *\n * NOTE: Normally this should be a async task. However, the anchor data\n * can only be queried in game thread.\n */" },
		{ "IncludePath", "MRUtilityKitData.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
		{ "ToolTip", "Actor to help finding the localization of actors.\nIt gets a list of all anchor queries that should be localized\nand checks every tick if the anchor localization is there.\nWhen the localization is complete, it will emit the event OnComplete.\n\nNOTE: Normally this should be a async task. However, the anchor data\ncan only be queried in game thread." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKLocalizer_Statics::NewProp_OnComplete_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Event that gets fired when all anchors have been localized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
		{ "ToolTip", "Event that gets fired when all anchors have been localized." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMRUKLocalizer_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKLocalizer, OnComplete), Z_Construct_UDelegateFunction_AMRUKLocalizer_OnComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKLocalizer_Statics::NewProp_OnComplete_MetaData), Z_Construct_UClass_AMRUKLocalizer_Statics::NewProp_OnComplete_MetaData) }; // 2633944390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKLocalizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKLocalizer_Statics::NewProp_OnComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRUKLocalizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKLocalizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKLocalizer_Statics::ClassParams = {
		&AMRUKLocalizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_AMRUKLocalizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKLocalizer_Statics::PropPointers),
		0,
		0x019000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKLocalizer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKLocalizer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKLocalizer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMRUKLocalizer()
	{
		if (!Z_Registration_Info_UClass_AMRUKLocalizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKLocalizer.OuterSingleton, Z_Construct_UClass_AMRUKLocalizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMRUKLocalizer.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<AMRUKLocalizer>()
	{
		return AMRUKLocalizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRUKLocalizer);
	AMRUKLocalizer::~AMRUKLocalizer() {}
	void UMRUKAnchorData::StaticRegisterNativesUMRUKAnchorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKAnchorData);
	UClass* Z_Construct_UClass_UMRUKAnchorData_NoRegister()
	{
		return UMRUKAnchorData::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKAnchorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKAnchorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKAnchorData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKAnchorData_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * Load anchor data from device.\n */" },
		{ "IncludePath", "MRUtilityKitData.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
		{ "ToolTip", "Load anchor data from device." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKAnchorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKAnchorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKAnchorData_Statics::ClassParams = {
		&UMRUKAnchorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x011000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKAnchorData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKAnchorData_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMRUKAnchorData()
	{
		if (!Z_Registration_Info_UClass_UMRUKAnchorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKAnchorData.OuterSingleton, Z_Construct_UClass_UMRUKAnchorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKAnchorData.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKAnchorData>()
	{
		return UMRUKAnchorData::StaticClass();
	}
	UMRUKAnchorData::UMRUKAnchorData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKAnchorData);
	UMRUKAnchorData::~UMRUKAnchorData() {}
	struct Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics
	{
		struct MRUKRoomData_eventOnComplete_Parms
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
	void Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKRoomData_eventOnComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoomData_eventOnComplete_Parms), &Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKRoomData, nullptr, "OnComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::MRUKRoomData_eventOnComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::MRUKRoomData_eventOnComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMRUKRoomData::FOnComplete_DelegateWrapper(const FMulticastScriptDelegate& OnComplete, bool Success)
{
	struct MRUKRoomData_eventOnComplete_Parms
	{
		bool Success;
	};
	MRUKRoomData_eventOnComplete_Parms Parms;
	Parms.Success=Success ? true : false;
	OnComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMRUKRoomData::execAnchorsInitialized)
	{
		P_GET_UBOOL(Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnchorsInitialized(Z_Param_Success);
		P_NATIVE_END;
	}
	void UMRUKRoomData::StaticRegisterNativesUMRUKRoomData()
	{
		UClass* Class = UMRUKRoomData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnchorsInitialized", &UMRUKRoomData::execAnchorsInitialized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics
	{
		struct MRUKRoomData_eventAnchorsInitialized_Parms
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
	void Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKRoomData_eventAnchorsInitialized_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoomData_eventAnchorsInitialized_Parms), &Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKRoomData, nullptr, "AnchorsInitialized", nullptr, nullptr, Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::MRUKRoomData_eventAnchorsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::MRUKRoomData_eventAnchorsInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKRoomData);
	UClass* Z_Construct_UClass_UMRUKRoomData_NoRegister()
	{
		return UMRUKRoomData::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKRoomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnchorsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKRoomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKRoomData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRUKRoomData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKRoomData_AnchorsInitialized, "AnchorsInitialized" }, // 283143155
		{ &Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature, "OnComplete__DelegateSignature" }, // 2520596354
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKRoomData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKRoomData_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * Load room data from device.\n * When all room data has been loaded, the OnComplete event will be fired.\n */" },
		{ "IncludePath", "MRUtilityKitData.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
		{ "ToolTip", "Load room data from device.\nWhen all room data has been loaded, the OnComplete event will be fired." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_OnComplete_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Event that gets fired after all room data has been loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
		{ "ToolTip", "Event that gets fired after all room data has been loaded." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKRoomData, OnComplete), Z_Construct_UDelegateFunction_UMRUKRoomData_OnComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_OnComplete_MetaData), Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_OnComplete_MetaData) }; // 2520596354
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_AnchorsData_Inner = { "AnchorsData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMRUKAnchorData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_AnchorsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_AnchorsData = { "AnchorsData", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKRoomData, AnchorsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_AnchorsData_MetaData), Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_AnchorsData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_OnComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_AnchorsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKRoomData_Statics::NewProp_AnchorsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKRoomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKRoomData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKRoomData_Statics::ClassParams = {
		&UMRUKRoomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRUKRoomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKRoomData_Statics::PropPointers),
		0,
		0x019000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKRoomData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKRoomData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKRoomData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMRUKRoomData()
	{
		if (!Z_Registration_Info_UClass_UMRUKRoomData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKRoomData.OuterSingleton, Z_Construct_UClass_UMRUKRoomData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKRoomData.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKRoomData>()
	{
		return UMRUKRoomData::StaticClass();
	}
	UMRUKRoomData::UMRUKRoomData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKRoomData);
	UMRUKRoomData::~UMRUKRoomData() {}
	struct Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics
	{
		struct MRUKSceneData_eventOnComplete_Parms
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
	void Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSceneData_eventOnComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSceneData_eventOnComplete_Parms), &Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSceneData, nullptr, "OnComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::MRUKSceneData_eventOnComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::MRUKSceneData_eventOnComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMRUKSceneData::FOnComplete_DelegateWrapper(const FMulticastScriptDelegate& OnComplete, bool Success)
{
	struct MRUKSceneData_eventOnComplete_Parms
	{
		bool Success;
	};
	MRUKSceneData_eventOnComplete_Parms Parms;
	Parms.Success=Success ? true : false;
	OnComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMRUKSceneData::execRoomQueryComplete)
	{
		P_GET_UBOOL(Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RoomQueryComplete(Z_Param_Success);
		P_NATIVE_END;
	}
	void UMRUKSceneData::StaticRegisterNativesUMRUKSceneData()
	{
		UClass* Class = UMRUKSceneData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RoomQueryComplete", &UMRUKSceneData::execRoomQueryComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics
	{
		struct MRUKSceneData_eventRoomQueryComplete_Parms
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
	void Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MRUKSceneData_eventRoomQueryComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKSceneData_eventRoomQueryComplete_Parms), &Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRUKSceneData, nullptr, "RoomQueryComplete", nullptr, nullptr, Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::MRUKSceneData_eventRoomQueryComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::MRUKSceneData_eventRoomQueryComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKSceneData);
	UClass* Z_Construct_UClass_UMRUKSceneData_NoRegister()
	{
		return UMRUKSceneData::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKSceneData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RoomsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKSceneData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSceneData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRUKSceneData_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature, "OnComplete__DelegateSignature" }, // 535498373
		{ &Z_Construct_UFunction_UMRUKSceneData_RoomQueryComplete, "RoomQueryComplete" }, // 3297973927
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSceneData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSceneData_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "Comment", "/**\n * Load scene data from device.\n * When all scene data has been loaded, the OnComplete event will be fired.\n */" },
		{ "IncludePath", "MRUtilityKitData.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
		{ "ToolTip", "Load scene data from device.\nWhen all scene data has been loaded, the OnComplete event will be fired." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_OnComplete_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Event that gets fired after all scene data has been loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
		{ "ToolTip", "Event that gets fired after all scene data has been loaded." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSceneData, OnComplete), Z_Construct_UDelegateFunction_UMRUKSceneData_OnComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_OnComplete_MetaData), Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_OnComplete_MetaData) }; // 535498373
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_RoomsData_Inner = { "RoomsData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMRUKRoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_RoomsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_RoomsData = { "RoomsData", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKSceneData, RoomsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_RoomsData_MetaData), Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_RoomsData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKSceneData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_OnComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_RoomsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSceneData_Statics::NewProp_RoomsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKSceneData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKSceneData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKSceneData_Statics::ClassParams = {
		&UMRUKSceneData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRUKSceneData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSceneData_Statics::PropPointers),
		0,
		0x019000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSceneData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKSceneData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSceneData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMRUKSceneData()
	{
		if (!Z_Registration_Info_UClass_UMRUKSceneData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKSceneData.OuterSingleton, Z_Construct_UClass_UMRUKSceneData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKSceneData.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKSceneData>()
	{
		return UMRUKSceneData::StaticClass();
	}
	UMRUKSceneData::UMRUKSceneData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKSceneData);
	UMRUKSceneData::~UMRUKSceneData() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKLocalizer, AMRUKLocalizer::StaticClass, TEXT("AMRUKLocalizer"), &Z_Registration_Info_UClass_AMRUKLocalizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKLocalizer), 3635143771U) },
		{ Z_Construct_UClass_UMRUKAnchorData, UMRUKAnchorData::StaticClass, TEXT("UMRUKAnchorData"), &Z_Registration_Info_UClass_UMRUKAnchorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKAnchorData), 3122658578U) },
		{ Z_Construct_UClass_UMRUKRoomData, UMRUKRoomData::StaticClass, TEXT("UMRUKRoomData"), &Z_Registration_Info_UClass_UMRUKRoomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKRoomData), 2702870392U) },
		{ Z_Construct_UClass_UMRUKSceneData, UMRUKSceneData::StaticClass, TEXT("UMRUKSceneData"), &Z_Registration_Info_UClass_UMRUKSceneData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKSceneData), 1833247876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitData_h_2856823886(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS