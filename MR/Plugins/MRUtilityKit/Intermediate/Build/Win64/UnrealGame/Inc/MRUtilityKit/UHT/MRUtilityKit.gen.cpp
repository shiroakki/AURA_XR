// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKit/Public/MRUtilityKit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRUtilityKit() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSettings();
	MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSettings_NoRegister();
	MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU();
	MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV();
	MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite();
	MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus();
	MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode();
	MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKPlaneUV();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnActor();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup();
	MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKTexCoordModes();
	UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKInitStatus;
	static UEnum* EMRUKInitStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMRUKInitStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMRUKInitStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKInitStatus"));
		}
		return Z_Registration_Info_UEnum_EMRUKInitStatus.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKInitStatus>()
	{
		return EMRUKInitStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics::Enumerators[] = {
		{ "EMRUKInitStatus::None", (int64)EMRUKInitStatus::None },
		{ "EMRUKInitStatus::Busy", (int64)EMRUKInitStatus::Busy },
		{ "EMRUKInitStatus::Complete", (int64)EMRUKInitStatus::Complete },
		{ "EMRUKInitStatus::Failed", (int64)EMRUKInitStatus::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Busy.Comment", "/// Is busy Initializing.\n" },
		{ "Busy.Name", "EMRUKInitStatus::Busy" },
		{ "Busy.ToolTip", "Is busy Initializing." },
		{ "Complete.Comment", "/// Has finished Initializing.\n" },
		{ "Complete.Name", "EMRUKInitStatus::Complete" },
		{ "Complete.ToolTip", "Has finished Initializing." },
		{ "Failed.Comment", "/// Failed to initialize.\n" },
		{ "Failed.Name", "EMRUKInitStatus::Failed" },
		{ "Failed.ToolTip", "Failed to initialize." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "None.Comment", "/// Not Initialized.\n" },
		{ "None.Name", "EMRUKInitStatus::None" },
		{ "None.ToolTip", "Not Initialized." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		"EMRUKInitStatus",
		"EMRUKInitStatus",
		Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus()
	{
		if (!Z_Registration_Info_UEnum_EMRUKInitStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKInitStatus.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKInitStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMRUKInitStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKCoordModeU;
	static UEnum* EMRUKCoordModeU_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMRUKCoordModeU.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMRUKCoordModeU.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKCoordModeU"));
		}
		return Z_Registration_Info_UEnum_EMRUKCoordModeU.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKCoordModeU>()
	{
		return EMRUKCoordModeU_StaticEnum();
	}
	struct Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics::Enumerators[] = {
		{ "EMRUKCoordModeU::Metric", (int64)EMRUKCoordModeU::Metric },
		{ "EMRUKCoordModeU::MetricSeamless", (int64)EMRUKCoordModeU::MetricSeamless },
		{ "EMRUKCoordModeU::MaintainAspectRatio", (int64)EMRUKCoordModeU::MaintainAspectRatio },
		{ "EMRUKCoordModeU::MaintainAspectRatioSeamless", (int64)EMRUKCoordModeU::MaintainAspectRatioSeamless },
		{ "EMRUKCoordModeU::Stretch", (int64)EMRUKCoordModeU::Stretch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MaintainAspectRatio.Comment", "/// The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained.\n" },
		{ "MaintainAspectRatio.Name", "EMRUKCoordModeU::MaintainAspectRatio" },
		{ "MaintainAspectRatio.ToolTip", "The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained." },
		{ "MaintainAspectRatioSeamless.Comment", "/// The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained but are adjusted to end on a whole number to avoid seams.\n" },
		{ "MaintainAspectRatioSeamless.Name", "EMRUKCoordModeU::MaintainAspectRatioSeamless" },
		{ "MaintainAspectRatioSeamless.ToolTip", "The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained but are adjusted to end on a whole number to avoid seams." },
		{ "Metric.Comment", "/// The texture coordinates start at 0 and increase by 1 unit every meter.\n" },
		{ "Metric.Name", "EMRUKCoordModeU::Metric" },
		{ "Metric.ToolTip", "The texture coordinates start at 0 and increase by 1 unit every meter." },
		{ "MetricSeamless.Comment", "/// The texture coordinates start at 0 and increase by 1 unit every meter but are adjusted to end on a whole number to avoid seams.\n" },
		{ "MetricSeamless.Name", "EMRUKCoordModeU::MetricSeamless" },
		{ "MetricSeamless.ToolTip", "The texture coordinates start at 0 and increase by 1 unit every meter but are adjusted to end on a whole number to avoid seams." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "Stretch.Comment", "/// The texture coordinates range from 0 to 1.\n" },
		{ "Stretch.Name", "EMRUKCoordModeU::Stretch" },
		{ "Stretch.ToolTip", "The texture coordinates range from 0 to 1." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		"EMRUKCoordModeU",
		"EMRUKCoordModeU",
		Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU()
	{
		if (!Z_Registration_Info_UEnum_EMRUKCoordModeU.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKCoordModeU.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMRUKCoordModeU.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKCoordModeV;
	static UEnum* EMRUKCoordModeV_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMRUKCoordModeV.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMRUKCoordModeV.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKCoordModeV"));
		}
		return Z_Registration_Info_UEnum_EMRUKCoordModeV.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKCoordModeV>()
	{
		return EMRUKCoordModeV_StaticEnum();
	}
	struct Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics::Enumerators[] = {
		{ "EMRUKCoordModeV::Metric", (int64)EMRUKCoordModeV::Metric },
		{ "EMRUKCoordModeV::MaintainAspectRatio", (int64)EMRUKCoordModeV::MaintainAspectRatio },
		{ "EMRUKCoordModeV::Stretch", (int64)EMRUKCoordModeV::Stretch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MaintainAspectRatio.Comment", "/// The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained.\n" },
		{ "MaintainAspectRatio.Name", "EMRUKCoordModeV::MaintainAspectRatio" },
		{ "MaintainAspectRatio.ToolTip", "The texture coordinates are adjusted to the other dimensions to ensure the aspect ratio is maintained." },
		{ "Metric.Comment", "/// The texture coordinates start at 0 and increase by 1 unit every meter.\n" },
		{ "Metric.Name", "EMRUKCoordModeV::Metric" },
		{ "Metric.ToolTip", "The texture coordinates start at 0 and increase by 1 unit every meter." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "Stretch.Comment", "/// The texture coordinates range from 0 to 1.\n" },
		{ "Stretch.Name", "EMRUKCoordModeV::Stretch" },
		{ "Stretch.ToolTip", "The texture coordinates range from 0 to 1." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		"EMRUKCoordModeV",
		"EMRUKCoordModeV",
		Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV()
	{
		if (!Z_Registration_Info_UEnum_EMRUKCoordModeV.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKCoordModeV.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMRUKCoordModeV.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKSpawnerSelectionMode;
	static UEnum* EMRUKSpawnerSelectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMRUKSpawnerSelectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMRUKSpawnerSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKSpawnerSelectionMode"));
		}
		return Z_Registration_Info_UEnum_EMRUKSpawnerSelectionMode.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKSpawnerSelectionMode>()
	{
		return EMRUKSpawnerSelectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics::Enumerators[] = {
		{ "EMRUKSpawnerSelectionMode::Random", (int64)EMRUKSpawnerSelectionMode::Random },
		{ "EMRUKSpawnerSelectionMode::ClosestSize", (int64)EMRUKSpawnerSelectionMode::ClosestSize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClosestSize.Comment", "/// Pick the closest size.\n" },
		{ "ClosestSize.Name", "EMRUKSpawnerSelectionMode::ClosestSize" },
		{ "ClosestSize.ToolTip", "Pick the closest size." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "Random.Comment", "/// Pick one at random.\n" },
		{ "Random.Name", "EMRUKSpawnerSelectionMode::Random" },
		{ "Random.ToolTip", "Pick one at random." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		"EMRUKSpawnerSelectionMode",
		"EMRUKSpawnerSelectionMode",
		Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode()
	{
		if (!Z_Registration_Info_UEnum_EMRUKSpawnerSelectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKSpawnerSelectionMode.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMRUKSpawnerSelectionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKSpawnerScalingMode;
	static UEnum* EMRUKSpawnerScalingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMRUKSpawnerScalingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMRUKSpawnerScalingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKSpawnerScalingMode"));
		}
		return Z_Registration_Info_UEnum_EMRUKSpawnerScalingMode.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKSpawnerScalingMode>()
	{
		return EMRUKSpawnerScalingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics::Enumerators[] = {
		{ "EMRUKSpawnerScalingMode::Stretch", (int64)EMRUKSpawnerScalingMode::Stretch },
		{ "EMRUKSpawnerScalingMode::UniformScaling", (int64)EMRUKSpawnerScalingMode::UniformScaling },
		{ "EMRUKSpawnerScalingMode::UniformXYScale", (int64)EMRUKSpawnerScalingMode::UniformXYScale },
		{ "EMRUKSpawnerScalingMode::NoScaling", (int64)EMRUKSpawnerScalingMode::NoScaling },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "NoScaling.Comment", "/// Don't perform any scaling.\n" },
		{ "NoScaling.Name", "EMRUKSpawnerScalingMode::NoScaling" },
		{ "NoScaling.ToolTip", "Don't perform any scaling." },
		{ "Stretch.Comment", "/// Stretch each axis to exactly match the size of the Plane/Volume.\n" },
		{ "Stretch.Name", "EMRUKSpawnerScalingMode::Stretch" },
		{ "Stretch.ToolTip", "Stretch each axis to exactly match the size of the Plane/Volume." },
		{ "UniformScaling.Comment", "/// Scale each axis by the same amount to maintain the correct aspect ratio.\n" },
		{ "UniformScaling.Name", "EMRUKSpawnerScalingMode::UniformScaling" },
		{ "UniformScaling.ToolTip", "Scale each axis by the same amount to maintain the correct aspect ratio." },
		{ "UniformXYScale.Comment", "/// Scale the X and Y axes uniformly but the Z scale can be different.\n" },
		{ "UniformXYScale.Name", "EMRUKSpawnerScalingMode::UniformXYScale" },
		{ "UniformXYScale.ToolTip", "Scale the X and Y axes uniformly but the Z scale can be different." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		"EMRUKSpawnerScalingMode",
		"EMRUKSpawnerScalingMode",
		Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode()
	{
		if (!Z_Registration_Info_UEnum_EMRUKSpawnerScalingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKSpawnerScalingMode.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMRUKSpawnerScalingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRUKHit;
class UScriptStruct* FMRUKHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRUKHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRUKHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKHit, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("MRUKHit"));
	}
	return Z_Registration_Info_UScriptStruct_MRUKHit.OuterSingleton;
}
template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<FMRUKHit>()
{
	return FMRUKHit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMRUKHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKHit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRUKHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKHit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitPosition_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The position where the raycast hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "The position where the raycast hit." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitPosition = { "HitPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKHit, HitPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitPosition_MetaData), Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitNormal_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The normal of the surface that was hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "The normal of the surface that was hit." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKHit, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitNormal_MetaData), Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitNormal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitDistance_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The distance between the origin of the ray to the hit position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "The distance between the origin of the ray to the hit position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitDistance = { "HitDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKHit, HitDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitDistance_MetaData), Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMRUKHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKHit_Statics::NewProp_HitDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRUKHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		&NewStructOps,
		"MRUKHit",
		Z_Construct_UScriptStruct_FMRUKHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKHit_Statics::PropPointers),
		sizeof(FMRUKHit),
		alignof(FMRUKHit),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRUKHit_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKHit_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMRUKHit()
	{
		if (!Z_Registration_Info_UScriptStruct_MRUKHit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRUKHit.InnerSingleton, Z_Construct_UScriptStruct_FMRUKHit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MRUKHit.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRUKLabelFilter;
class UScriptStruct* FMRUKLabelFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRUKLabelFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRUKLabelFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKLabelFilter, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("MRUKLabelFilter"));
	}
	return Z_Registration_Info_UScriptStruct_MRUKLabelFilter.OuterSingleton;
}
template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<FMRUKLabelFilter>()
{
	return FMRUKLabelFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_IncludedLabels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludedLabels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludedLabels;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedLabels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedLabels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedLabels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKLabelFilter>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_IncludedLabels_Inner = { "IncludedLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_IncludedLabels_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * If included labels is not empty then the anchor must have at\n\x09 * least one of the labels in this list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "If included labels is not empty then the anchor must have at\nleast one of the labels in this list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_IncludedLabels = { "IncludedLabels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKLabelFilter, IncludedLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_IncludedLabels_MetaData), Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_IncludedLabels_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_ExcludedLabels_Inner = { "ExcludedLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_ExcludedLabels_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Anchors with any of the labels in this exclusion list\n\x09 * will be ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "Anchors with any of the labels in this exclusion list\nwill be ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_ExcludedLabels = { "ExcludedLabels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKLabelFilter, ExcludedLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_ExcludedLabels_MetaData), Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_ExcludedLabels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_IncludedLabels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_IncludedLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_ExcludedLabels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewProp_ExcludedLabels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		&NewStructOps,
		"MRUKLabelFilter",
		Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::PropPointers),
		sizeof(FMRUKLabelFilter),
		alignof(FMRUKLabelFilter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMRUKLabelFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_MRUKLabelFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRUKLabelFilter.InnerSingleton, Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MRUKLabelFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRUKPlaneUV;
class UScriptStruct* FMRUKPlaneUV::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRUKPlaneUV.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRUKPlaneUV.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKPlaneUV, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("MRUKPlaneUV"));
	}
	return Z_Registration_Info_UScriptStruct_MRUKPlaneUV.OuterSingleton;
}
template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<FMRUKPlaneUV>()
{
	return FMRUKPlaneUV::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKPlaneUV>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Offset applied to the UV texture coordinates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "Offset applied to the UV texture coordinates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKPlaneUV, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Offset_MetaData), Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Scale applied to the UV texture coordinates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "Scale applied to the UV texture coordinates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKPlaneUV, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Scale_MetaData), Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		&NewStructOps,
		"MRUKPlaneUV",
		Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::PropPointers),
		sizeof(FMRUKPlaneUV),
		alignof(FMRUKPlaneUV),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMRUKPlaneUV()
	{
		if (!Z_Registration_Info_UScriptStruct_MRUKPlaneUV.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRUKPlaneUV.InnerSingleton, Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MRUKPlaneUV.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRUKTexCoordModes;
class UScriptStruct* FMRUKTexCoordModes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRUKTexCoordModes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRUKTexCoordModes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKTexCoordModes, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("MRUKTexCoordModes"));
	}
	return Z_Registration_Info_UScriptStruct_MRUKTexCoordModes.OuterSingleton;
}
template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<FMRUKTexCoordModes>()
{
	return FMRUKTexCoordModes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_U_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_U;
		static const UECodeGen_Private::FBytePropertyParams NewProp_V_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKTexCoordModes>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_U_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_U_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Texture Coordinate mode for the U direction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "Texture Coordinate mode for the U direction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKTexCoordModes, U), Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeU, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_U_MetaData), Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_U_MetaData) }; // 3796428507
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_V_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_V_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Texture Coordinate mode for the V direction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "Texture Coordinate mode for the V direction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKTexCoordModes, V), Z_Construct_UEnum_MRUtilityKit_EMRUKCoordModeV, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_V_MetaData), Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_V_MetaData) }; // 304525442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_U_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_U,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_V_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewProp_V,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		&NewStructOps,
		"MRUKTexCoordModes",
		Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::PropPointers),
		sizeof(FMRUKTexCoordModes),
		alignof(FMRUKTexCoordModes),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMRUKTexCoordModes()
	{
		if (!Z_Registration_Info_UScriptStruct_MRUKTexCoordModes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRUKTexCoordModes.InnerSingleton, Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MRUKTexCoordModes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRUKSpawnActor;
class UScriptStruct* FMRUKSpawnActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRUKSpawnActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRUKSpawnActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKSpawnActor, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("MRUKSpawnActor"));
	}
	return Z_Registration_Info_UScriptStruct_MRUKSpawnActor.OuterSingleton;
}
template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<FMRUKSpawnActor>()
{
	return FMRUKSpawnActor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchAspectRatio_MetaData[];
#endif
		static void NewProp_MatchAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalculateFacingDirection_MetaData[];
#endif
		static void NewProp_CalculateFacingDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CalculateFacingDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScalingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScalingMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKSpawnActor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * The class of actor to spawn.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "The class of actor to spawn." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnActor, Actor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_Actor_MetaData), Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_MatchAspectRatio_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * When match aspect ratio is enabled then the actor will be rotated\n\x09 * to try and match the aspect ratio of the volume as closely as possible.\n\x09 * This is most useful for long and thin volumes, keep this disabled for\n\x09 * objects with an aspect ratio close to 1:1. Only applies to volumes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "When match aspect ratio is enabled then the actor will be rotated\nto try and match the aspect ratio of the volume as closely as possible.\nThis is most useful for long and thin volumes, keep this disabled for\nobjects with an aspect ratio close to 1:1. Only applies to volumes." },
	};
#endif
	void Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_MatchAspectRatio_SetBit(void* Obj)
	{
		((FMRUKSpawnActor*)Obj)->MatchAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_MatchAspectRatio = { "MatchAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMRUKSpawnActor), &Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_MatchAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_MatchAspectRatio_MetaData), Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_MatchAspectRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_CalculateFacingDirection_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * When calculate facing direction is enabled the actor will be rotated to\n\x09 * face away from the closest wall. If match aspect ratio is also enabled\n\x09 * then that will take precedence and it will be constrained to a choice\n\x09 * between 2 directions only. Only applies to volumes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "When calculate facing direction is enabled the actor will be rotated to\nface away from the closest wall. If match aspect ratio is also enabled\nthen that will take precedence and it will be constrained to a choice\nbetween 2 directions only. Only applies to volumes." },
	};
#endif
	void Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_CalculateFacingDirection_SetBit(void* Obj)
	{
		((FMRUKSpawnActor*)Obj)->CalculateFacingDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_CalculateFacingDirection = { "CalculateFacingDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMRUKSpawnActor), &Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_CalculateFacingDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_CalculateFacingDirection_MetaData), Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_CalculateFacingDirection_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_ScalingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_ScalingMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Set what scaling mode to apply to the actor. By default the actor will\n\x09 * be stretched to fit the size of the plane/volume. But in some cases\n\x09 * this may not be desirable and can be customized here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "Set what scaling mode to apply to the actor. By default the actor will\nbe stretched to fit the size of the plane/volume. But in some cases\nthis may not be desirable and can be customized here." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_ScalingMode = { "ScalingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnActor, ScalingMode), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerScalingMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_ScalingMode_MetaData), Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_ScalingMode_MetaData) }; // 220474819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_MatchAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_CalculateFacingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_ScalingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewProp_ScalingMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		&NewStructOps,
		"MRUKSpawnActor",
		Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::PropPointers),
		sizeof(FMRUKSpawnActor),
		alignof(FMRUKSpawnActor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnActor()
	{
		if (!Z_Registration_Info_UScriptStruct_MRUKSpawnActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRUKSpawnActor.InnerSingleton, Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MRUKSpawnActor.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKFallbackToProceduralOverwrite;
	static UEnum* EMRUKFallbackToProceduralOverwrite_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMRUKFallbackToProceduralOverwrite.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMRUKFallbackToProceduralOverwrite.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKFallbackToProceduralOverwrite"));
		}
		return Z_Registration_Info_UEnum_EMRUKFallbackToProceduralOverwrite.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKFallbackToProceduralOverwrite>()
	{
		return EMRUKFallbackToProceduralOverwrite_StaticEnum();
	}
	struct Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics::Enumerators[] = {
		{ "EMRUKFallbackToProceduralOverwrite::Default", (int64)EMRUKFallbackToProceduralOverwrite::Default },
		{ "EMRUKFallbackToProceduralOverwrite::Fallback", (int64)EMRUKFallbackToProceduralOverwrite::Fallback },
		{ "EMRUKFallbackToProceduralOverwrite::NoFallback", (int64)EMRUKFallbackToProceduralOverwrite::NoFallback },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/// Don't override the fallback to procedural standard behaviour.\n" },
		{ "Default.Name", "EMRUKFallbackToProceduralOverwrite::Default" },
		{ "Default.ToolTip", "Don't override the fallback to procedural standard behaviour." },
		{ "Fallback.Comment", "/// Fallback to a procedural mesh.\n" },
		{ "Fallback.Name", "EMRUKFallbackToProceduralOverwrite::Fallback" },
		{ "Fallback.ToolTip", "Fallback to a procedural mesh." },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "NoFallback.Comment", "/// Don't fallback to a procedural mesh.\n" },
		{ "NoFallback.Name", "EMRUKFallbackToProceduralOverwrite::NoFallback" },
		{ "NoFallback.ToolTip", "Don't fallback to a procedural mesh." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		"EMRUKFallbackToProceduralOverwrite",
		"EMRUKFallbackToProceduralOverwrite",
		Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite()
	{
		if (!Z_Registration_Info_UEnum_EMRUKFallbackToProceduralOverwrite.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKFallbackToProceduralOverwrite.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMRUKFallbackToProceduralOverwrite.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRUKSpawnGroup;
class UScriptStruct* FMRUKSpawnGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRUKSpawnGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRUKSpawnGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKSpawnGroup, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("MRUKSpawnGroup"));
	}
	return Z_Registration_Info_UScriptStruct_MRUKSpawnGroup.OuterSingleton;
}
template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<FMRUKSpawnGroup>()
{
	return FMRUKSpawnGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionMode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FallbackToProcedural_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackToProcedural_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FallbackToProcedural;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKSpawnGroup>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMRUKSpawnActor, METADATA_PARAMS(0, nullptr) }; // 1282255243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * List of actors to choose from, multiple actors can be specified and\n\x09 * the selection criteria will be determined by the SelectionMode option.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "List of actors to choose from, multiple actors can be specified and\nthe selection criteria will be determined by the SelectionMode option." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnGroup, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_Actors_MetaData), Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_Actors_MetaData) }; // 1282255243
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_SelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_SelectionMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Set the selection mode when multiple different actors are specified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "Set the selection mode when multiple different actors are specified." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_SelectionMode = { "SelectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnGroup, SelectionMode), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnerSelectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_SelectionMode_MetaData), Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_SelectionMode_MetaData) }; // 4176369937
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_FallbackToProcedural_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_FallbackToProcedural_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * Control if there should happen a fallback to spawning a procedural mesh\n\x09 * in case no actor class has been specified for this label. The global\n\x09 * fallback behaviour can be specified in the AMRUKAnchorActorSpawner.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "Control if there should happen a fallback to spawning a procedural mesh\nin case no actor class has been specified for this label. The global\nfallback behaviour can be specified in the AMRUKAnchorActorSpawner." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_FallbackToProcedural = { "FallbackToProcedural", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMRUKSpawnGroup, FallbackToProcedural), Z_Construct_UEnum_MRUtilityKit_EMRUKFallbackToProceduralOverwrite, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_FallbackToProcedural_MetaData), Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_FallbackToProcedural_MetaData) }; // 1233487843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_SelectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_SelectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_FallbackToProcedural_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewProp_FallbackToProcedural,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
		nullptr,
		&NewStructOps,
		"MRUKSpawnGroup",
		Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::PropPointers),
		sizeof(FMRUKSpawnGroup),
		alignof(FMRUKSpawnGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMRUKSpawnGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_MRUKSpawnGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRUKSpawnGroup.InnerSingleton, Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MRUKSpawnGroup.InnerSingleton;
	}
	void UMRUKSettings::StaticRegisterNativesUMRUKSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRUKSettings);
	UClass* Z_Construct_UClass_UMRUKSettings_NoRegister()
	{
		return UMRUKSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMRUKSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableWorldLock_MetaData[];
#endif
		static void NewProp_EnableWorldLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableWorldLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRUKSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the MRUtilityKit plugin.\n */" },
		{ "IncludePath", "MRUtilityKit.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for the MRUtilityKit plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRUKSettings_Statics::NewProp_EnableWorldLock_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "Comment", "/**\n\x09 * When world locking is enabled the position of the VR Pawn will be adjusted each frame to ensure\n\x09 * the room anchors are where they should be relative to the camera position. This is necessary to\n\x09 * ensure the position of the virtual objects in the world do not get out of sync with the real world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MRUtilityKit.h" },
		{ "ToolTip", "When world locking is enabled the position of the VR Pawn will be adjusted each frame to ensure\nthe room anchors are where they should be relative to the camera position. This is necessary to\nensure the position of the virtual objects in the world do not get out of sync with the real world." },
	};
#endif
	void Z_Construct_UClass_UMRUKSettings_Statics::NewProp_EnableWorldLock_SetBit(void* Obj)
	{
		((UMRUKSettings*)Obj)->EnableWorldLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRUKSettings_Statics::NewProp_EnableWorldLock = { "EnableWorldLock", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMRUKSettings), &Z_Construct_UClass_UMRUKSettings_Statics::NewProp_EnableWorldLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSettings_Statics::NewProp_EnableWorldLock_MetaData), Z_Construct_UClass_UMRUKSettings_Statics::NewProp_EnableWorldLock_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKSettings_Statics::NewProp_EnableWorldLock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRUKSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKSettings_Statics::ClassParams = {
		&UMRUKSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMRUKSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMRUKSettings()
	{
		if (!Z_Registration_Info_UClass_UMRUKSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKSettings.OuterSingleton, Z_Construct_UClass_UMRUKSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRUKSettings.OuterSingleton;
	}
	template<> MRUTILITYKIT_API UClass* StaticClass<UMRUKSettings>()
	{
		return UMRUKSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKSettings);
	UMRUKSettings::~UMRUKSettings() {}
	struct Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::EnumInfo[] = {
		{ EMRUKInitStatus_StaticEnum, TEXT("EMRUKInitStatus"), &Z_Registration_Info_UEnum_EMRUKInitStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 320048577U) },
		{ EMRUKCoordModeU_StaticEnum, TEXT("EMRUKCoordModeU"), &Z_Registration_Info_UEnum_EMRUKCoordModeU, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3796428507U) },
		{ EMRUKCoordModeV_StaticEnum, TEXT("EMRUKCoordModeV"), &Z_Registration_Info_UEnum_EMRUKCoordModeV, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 304525442U) },
		{ EMRUKSpawnerSelectionMode_StaticEnum, TEXT("EMRUKSpawnerSelectionMode"), &Z_Registration_Info_UEnum_EMRUKSpawnerSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4176369937U) },
		{ EMRUKSpawnerScalingMode_StaticEnum, TEXT("EMRUKSpawnerScalingMode"), &Z_Registration_Info_UEnum_EMRUKSpawnerScalingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 220474819U) },
		{ EMRUKFallbackToProceduralOverwrite_StaticEnum, TEXT("EMRUKFallbackToProceduralOverwrite"), &Z_Registration_Info_UEnum_EMRUKFallbackToProceduralOverwrite, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1233487843U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::ScriptStructInfo[] = {
		{ FMRUKHit::StaticStruct, Z_Construct_UScriptStruct_FMRUKHit_Statics::NewStructOps, TEXT("MRUKHit"), &Z_Registration_Info_UScriptStruct_MRUKHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKHit), 1662470029U) },
		{ FMRUKLabelFilter::StaticStruct, Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics::NewStructOps, TEXT("MRUKLabelFilter"), &Z_Registration_Info_UScriptStruct_MRUKLabelFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKLabelFilter), 1424266031U) },
		{ FMRUKPlaneUV::StaticStruct, Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics::NewStructOps, TEXT("MRUKPlaneUV"), &Z_Registration_Info_UScriptStruct_MRUKPlaneUV, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKPlaneUV), 2706445733U) },
		{ FMRUKTexCoordModes::StaticStruct, Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics::NewStructOps, TEXT("MRUKTexCoordModes"), &Z_Registration_Info_UScriptStruct_MRUKTexCoordModes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKTexCoordModes), 1681209667U) },
		{ FMRUKSpawnActor::StaticStruct, Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics::NewStructOps, TEXT("MRUKSpawnActor"), &Z_Registration_Info_UScriptStruct_MRUKSpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKSpawnActor), 1282255243U) },
		{ FMRUKSpawnGroup::StaticStruct, Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics::NewStructOps, TEXT("MRUKSpawnGroup"), &Z_Registration_Info_UScriptStruct_MRUKSpawnGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKSpawnGroup), 2822779831U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKSettings, UMRUKSettings::StaticClass, TEXT("UMRUKSettings"), &Z_Registration_Info_UClass_UMRUKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKSettings), 2281626438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_1387151754(TEXT("/Script/MRUtilityKit"),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MRUtilityKit_HostProject_Plugins_MRUtilityKit_Source_MRUtilityKit_Public_MRUtilityKit_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
