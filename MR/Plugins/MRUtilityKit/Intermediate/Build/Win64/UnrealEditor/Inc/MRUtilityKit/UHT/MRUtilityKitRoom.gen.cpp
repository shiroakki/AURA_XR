// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKitRoom.h"
#include "../../../../../Plugins/Marketplace/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
#include "MRUtilityKit/Public/MRUtilityKit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKitRoom() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom_NoRegister();
	MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature();
	MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKPlaneUV();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTexCoordModes();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKPositioningMethod;
	static UEnum* EMRUKPositioningMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMRUKPositioningMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMRUKPositioningMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKPositioningMethod"));
		}
		return Z_Registration_Info_UEnum_EMRUKPositioningMethod.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKPositioningMethod>()
	{
		return EMRUKPositioningMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics::Enumerators[] = {
		{ "EMRUKPositioningMethod::Center", (int64)EMRUKPositioningMethod::Center },
		{ "EMRUKPositioningMethod::Edge", (int64)EMRUKPositioningMethod::Edge },
		{ "EMRUKPositioningMethod::Default", (int64)EMRUKPositioningMethod::Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.Comment", "/**\n\x09 * Center the object on the surface.\n\x09 */" },
		{ "Center.Name", "EMRUKPositioningMethod::Center" },
		{ "Center.ToolTip", "Center the object on the surface." },
		{ "Comment", "/**\n * Method to use when determining the position and rotation for the best pose.\n */" },
		{ "Default.Comment", "/**\n\x09 * Use the location where the ray hit the object as the location.\n\x09 * The rotation is dependent on the objects shape. For example for walls\n\x09 * the hit normal from the raycast will be used. For floors the rotation\n\x09 * will be towards the user and for volumes that got hit on the top the\n\x09 * rotation will be towards the longest edge that is nearest to the player.\n\x09 */" },
		{ "Default.Name", "EMRUKPositioningMethod::Default" },
		{ "Default.ToolTip", "Use the location where the ray hit the object as the location.\nThe rotation is dependent on the objects shape. For example for walls\nthe hit normal from the raycast will be used. For floors the rotation\nwill be towards the user and for volumes that got hit on the top the\nrotation will be towards the longest edge that is nearest to the player." },
		{ "Edge.Comment", "/**\n\x09 * Snap the object to edge which is closest to the user.\n\x09 */" },
		{ "Edge.Name", "EMRUKPositioningMethod::Edge" },
		{ "Edge.ToolTip", "Snap the object to edge which is closest to the user." },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Method to use when determining the position and rotation for the best pose." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		"EMRUKPositioningMethod",
		"EMRUKPositioningMethod",
		Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod()
	{
		if (!Z_Registration_Info_UEnum_EMRUKPositioningMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKPositioningMethod.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMRUKPositioningMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRUKAnchorWithPlaneUVs;
class UScriptStruct* FMRUKAnchorWithPlaneUVs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRUKAnchorWithPlaneUVs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRUKAnchorWithPlaneUVs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("MRUKAnchorWithPlaneUVs"));
	}
	return Z_Registration_Info_UScriptStruct_MRUKAnchorWithPlaneUVs.OuterSingleton;
}
template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<FMRUKAnchorWithPlaneUVs>()
{
	return FMRUKAnchorWithPlaneUVs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Anchor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneUVs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneUVs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneUVs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKAnchorWithPlaneUVs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_Anchor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKAnchorWithPlaneUVs, Anchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_Anchor_MetaData), Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_Anchor_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_PlaneUVs_Inner = { "PlaneUVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKPlaneUV, METADATA_PARAMS(0, nullptr) }; // 2706445733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_PlaneUVs_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_PlaneUVs = { "PlaneUVs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKAnchorWithPlaneUVs, PlaneUVs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_PlaneUVs_MetaData), Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_PlaneUVs_MetaData) }; // 2706445733
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_Anchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_PlaneUVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewProp_PlaneUVs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		&NewStructOps,
		"MRUKAnchorWithPlaneUVs",
		Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::PropPointers),
		sizeof(FMRUKAnchorWithPlaneUVs),
		alignof(FMRUKAnchorWithPlaneUVs),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs()
	{
		if (!Z_Registration_Info_UScriptStruct_MRUKAnchorWithPlaneUVs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRUKAnchorWithPlaneUVs.InnerSingleton, Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MRUKAnchorWithPlaneUVs.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics
	{
		struct MRUKRoom_eventOnAnchorUpdated_Parms
		{
			AMRUKAnchor* Anchor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventOnAnchorUpdated_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::NewProp_Anchor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "OnAnchorUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::MRUKRoom_eventOnAnchorUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::MRUKRoom_eventOnAnchorUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AMRUKRoom::FOnAnchorUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorUpdated, AMRUKAnchor* Anchor)
{
	struct MRUKRoom_eventOnAnchorUpdated_Parms
	{
		AMRUKAnchor* Anchor;
	};
	MRUKRoom_eventOnAnchorUpdated_Parms Parms;
	Parms.Anchor=Anchor;
	OnAnchorUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics
	{
		struct MRUKRoom_eventOnAnchorCreated_Parms
		{
			AMRUKAnchor* Anchor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventOnAnchorCreated_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::NewProp_Anchor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "OnAnchorCreated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::MRUKRoom_eventOnAnchorCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::MRUKRoom_eventOnAnchorCreated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AMRUKRoom::FOnAnchorCreated_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorCreated, AMRUKAnchor* Anchor)
{
	struct MRUKRoom_eventOnAnchorCreated_Parms
	{
		AMRUKAnchor* Anchor;
	};
	MRUKRoom_eventOnAnchorCreated_Parms Parms;
	Parms.Anchor=Anchor;
	OnAnchorCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics
	{
		struct MRUKRoom_eventOnAnchorRemoved_Parms
		{
			AMRUKAnchor* Anchor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventOnAnchorRemoved_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::NewProp_Anchor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "OnAnchorRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::MRUKRoom_eventOnAnchorRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::MRUKRoom_eventOnAnchorRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void AMRUKRoom::FOnAnchorRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorRemoved, AMRUKAnchor* Anchor)
{
	struct MRUKRoom_eventOnAnchorRemoved_Parms
	{
		AMRUKAnchor* Anchor;
	};
	MRUKRoom_eventOnAnchorRemoved_Parms Parms;
	Parms.Anchor=Anchor;
	OnAnchorRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AMRUKRoom::execAddAnchorToRoom)
	{
		P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAnchorToRoom(Z_Param_Anchor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execLoadGlobalMeshFromJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadGlobalMeshFromJsonString(Z_Param_JsonString,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execLoadGlobalMeshFromDevice)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadGlobalMeshFromDevice(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execComputeWallMeshUVAdjustments)
	{
		P_GET_TARRAY_REF(FMRUKTexCoordModes,Z_Param_Out_WallTextureCoordinateModes);
		P_GET_TARRAY_REF(FMRUKAnchorWithPlaneUVs,Z_Param_Out_OutAnchorsWithPlaneUVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeWallMeshUVAdjustments(Z_Param_Out_WallTextureCoordinateModes,Z_Param_Out_OutAnchorsWithPlaneUVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execIsWallAnchor)
	{
		P_GET_OBJECT(AMRUKAnchor,Z_Param_Anchor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWallAnchor(Z_Param_Anchor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execSpawnInteriorFromStream)
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
	DEFINE_FUNCTION(AMRUKRoom::execSpawnInterior)
	{
		P_GET_TMAP_REF(FString,FMRUKSpawnGroup,Z_Param_Out_SpawnGroups);
		P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
		P_GET_UBOOL(Z_Param_ShouldFallbackToProcedural);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnInterior(Z_Param_Out_SpawnGroups,Z_Param_ProceduralMaterial,Z_Param_ShouldFallbackToProcedural);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execAttachProceduralMeshToWalls)
	{
		P_GET_TARRAY_REF(FMRUKTexCoordModes,Z_Param_Out_WallTextureCoordinateModes);
		P_GET_OBJECT(UMaterialInterface,Z_Param_ProceduralMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachProceduralMeshToWalls(Z_Param_Out_WallTextureCoordinateModes,Z_Param_ProceduralMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execGetLargestSurface)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetLargestSurface(Z_Param_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execGetKeyWall)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetKeyWall(Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execGetBestPoseFromRaycast)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayDirection);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxDist);
		P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutPose);
		P_GET_ENUM(EMRUKPositioningMethod,Z_Param_PositioningMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetBestPoseFromRaycast(Z_Param_Out_RayOrigin,Z_Param_Out_RayDirection,Z_Param_MaxDist,Z_Param_Out_LabelFilter,Z_Param_Out_OutPose,EMRUKPositioningMethod(Z_Param_PositioningMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execGetFirstAnchorByLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->GetFirstAnchorByLabel(Z_Param_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execGetAnchorsByLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AMRUKAnchor*>*)Z_Param__Result=P_THIS->GetAnchorsByLabel(Z_Param_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execTryGetClosestSeatPose)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayDirection);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutSeatTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->TryGetClosestSeatPose(Z_Param_Out_RayOrigin,Z_Param_Out_RayDirection,Z_Param_Out_OutSeatTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execIsPositionInSceneVolume)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_UBOOL(Z_Param_TestVerticalBounds);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->IsPositionInSceneVolume(Z_Param_Out_WorldPosition,Z_Param_TestVerticalBounds,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execTryGetClosestSurfacePosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSurfacePosition);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutSurfaceDistance);
		P_GET_STRUCT_REF(FMRUKLabelFilter,Z_Param_Out_LabelFilter);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMRUKAnchor**)Z_Param__Result=P_THIS->TryGetClosestSurfacePosition(Z_Param_Out_WorldPosition,Z_Param_Out_OutSurfacePosition,Z_Param_Out_OutSurfaceDistance,Z_Param_Out_LabelFilter,Z_Param_MaxDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execDoesRoomHave)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Labels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesRoomHave(Z_Param_Out_Labels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execClearRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execRaycastAll)
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
	DEFINE_FUNCTION(AMRUKRoom::execRaycast)
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
	DEFINE_FUNCTION(AMRUKRoom::execGenerateRandomPositionInRoomFromStream)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistanceToSurface);
		P_GET_UBOOL(Z_Param_AvoidVolumes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateRandomPositionInRoomFromStream(Z_Param_Out_OutPosition,Z_Param_Out_RandomStream,Z_Param_MinDistanceToSurface,Z_Param_AvoidVolumes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execGenerateRandomPositionInRoom)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistanceToSurface);
		P_GET_UBOOL(Z_Param_AvoidVolumes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateRandomPositionInRoom(Z_Param_Out_OutPosition,Z_Param_MinDistanceToSurface,Z_Param_AvoidVolumes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRUKRoom::execIsPositionInRoom)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_UBOOL(Z_Param_TestVerticalBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPositionInRoom(Z_Param_Out_Position,Z_Param_TestVerticalBounds);
		P_NATIVE_END;
	}
	void AMRUKRoom::StaticRegisterNativesAMRUKRoom()
	{
		UClass* Class = AMRUKRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAnchorToRoom", &AMRUKRoom::execAddAnchorToRoom },
			{ "AttachProceduralMeshToWalls", &AMRUKRoom::execAttachProceduralMeshToWalls },
			{ "ClearRoom", &AMRUKRoom::execClearRoom },
			{ "ComputeWallMeshUVAdjustments", &AMRUKRoom::execComputeWallMeshUVAdjustments },
			{ "DoesRoomHave", &AMRUKRoom::execDoesRoomHave },
			{ "GenerateRandomPositionInRoom", &AMRUKRoom::execGenerateRandomPositionInRoom },
			{ "GenerateRandomPositionInRoomFromStream", &AMRUKRoom::execGenerateRandomPositionInRoomFromStream },
			{ "GetAnchorsByLabel", &AMRUKRoom::execGetAnchorsByLabel },
			{ "GetBestPoseFromRaycast", &AMRUKRoom::execGetBestPoseFromRaycast },
			{ "GetFirstAnchorByLabel", &AMRUKRoom::execGetFirstAnchorByLabel },
			{ "GetKeyWall", &AMRUKRoom::execGetKeyWall },
			{ "GetLargestSurface", &AMRUKRoom::execGetLargestSurface },
			{ "IsPositionInRoom", &AMRUKRoom::execIsPositionInRoom },
			{ "IsPositionInSceneVolume", &AMRUKRoom::execIsPositionInSceneVolume },
			{ "IsWallAnchor", &AMRUKRoom::execIsWallAnchor },
			{ "LoadGlobalMeshFromDevice", &AMRUKRoom::execLoadGlobalMeshFromDevice },
			{ "LoadGlobalMeshFromJsonString", &AMRUKRoom::execLoadGlobalMeshFromJsonString },
			{ "Raycast", &AMRUKRoom::execRaycast },
			{ "RaycastAll", &AMRUKRoom::execRaycastAll },
			{ "SpawnInterior", &AMRUKRoom::execSpawnInterior },
			{ "SpawnInteriorFromStream", &AMRUKRoom::execSpawnInteriorFromStream },
			{ "TryGetClosestSeatPose", &AMRUKRoom::execTryGetClosestSeatPose },
			{ "TryGetClosestSurfacePosition", &AMRUKRoom::execTryGetClosestSurfacePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics
	{
		struct MRUKRoom_eventAddAnchorToRoom_Parms
		{
			AMRUKAnchor* Anchor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventAddAnchorToRoom_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::NewProp_Anchor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "AddAnchorToRoom", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::MRUKRoom_eventAddAnchorToRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::MRUKRoom_eventAddAnchorToRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics
	{
		struct MRUKRoom_eventAttachProceduralMeshToWalls_Parms
		{
			TArray<FMRUKTexCoordModes> WallTextureCoordinateModes;
			UMaterialInterface* ProceduralMaterial;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallTextureCoordinateModes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallTextureCoordinateModes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WallTextureCoordinateModes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_WallTextureCoordinateModes_Inner = { "WallTextureCoordinateModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKTexCoordModes, METADATA_PARAMS(0, nullptr) }; // 1681209667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_WallTextureCoordinateModes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_WallTextureCoordinateModes = { "WallTextureCoordinateModes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventAttachProceduralMeshToWalls_Parms, WallTextureCoordinateModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_WallTextureCoordinateModes_MetaData), Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_WallTextureCoordinateModes_MetaData) }; // 1681209667
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventAttachProceduralMeshToWalls_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_WallTextureCoordinateModes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_WallTextureCoordinateModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::NewProp_ProceduralMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "WallTextureCoordinateModes" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Attach a procedural mesh to the walls. This is done at the room level to ensure the UV coordinates\n\x09 * can be done in a seamless way if desired.\n\x09 * @param WallTextureCoordinateModes Mode of the wall texture coordinates.\n\x09 * @param ProceduralMaterial Material to apply on top of the procedural mesh.\n\x09 */" },
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Attach a procedural mesh to the walls. This is done at the room level to ensure the UV coordinates\ncan be done in a seamless way if desired.\n@param WallTextureCoordinateModes Mode of the wall texture coordinates.\n@param ProceduralMaterial Material to apply on top of the procedural mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "AttachProceduralMeshToWalls", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::MRUKRoom_eventAttachProceduralMeshToWalls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::MRUKRoom_eventAttachProceduralMeshToWalls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_ClearRoom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_ClearRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Clear all anchors from the room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Clear all anchors from the room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_ClearRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "ClearRoom", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_ClearRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_ClearRoom_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMRUKRoom_ClearRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_ClearRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics
	{
		struct MRUKRoom_eventComputeWallMeshUVAdjustments_Parms
		{
			TArray<FMRUKTexCoordModes> WallTextureCoordinateModes;
			TArray<FMRUKAnchorWithPlaneUVs> OutAnchorsWithPlaneUVs;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallTextureCoordinateModes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallTextureCoordinateModes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WallTextureCoordinateModes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAnchorsWithPlaneUVs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnchorsWithPlaneUVs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_WallTextureCoordinateModes_Inner = { "WallTextureCoordinateModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKTexCoordModes, METADATA_PARAMS(0, nullptr) }; // 1681209667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_WallTextureCoordinateModes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_WallTextureCoordinateModes = { "WallTextureCoordinateModes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventComputeWallMeshUVAdjustments_Parms, WallTextureCoordinateModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_WallTextureCoordinateModes_MetaData), Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_WallTextureCoordinateModes_MetaData) }; // 1681209667
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_OutAnchorsWithPlaneUVs_Inner = { "OutAnchorsWithPlaneUVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs, METADATA_PARAMS(0, nullptr) }; // 2378308804
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_OutAnchorsWithPlaneUVs = { "OutAnchorsWithPlaneUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventComputeWallMeshUVAdjustments_Parms, OutAnchorsWithPlaneUVs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2378308804
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_WallTextureCoordinateModes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_WallTextureCoordinateModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_OutAnchorsWithPlaneUVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::NewProp_OutAnchorsWithPlaneUVs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Compute the wall mesh texture coordinate adjustments that are needed to generate proper texture coordinates for the walls.\n\x09 * @param WallTextureCoordinateModes The texture coordinate mode to use for the walls.\n\x09 * @param OutAnchorsWithPlaneUVs     The computed texture coordinate adjustment with the wall anchor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Compute the wall mesh texture coordinate adjustments that are needed to generate proper texture coordinates for the walls.\n@param WallTextureCoordinateModes The texture coordinate mode to use for the walls.\n@param OutAnchorsWithPlaneUVs     The computed texture coordinate adjustment with the wall anchor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "ComputeWallMeshUVAdjustments", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::MRUKRoom_eventComputeWallMeshUVAdjustments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::MRUKRoom_eventComputeWallMeshUVAdjustments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics
	{
		struct MRUKRoom_eventDoesRoomHave_Parms
		{
			TArray<FString> Labels;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Labels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_Labels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventDoesRoomHave_Parms, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_Labels_MetaData), Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_Labels_MetaData) };
	void Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventDoesRoomHave_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventDoesRoomHave_Parms), &Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_Labels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_Labels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Check if the room does have any of the labels.\n\x09 * @param Labels The labels to check.\n\x09 * @return Whether the label was found in the room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Check if the room does have any of the labels.\n@param Labels The labels to check.\n@return Whether the label was found in the room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "DoesRoomHave", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::MRUKRoom_eventDoesRoomHave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::MRUKRoom_eventDoesRoomHave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_DoesRoomHave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_DoesRoomHave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics
	{
		struct MRUKRoom_eventGenerateRandomPositionInRoom_Parms
		{
			FVector OutPosition;
			float MinDistanceToSurface;
			bool AvoidVolumes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToSurface;
		static void NewProp_AvoidVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AvoidVolumes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoom_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_MinDistanceToSurface = { "MinDistanceToSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoom_Parms, MinDistanceToSurface), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_AvoidVolumes_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionInRoom_Parms*)Obj)->AvoidVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_AvoidVolumes = { "AvoidVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionInRoom_Parms), &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_AvoidVolumes_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionInRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionInRoom_Parms), &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_MinDistanceToSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_AvoidVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Generate a uniform random position within the room.\n\x09 * @param OutPosition\x09\x09\x09""Contains the randomly generated position.\n\x09 * @param MinDistanceToSurface\x09The minimum distance between the generated position and the closest surface/volume.\n\x09 * @param AvoidVolumes\x09\x09\x09If true then the position will not be inside a volume and min distance away from it.\n\x09 * @return\x09\x09\x09\x09\x09\x09Return true if success otherwise false. If this fails it can be because the min distance to surface is too large.\n\x09 */" },
		{ "CPP_Default_AvoidVolumes", "false" },
		{ "CPP_Default_MinDistanceToSurface", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Generate a uniform random position within the room.\n@param OutPosition                   Contains the randomly generated position.\n@param MinDistanceToSurface  The minimum distance between the generated position and the closest surface/volume.\n@param AvoidVolumes                  If true then the position will not be inside a volume and min distance away from it.\n@return                                              Return true if success otherwise false. If this fails it can be because the min distance to surface is too large." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "GenerateRandomPositionInRoom", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::MRUKRoom_eventGenerateRandomPositionInRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::MRUKRoom_eventGenerateRandomPositionInRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics
	{
		struct MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms
		{
			FVector OutPosition;
			FRandomStream RandomStream;
			float MinDistanceToSurface;
			bool AvoidVolumes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToSurface;
		static void NewProp_AvoidVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AvoidVolumes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_RandomStream_MetaData), Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_RandomStream_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_MinDistanceToSurface = { "MinDistanceToSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms, MinDistanceToSurface), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_AvoidVolumes_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms*)Obj)->AvoidVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_AvoidVolumes = { "AvoidVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms), &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_AvoidVolumes_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms), &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_MinDistanceToSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_AvoidVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Generate a uniform random position within the room from a random stream.\n\x09 * @param OutPosition\x09\x09\x09""Contains the randomly generated position.\n\x09 * @param RandomStream\x09\x09\x09""A random generator used to generate the position on the plane.\n\x09 * @param MinDistanceToSurface\x09The minimum distance between the generated position and the closest surface/volume.\n\x09 * @param AvoidVolumes\x09\x09\x09If true then the position will not be inside a volume and min distance away from it.\n\x09 * @return\x09\x09\x09\x09\x09\x09Return true if success otherwise false. If this fails it can be because the min distance to surface is too large.\n\x09 */" },
		{ "CPP_Default_AvoidVolumes", "false" },
		{ "CPP_Default_MinDistanceToSurface", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Generate a uniform random position within the room from a random stream.\n@param OutPosition                   Contains the randomly generated position.\n@param RandomStream                  A random generator used to generate the position on the plane.\n@param MinDistanceToSurface  The minimum distance between the generated position and the closest surface/volume.\n@param AvoidVolumes                  If true then the position will not be inside a volume and min distance away from it.\n@return                                              Return true if success otherwise false. If this fails it can be because the min distance to surface is too large." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "GenerateRandomPositionInRoomFromStream", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::MRUKRoom_eventGenerateRandomPositionInRoomFromStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics
	{
		struct MRUKRoom_eventGetAnchorsByLabel_Parms
		{
			FString Label;
			TArray<AMRUKAnchor*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetAnchorsByLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_Label_MetaData), Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetAnchorsByLabel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Finds all anchors in this room that have the given label attached.\n\x09 * @param Label The label to search for.\n\x09 * @return      An array off anchors with the given label.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Finds all anchors in this room that have the given label attached.\n@param Label The label to search for.\n@return      An array off anchors with the given label." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "GetAnchorsByLabel", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::MRUKRoom_eventGetAnchorsByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::MRUKRoom_eventGetAnchorsByLabel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics
	{
		struct MRUKRoom_eventGetBestPoseFromRaycast_Parms
		{
			FVector RayOrigin;
			FVector RayDirection;
			double MaxDist;
			FMRUKLabelFilter LabelFilter;
			FTransform OutPose;
			EMRUKPositioningMethod PositioningMethod;
			AMRUKAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PositioningMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PositioningMethod;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayOrigin_MetaData), Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayOrigin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayDirection_MetaData), Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayDirection_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_LabelFilter_MetaData), Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_LabelFilter_MetaData) }; // 1424266031
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_OutPose = { "OutPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, OutPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_PositioningMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_PositioningMethod = { "PositioningMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, PositioningMethod), Z_Construct_UEnum_MRUtilityKit_EMRUKPositioningMethod, METADATA_PARAMS(0, nullptr) }; // 1716648107
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetBestPoseFromRaycast_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_RayDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_MaxDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_LabelFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_OutPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_PositioningMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_PositioningMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Get a suggested pose (position & rotation) from a raycast to place objects on surfaces in the scene.\n\x09 * There are different positioning modes available. Default just uses the position where the raycast\n\x09 * hit the object. Edge snaps the position to the edge that is nearest to the user and Center simply\n\x09 * centers the position on top of the surface.\n\x09 * @param RayOrigin         The origin of the ray.\n\x09 * @param RayDirection      The direction of the ray.\n\x09 * @param MaxDist           The maximum distance the ray should travel.\n\x09 * @param LabelFilter       The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutPose           The calculated pose.\n\x09 * @param PositioningMethod The method that should be used for determining the position on the surface.\n\x09 * @return                  The anchor that was hit by the ray if any. Otherwise a null pointer.\n\x09 */" },
		{ "CPP_Default_PositioningMethod", "Default" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Get a suggested pose (position & rotation) from a raycast to place objects on surfaces in the scene.\nThere are different positioning modes available. Default just uses the position where the raycast\nhit the object. Edge snaps the position to the edge that is nearest to the user and Center simply\ncenters the position on top of the surface.\n@param RayOrigin         The origin of the ray.\n@param RayDirection      The direction of the ray.\n@param MaxDist           The maximum distance the ray should travel.\n@param LabelFilter       The label filter can be used to include/exclude certain labels from the search.\n@param OutPose           The calculated pose.\n@param PositioningMethod The method that should be used for determining the position on the surface.\n@return                  The anchor that was hit by the ray if any. Otherwise a null pointer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "GetBestPoseFromRaycast", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::MRUKRoom_eventGetBestPoseFromRaycast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::MRUKRoom_eventGetBestPoseFromRaycast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics
	{
		struct MRUKRoom_eventGetFirstAnchorByLabel_Parms
		{
			FString Label;
			AMRUKAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetFirstAnchorByLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::NewProp_Label_MetaData), Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetFirstAnchorByLabel_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Finds the first anchor in this room that has the given label attached.\n\x09 * @param Label The label to search for.\n\x09 * @return      If found, the Anchor that has the label attached. Otherwise a null pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Finds the first anchor in this room that has the given label attached.\n@param Label The label to search for.\n@return      If found, the Anchor that has the label attached. Otherwise a null pointer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "GetFirstAnchorByLabel", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::MRUKRoom_eventGetFirstAnchorByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::MRUKRoom_eventGetFirstAnchorByLabel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics
	{
		struct MRUKRoom_eventGetKeyWall_Parms
		{
			double Tolerance;
			AMRUKAnchor* ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetKeyWall_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetKeyWall_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Return the longest wall in the room that has no other walls behind it.\n\x09 * @param Tolerance The tolerance to use when determing wall that are behind.\n\x09 * @return          The wall anchor that is the key wall in the room.\n\x09 */" },
		{ "CPP_Default_Tolerance", "0.100000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Return the longest wall in the room that has no other walls behind it.\n@param Tolerance The tolerance to use when determing wall that are behind.\n@return          The wall anchor that is the key wall in the room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "GetKeyWall", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::MRUKRoom_eventGetKeyWall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::MRUKRoom_eventGetKeyWall_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_GetKeyWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_GetKeyWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics
	{
		struct MRUKRoom_eventGetLargestSurface_Parms
		{
			FString Label;
			AMRUKAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetLargestSurface_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::NewProp_Label_MetaData), Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventGetLargestSurface_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Return the largest surface for a given label.\n\x09 * @param Label The label of the surfaces to search in.\n\x09 * @return      The anchor that has the largest surface if any. Otherwise, a null pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Return the largest surface for a given label.\n@param Label The label of the surfaces to search in.\n@return      The anchor that has the largest surface if any. Otherwise, a null pointer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "GetLargestSurface", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::MRUKRoom_eventGetLargestSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::MRUKRoom_eventGetLargestSurface_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_GetLargestSurface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_GetLargestSurface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics
	{
		struct MRUKRoom_eventIsPositionInRoom_Parms
		{
			FVector Position;
			bool TestVerticalBounds;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_TestVerticalBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TestVerticalBounds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsPositionInRoom_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_Position_MetaData), Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_Position_MetaData) };
	void Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_TestVerticalBounds_SetBit(void* Obj)
	{
		((MRUKRoom_eventIsPositionInRoom_Parms*)Obj)->TestVerticalBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_TestVerticalBounds = { "TestVerticalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventIsPositionInRoom_Parms), &Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_TestVerticalBounds_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventIsPositionInRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventIsPositionInRoom_Parms), &Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_TestVerticalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Check whether the position is inside the room or not.\n\x09 * @param Position           The position in world space to check.\n\x09 * @param TestVerticalBounds Whether the room should be constrained by vertical bounds or not in the check.\n\x09 * @return                   Whether the position is inside the room or not.\n\x09 */" },
		{ "CPP_Default_TestVerticalBounds", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Check whether the position is inside the room or not.\n@param Position           The position in world space to check.\n@param TestVerticalBounds Whether the room should be constrained by vertical bounds or not in the check.\n@return                   Whether the position is inside the room or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "IsPositionInRoom", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::MRUKRoom_eventIsPositionInRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::MRUKRoom_eventIsPositionInRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics
	{
		struct MRUKRoom_eventIsPositionInSceneVolume_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsPositionInSceneVolume_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_WorldPosition_MetaData), Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_WorldPosition_MetaData) };
	void Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_TestVerticalBounds_SetBit(void* Obj)
	{
		((MRUKRoom_eventIsPositionInSceneVolume_Parms*)Obj)->TestVerticalBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_TestVerticalBounds = { "TestVerticalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventIsPositionInSceneVolume_Parms), &Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_TestVerticalBounds_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsPositionInSceneVolume_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsPositionInSceneVolume_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_TestVerticalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Checks if the given position is on or inside of any scene volume in the room.\n\x09 * Floor, ceiling and wall anchors will be excluded from the search.\n\x09 * @param WorldPosition      The position in world space to check\n\x09 * @param TestVerticalBounds Whether the vertical bounds should be checked or not\n\x09 * @param Tolerance          Tolerance\n\x09 * @return\x09\x09\x09\x09\x09 The anchor the WorldPosition is in. A null pointer otherwise.\n\x09 */" },
		{ "CPP_Default_TestVerticalBounds", "true" },
		{ "CPP_Default_Tolerance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Checks if the given position is on or inside of any scene volume in the room.\nFloor, ceiling and wall anchors will be excluded from the search.\n@param WorldPosition      The position in world space to check\n@param TestVerticalBounds Whether the vertical bounds should be checked or not\n@param Tolerance          Tolerance\n@return                                       The anchor the WorldPosition is in. A null pointer otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "IsPositionInSceneVolume", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::MRUKRoom_eventIsPositionInSceneVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::MRUKRoom_eventIsPositionInSceneVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics
	{
		struct MRUKRoom_eventIsWallAnchor_Parms
		{
			AMRUKAnchor* Anchor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventIsWallAnchor_Parms, Anchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventIsWallAnchor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventIsWallAnchor_Parms), &Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::NewProp_Anchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Check if the given anchor is a wall anchor.\n\x09 * @param Anchor The anchor to check.\n\x09 * @return       Whether the anchor is a wall anchor or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Check if the given anchor is a wall anchor.\n@param Anchor The anchor to check.\n@return       Whether the anchor is a wall anchor or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "IsWallAnchor", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::MRUKRoom_eventIsWallAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::MRUKRoom_eventIsWallAnchor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_IsWallAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_IsWallAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics
	{
		struct MRUKRoom_eventLoadGlobalMeshFromDevice_Parms
		{
			UMaterialInterface* Material;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventLoadGlobalMeshFromDevice_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventLoadGlobalMeshFromDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventLoadGlobalMeshFromDevice_Parms), &Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load the triangle mesh of the global mesh anchor.\n\x09 * @param Material The Material to show if the global mesh is visible.\n\x09 * @return         On success true, otherwise false.\n\x09 */" },
		{ "CPP_Default_Material", "None" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Load the triangle mesh of the global mesh anchor.\n@param Material The Material to show if the global mesh is visible.\n@return         On success true, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "LoadGlobalMeshFromDevice", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::MRUKRoom_eventLoadGlobalMeshFromDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::MRUKRoom_eventLoadGlobalMeshFromDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics
	{
		struct MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms
		{
			FString JsonString;
			UMaterialInterface* Material;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms), &Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Load the triangle mesh of the global mesh anchor.\n\x09 * @param JsonString The string with the JSON data.\n\x09 * @param Material   Material to apply on the global mesh.\n\x09 * @return           On Success true, otherwise false.\n\x09 */" },
		{ "CPP_Default_Material", "None" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Load the triangle mesh of the global mesh anchor.\n@param JsonString The string with the JSON data.\n@param Material   Material to apply on the global mesh.\n@return           On Success true, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "LoadGlobalMeshFromJsonString", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::MRUKRoom_eventLoadGlobalMeshFromJsonString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_Raycast_Statics
	{
		struct MRUKRoom_eventRaycast_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Origin_MetaData), Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Origin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_LabelFilter_MetaData), Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_LabelFilter_MetaData) }; // 1424266031
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, OutHit), Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // 1662470029
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycast_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_MaxDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_LabelFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_OutHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Cast a ray and return the closest hit anchor\n\x09 * @param Origin      Origin The origin of the ray.\n\x09 * @param Direction   Direction The direction of the ray.\n\x09 * @param MaxDist     The maximum distance the ray should travel.\n\x09 * @param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutHit      The closest hit.\n\x09 * @return            The anchor that the ray hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Cast a ray and return the closest hit anchor\n@param Origin      Origin The origin of the ray.\n@param Direction   Direction The direction of the ray.\n@param MaxDist     The maximum distance the ray should travel.\n@param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n@param OutHit      The closest hit.\n@return            The anchor that the ray hit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "Raycast", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::MRUKRoom_eventRaycast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::MRUKRoom_eventRaycast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_Raycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_Raycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics
	{
		struct MRUKRoom_eventRaycastAll_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Origin_MetaData), Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Origin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_MaxDist = { "MaxDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, MaxDist), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_LabelFilter_MetaData), Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_LabelFilter_MetaData) }; // 1424266031
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKHit, METADATA_PARAMS(0, nullptr) }; // 1662470029
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1662470029
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_OutAnchors_Inner = { "OutAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_OutAnchors = { "OutAnchors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventRaycastAll_Parms, OutAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRUKRoom_eventRaycastAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventRaycastAll_Parms), &Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_MaxDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_LabelFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_OutHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_OutHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_OutAnchors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_OutAnchors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Cast a ray and collect hits against the volume and plane bounds in this room. The order of the hits in the array is not specified.\n\x09 * @param Origin      Origin The origin of the ray.\n\x09 * @param Direction   Direction The direction of the ray.\n\x09 * @param MaxDist     The maximum distance the ray should travel.\n\x09 * @param OutHits     The hits the ray collected.\n\x09 * @param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n\x09 * @param OutAnchors  The anchors that were hit. Each anchor in this array corresponds to a entry at the same position in OutHits.\n\x09 * @return            Whether the ray hit anything\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Cast a ray and collect hits against the volume and plane bounds in this room. The order of the hits in the array is not specified.\n@param Origin      Origin The origin of the ray.\n@param Direction   Direction The direction of the ray.\n@param MaxDist     The maximum distance the ray should travel.\n@param OutHits     The hits the ray collected.\n@param LabelFilter The label filter can be used to include/exclude certain labels from the search.\n@param OutAnchors  The anchors that were hit. Each anchor in this array corresponds to a entry at the same position in OutHits.\n@return            Whether the ray hit anything" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "RaycastAll", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::MRUKRoom_eventRaycastAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::MRUKRoom_eventRaycastAll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_RaycastAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_RaycastAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics
	{
		struct MRUKRoom_eventSpawnInterior_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 2822779831
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInterior_Parms, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups_MetaData), Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups_MetaData) }; // 2822779831
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInterior_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((MRUKRoom_eventSpawnInterior_Parms*)Obj)->ShouldFallbackToProcedural = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventSpawnInterior_Parms), &Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInterior_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_SpawnGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ProceduralMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ShouldFallbackToProcedural,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawn meshes on the position of the anchors of the room.\n\x09 * The actors should have Z as up Y as right and X as forward.\n\x09 * The pivot point should be in the bottom center.\n\x09 * @param SpawnGroups                A map wich tells to spawn which actor to a given label.\n\x09 * @param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n\x09 * @param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n\x09 * @return                           All spawned interior actors. \n\x09 */" },
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "CPP_Default_ShouldFallbackToProcedural", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Spawn meshes on the position of the anchors of the room.\nThe actors should have Z as up Y as right and X as forward.\nThe pivot point should be in the bottom center.\n@param SpawnGroups                A map wich tells to spawn which actor to a given label.\n@param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n@param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n@return                           All spawned interior actors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "SpawnInterior", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::MRUKRoom_eventSpawnInterior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::MRUKRoom_eventSpawnInterior_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_SpawnInterior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_SpawnInterior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics
	{
		struct MRUKRoom_eventSpawnInteriorFromStream_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_ValueProp = { "SpawnGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMRUKSpawnGroup, METADATA_PARAMS(0, nullptr) }; // 2822779831
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_Key_KeyProp = { "SpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups = { "SpawnGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, SpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_MetaData), Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_MetaData) }; // 2822779831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_RandomStream_MetaData), Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_RandomStream_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ProceduralMaterial = { "ProceduralMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, ProceduralMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ShouldFallbackToProcedural_SetBit(void* Obj)
	{
		((MRUKRoom_eventSpawnInteriorFromStream_Parms*)Obj)->ShouldFallbackToProcedural = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ShouldFallbackToProcedural = { "ShouldFallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKRoom_eventSpawnInteriorFromStream_Parms), &Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ShouldFallbackToProcedural_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventSpawnInteriorFromStream_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_SpawnGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ProceduralMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ShouldFallbackToProcedural,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Spawn meshes on the position of the anchors of the room from a random stream.\n\x09 * The actors should have Z as up Y as right and X as forward.\n\x09 * The pivot point should be in the bottom center.\n\x09 * @param SpawnGroups                A map wich tells to spawn which actor to a given label.\n\x09 * @param RandomStream               A random generator to choose randomly between actor classes if there a multiple for one label.\n\x09 * @param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n\x09 * @param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n\x09 * @return                           All spawned interior actors. \n\x09 */" },
		{ "CPP_Default_ProceduralMaterial", "None" },
		{ "CPP_Default_ShouldFallbackToProcedural", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Spawn meshes on the position of the anchors of the room from a random stream.\nThe actors should have Z as up Y as right and X as forward.\nThe pivot point should be in the bottom center.\n@param SpawnGroups                A map wich tells to spawn which actor to a given label.\n@param RandomStream               A random generator to choose randomly between actor classes if there a multiple for one label.\n@param ProceduralMaterial         Material to apply on top of the procedural mesh if any.\n@param ShouldFallbackToProcedural Whether or not it should by default fallback to generating a procedural mesh if no actor class has been specified for a label.\n@return                           All spawned interior actors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "SpawnInteriorFromStream", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::MRUKRoom_eventSpawnInteriorFromStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::MRUKRoom_eventSpawnInteriorFromStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics
	{
		struct MRUKRoom_eventTryGetClosestSeatPose_Parms
		{
			FVector RayOrigin;
			FVector RayDirection;
			FTransform OutSeatTransform;
			AMRUKAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSeatTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSeatPose_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayOrigin_MetaData), Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayOrigin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSeatPose_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayDirection_MetaData), Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayDirection_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_OutSeatTransform = { "OutSeatTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSeatPose_Parms, OutSeatTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSeatPose_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_RayDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_OutSeatTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Finds the closest seat given a ray.\n\x09 * @param RayOrigin The origin of the ray.\n\x09 * @param RayDirection The direction of the ray.\n\x09 * @param OutSeatTransform The seat pose.\n\x09 * @return If any seat was found the Anchor that has seats available will be returned. Otherwise a null pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Finds the closest seat given a ray.\n@param RayOrigin The origin of the ray.\n@param RayDirection The direction of the ray.\n@param OutSeatTransform The seat pose.\n@return If any seat was found the Anchor that has seats available will be returned. Otherwise a null pointer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "TryGetClosestSeatPose", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::MRUKRoom_eventTryGetClosestSeatPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::MRUKRoom_eventTryGetClosestSeatPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics
	{
		struct MRUKRoom_eventTryGetClosestSurfacePosition_Parms
		{
			FVector WorldPosition;
			FVector OutSurfacePosition;
			double OutSurfaceDistance;
			FMRUKLabelFilter LabelFilter;
			double MaxDistance;
			AMRUKAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSurfacePosition;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutSurfaceDistance;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition_MetaData), Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_OutSurfacePosition = { "OutSurfacePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, OutSurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_OutSurfaceDistance = { "OutSurfaceDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, OutSurfaceDistance), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, LabelFilter), Z_Construct_UScriptStruct_FMRUKLabelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter_MetaData), Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter_MetaData) }; // 1424266031
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKRoom_eventTryGetClosestSurfacePosition_Parms, ReturnValue), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_OutSurfacePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_OutSurfaceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_LabelFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LabelFilter" },
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 *  Get the position on the surface that is closest to the given position with respect to the distance.\n\x09 *  @param WorldPosition      The position in world space from which the closest surface point should be found.\n\x09 *  @param OutSurfacePosition The closest position on the closest surface if any. Otherwise zero.\n\x09 *  @param OutSurfaceDistance The distance between WorldPosition and OutSurfacePosition.\n\x09 *  @param LabelFilter        The label filter can be used to include/exclude certain labels from the search.\n\x09 *  @param MaxDistance        The distance to which a closest surface position should be searched. Everything below or equal to zero will be treated as infinity.\n\x09 *  @return                   The Anchor on which the closest surface position was found or a null pointer otherwise.\n\x09 */" },
		{ "CPP_Default_MaxDistance", "0.000000" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Get the position on the surface that is closest to the given position with respect to the distance.\n@param WorldPosition      The position in world space from which the closest surface point should be found.\n@param OutSurfacePosition The closest position on the closest surface if any. Otherwise zero.\n@param OutSurfaceDistance The distance between WorldPosition and OutSurfacePosition.\n@param LabelFilter        The label filter can be used to include/exclude certain labels from the search.\n@param MaxDistance        The distance to which a closest surface position should be searched. Everything below or equal to zero will be treated as infinity.\n@return                   The Anchor on which the closest surface position was found or a null pointer otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRUKRoom, nullptr, "TryGetClosestSurfacePosition", nullptr, nullptr, Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::MRUKRoom_eventTryGetClosestSurfacePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::MRUKRoom_eventTryGetClosestSurfacePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMRUKRoom);
	UClass* Z_Construct_UClass_AMRUKRoom_NoRegister()
	{
		return AMRUKRoom::StaticClass();
	}
	struct Z_Construct_UClass_AMRUKRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceQueryResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceQueryResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomEdges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomEdges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloorAnchor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CeilingAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CeilingAnchor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WallAnchors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallAnchors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WallAnchors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalMeshAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GlobalMeshAnchor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SeatAnchors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeatAnchors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SeatAnchors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllAnchors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllAnchors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllAnchors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRUKRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRUKRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKRoom_AddAnchorToRoom, "AddAnchorToRoom" }, // 4101913034
		{ &Z_Construct_UFunction_AMRUKRoom_AttachProceduralMeshToWalls, "AttachProceduralMeshToWalls" }, // 3193245221
		{ &Z_Construct_UFunction_AMRUKRoom_ClearRoom, "ClearRoom" }, // 2321199578
		{ &Z_Construct_UFunction_AMRUKRoom_ComputeWallMeshUVAdjustments, "ComputeWallMeshUVAdjustments" }, // 34339372
		{ &Z_Construct_UFunction_AMRUKRoom_DoesRoomHave, "DoesRoomHave" }, // 3811610737
		{ &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoom, "GenerateRandomPositionInRoom" }, // 964362718
		{ &Z_Construct_UFunction_AMRUKRoom_GenerateRandomPositionInRoomFromStream, "GenerateRandomPositionInRoomFromStream" }, // 3211983239
		{ &Z_Construct_UFunction_AMRUKRoom_GetAnchorsByLabel, "GetAnchorsByLabel" }, // 3928684102
		{ &Z_Construct_UFunction_AMRUKRoom_GetBestPoseFromRaycast, "GetBestPoseFromRaycast" }, // 1377954866
		{ &Z_Construct_UFunction_AMRUKRoom_GetFirstAnchorByLabel, "GetFirstAnchorByLabel" }, // 2482238354
		{ &Z_Construct_UFunction_AMRUKRoom_GetKeyWall, "GetKeyWall" }, // 2693391398
		{ &Z_Construct_UFunction_AMRUKRoom_GetLargestSurface, "GetLargestSurface" }, // 574506675
		{ &Z_Construct_UFunction_AMRUKRoom_IsPositionInRoom, "IsPositionInRoom" }, // 633757826
		{ &Z_Construct_UFunction_AMRUKRoom_IsPositionInSceneVolume, "IsPositionInSceneVolume" }, // 2852130528
		{ &Z_Construct_UFunction_AMRUKRoom_IsWallAnchor, "IsWallAnchor" }, // 4010488381
		{ &Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromDevice, "LoadGlobalMeshFromDevice" }, // 3385965034
		{ &Z_Construct_UFunction_AMRUKRoom_LoadGlobalMeshFromJsonString, "LoadGlobalMeshFromJsonString" }, // 1282837397
		{ &Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature, "OnAnchorCreated__DelegateSignature" }, // 1151920985
		{ &Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature, "OnAnchorRemoved__DelegateSignature" }, // 3943459588
		{ &Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature, "OnAnchorUpdated__DelegateSignature" }, // 187286278
		{ &Z_Construct_UFunction_AMRUKRoom_Raycast, "Raycast" }, // 1690791786
		{ &Z_Construct_UFunction_AMRUKRoom_RaycastAll, "RaycastAll" }, // 3311851158
		{ &Z_Construct_UFunction_AMRUKRoom_SpawnInterior, "SpawnInterior" }, // 3972877680
		{ &Z_Construct_UFunction_AMRUKRoom_SpawnInteriorFromStream, "SpawnInteriorFromStream" }, // 1041108349
		{ &Z_Construct_UFunction_AMRUKRoom_TryGetClosestSeatPose, "TryGetClosestSeatPose" }, // 75602038
		{ &Z_Construct_UFunction_AMRUKRoom_TryGetClosestSurfacePosition, "TryGetClosestSurfacePosition" }, // 640530984
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "DisplayName", "MR Utility Kit Room Actor" },
		{ "IncludePath", "MRUtilityKitRoom.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorUpdated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Event that gets fired if a anchor in this room was updated.\n\x09 * E.g. volume or plane changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Event that gets fired if a anchor in this room was updated.\nE.g. volume or plane changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorUpdated = { "OnAnchorUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, OnAnchorUpdated), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorUpdated_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorUpdated_MetaData) }; // 187286278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorCreated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Event that gets fired if a new anchor was created in this room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Event that gets fired if a new anchor was created in this room." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorCreated = { "OnAnchorCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, OnAnchorCreated), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorCreated_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorCreated_MetaData) }; // 1151920985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorRemoved_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Event that gets fired if a anchor gets removed from this room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Event that gets fired if a anchor gets removed from this room." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorRemoved = { "OnAnchorRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, OnAnchorRemoved), Z_Construct_UDelegateFunction_AMRUKRoom_OnAnchorRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorRemoved_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorRemoved_MetaData) }; // 3943459588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SpaceQueryResult_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The space query from which this room was built.\n\x09 * It contains the UUID of the room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "The space query from which this room was built.\nIt contains the UUID of the room." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SpaceQueryResult = { "SpaceQueryResult", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, SpaceQueryResult), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SpaceQueryResult_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SpaceQueryResult_MetaData) }; // 4111585324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomBounds_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Bounds of the room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Bounds of the room." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomBounds = { "RoomBounds", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, RoomBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomBounds_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomBounds_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomEdges_Inner = { "RoomEdges", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomEdges_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Edges of the room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "Edges of the room." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomEdges = { "RoomEdges", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, RoomEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomEdges_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomEdges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_FloorAnchor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The floor anchor of this room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "The floor anchor of this room." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_FloorAnchor = { "FloorAnchor", nullptr, (EPropertyFlags)0x0014000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, FloorAnchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_FloorAnchor_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_FloorAnchor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_CeilingAnchor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The ceiling anchor of this room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "The ceiling anchor of this room." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_CeilingAnchor = { "CeilingAnchor", nullptr, (EPropertyFlags)0x0014000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, CeilingAnchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_CeilingAnchor_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_CeilingAnchor_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_WallAnchors_Inner = { "WallAnchors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_WallAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The wall anchors of this room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "The wall anchors of this room." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_WallAnchors = { "WallAnchors", nullptr, (EPropertyFlags)0x0014000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, WallAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_WallAnchors_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_WallAnchors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_GlobalMeshAnchor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The global mesh anchor of this room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "The global mesh anchor of this room." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_GlobalMeshAnchor = { "GlobalMeshAnchor", nullptr, (EPropertyFlags)0x0014000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, GlobalMeshAnchor), Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_GlobalMeshAnchor_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_GlobalMeshAnchor_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SeatAnchors_Inner = { "SeatAnchors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SeatAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * All anchors which are possible to sit on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "All anchors which are possible to sit on." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SeatAnchors = { "SeatAnchors", nullptr, (EPropertyFlags)0x0014000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, SeatAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SeatAnchors_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SeatAnchors_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_AllAnchors_Inner = { "AllAnchors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMRUKAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRUKRoom_Statics::NewProp_AllAnchors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * All anchors of this room.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKitRoom.h" },
		{ "ToolTip", "All anchors of this room." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMRUKRoom_Statics::NewProp_AllAnchors = { "AllAnchors", nullptr, (EPropertyFlags)0x0014000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKRoom, AllAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::NewProp_AllAnchors_MetaData), Z_Construct_UClass_AMRUKRoom_Statics::NewProp_AllAnchors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_OnAnchorRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SpaceQueryResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomEdges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_RoomEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_FloorAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_CeilingAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_WallAnchors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_WallAnchors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_GlobalMeshAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SeatAnchors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_SeatAnchors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_AllAnchors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKRoom_Statics::NewProp_AllAnchors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRUKRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKRoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKRoom_Statics::ClassParams = {
		&AMRUKRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMRUKRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKRoom_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKRoom_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMRUKRoom()
	{
		if (!Z_Registration_Info_UClass_AMRUKRoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKRoom.OuterSingleton, Z_Construct_UClass_AMRUKRoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMRUKRoom.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<AMRUKRoom>()
	{
		return AMRUKRoom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRUKRoom);
	AMRUKRoom::~AMRUKRoom() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::EnumInfo[] = {
		{ EMRUKPositioningMethod_StaticEnum, TEXT("EMRUKPositioningMethod"), &Z_Registration_Info_UEnum_EMRUKPositioningMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1716648107U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::ScriptStructInfo[] = {
		{ FMRUKAnchorWithPlaneUVs::StaticStruct, Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics::NewStructOps, TEXT("MRUKAnchorWithPlaneUVs"), &Z_Registration_Info_UScriptStruct_MRUKAnchorWithPlaneUVs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKAnchorWithPlaneUVs), 2378308804U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKRoom, AMRUKRoom::StaticClass, TEXT("AMRUKRoom"), &Z_Registration_Info_UClass_AMRUKRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKRoom), 895976496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_770146881(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS