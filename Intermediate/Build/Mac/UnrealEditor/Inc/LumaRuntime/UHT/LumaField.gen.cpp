// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LumaRuntime/Public/LumaField.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLumaField() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3d();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUMARUNTIME_API UClass* Z_Construct_UClass_ALumaField();
	LUMARUNTIME_API UClass* Z_Construct_UClass_ALumaField_NoRegister();
	LUMARUNTIME_API UEnum* Z_Construct_UEnum_LumaRuntime_ELumaQualityMode();
	LUMARUNTIME_API UEnum* Z_Construct_UEnum_LumaRuntime_ELumaVersion();
	UPackage* Z_Construct_UPackage__Script_LumaRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELumaVersion;
	static UEnum* ELumaVersion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELumaVersion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELumaVersion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LumaRuntime_ELumaVersion, (UObject*)Z_Construct_UPackage__Script_LumaRuntime(), TEXT("ELumaVersion"));
		}
		return Z_Registration_Info_UEnum_ELumaVersion.OuterSingleton;
	}
	template<> LUMARUNTIME_API UEnum* StaticEnum<ELumaVersion>()
	{
		return ELumaVersion_StaticEnum();
	}
	struct Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics::Enumerators[] = {
		{ "ELumaVersion::V001_Initial_Release", (int64)ELumaVersion::V001_Initial_Release },
		{ "ELumaVersion::V002_Added_Crop_And_Exposure_Controls", (int64)ELumaVersion::V002_Added_Crop_And_Exposure_Controls },
		{ "ELumaVersion::V003_Crop_Rotation_And_Quality_Controls", (int64)ELumaVersion::V003_Crop_Rotation_And_Quality_Controls },
		{ "ELumaVersion::VersionPlusOne", (int64)ELumaVersion::VersionPlusOne },
		{ "ELumaVersion::LatestVersion", (int64)ELumaVersion::LatestVersion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LatestVersion.Name", "ELumaVersion::LatestVersion" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
		{ "V001_Initial_Release.Comment", "// Before any version changes were made in the plugin\n" },
		{ "V001_Initial_Release.Name", "ELumaVersion::V001_Initial_Release" },
		{ "V001_Initial_Release.ToolTip", "Before any version changes were made in the plugin" },
		{ "V002_Added_Crop_And_Exposure_Controls.Name", "ELumaVersion::V002_Added_Crop_And_Exposure_Controls" },
		{ "V003_Crop_Rotation_And_Quality_Controls.Name", "ELumaVersion::V003_Crop_Rotation_And_Quality_Controls" },
		{ "VersionPlusOne.Comment", "// -----<new versions can be added above this line>-------------------------------------------------\n// Add a new version if anything important changes in the Blueprint that might require users to update.\n" },
		{ "VersionPlusOne.Name", "ELumaVersion::VersionPlusOne" },
		{ "VersionPlusOne.ToolTip", "-----<new versions can be added above this line>-------------------------------------------------\nAdd a new version if anything important changes in the Blueprint that might require users to update." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LumaRuntime,
		nullptr,
		"ELumaVersion",
		"ELumaVersion",
		Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LumaRuntime_ELumaVersion()
	{
		if (!Z_Registration_Info_UEnum_ELumaVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELumaVersion.InnerSingleton, Z_Construct_UEnum_LumaRuntime_ELumaVersion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELumaVersion.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELumaQualityMode;
	static UEnum* ELumaQualityMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELumaQualityMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELumaQualityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LumaRuntime_ELumaQualityMode, (UObject*)Z_Construct_UPackage__Script_LumaRuntime(), TEXT("ELumaQualityMode"));
		}
		return Z_Registration_Info_UEnum_ELumaQualityMode.OuterSingleton;
	}
	template<> LUMARUNTIME_API UEnum* StaticEnum<ELumaQualityMode>()
	{
		return ELumaQualityMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics::Enumerators[] = {
		{ "ELumaQualityMode::Minimal", (int64)ELumaQualityMode::Minimal },
		{ "ELumaQualityMode::VeryLow", (int64)ELumaQualityMode::VeryLow },
		{ "ELumaQualityMode::Low", (int64)ELumaQualityMode::Low },
		{ "ELumaQualityMode::Mid", (int64)ELumaQualityMode::Mid },
		{ "ELumaQualityMode::High", (int64)ELumaQualityMode::High },
		{ "ELumaQualityMode::VeryHigh", (int64)ELumaQualityMode::VeryHigh },
		{ "ELumaQualityMode::Extreme", (int64)ELumaQualityMode::Extreme },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Extreme.Name", "ELumaQualityMode::Extreme" },
		{ "High.Name", "ELumaQualityMode::High" },
		{ "Low.Name", "ELumaQualityMode::Low" },
		{ "Mid.Name", "ELumaQualityMode::Mid" },
		{ "Minimal.Name", "ELumaQualityMode::Minimal" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
		{ "VeryHigh.Name", "ELumaQualityMode::VeryHigh" },
		{ "VeryLow.Name", "ELumaQualityMode::VeryLow" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LumaRuntime,
		nullptr,
		"ELumaQualityMode",
		"ELumaQualityMode",
		Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LumaRuntime_ELumaQualityMode()
	{
		if (!Z_Registration_Info_UEnum_ELumaQualityMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELumaQualityMode.InnerSingleton, Z_Construct_UEnum_LumaRuntime_ELumaQualityMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELumaQualityMode.InnerSingleton;
	}
	void ALumaField::StaticRegisterNativesALumaField()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALumaField);
	UClass* Z_Construct_UClass_ALumaField_NoRegister()
	{
		return ALumaField::StaticClass();
	}
	struct Z_Construct_UClass_ALumaField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumaMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LumaMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumaBaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LumaBaseMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exposure_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Exposure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QualityMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderFlagsSet_MetaData[];
#endif
		static void NewProp_LoaderFlagsSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LoaderFlagsSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasCropSupport_MetaData[];
#endif
		static void NewProp_HasCropSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasCropSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasExposureSupport_MetaData[];
#endif
		static void NewProp_HasExposureSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasExposureSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasQualitySupport_MetaData[];
#endif
		static void NewProp_HasQualitySupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasQualitySupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasCropRotationSupport_MetaData[];
#endif
		static void NewProp_HasCropRotationSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasCropRotationSupport;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Version_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VersionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALumaField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LumaRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "LumaField.h" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
		{ "PrioritizeCategories", "Luma Transform" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Hidden" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_LumaMaterialInstance_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_LumaMaterialInstance = { "LumaMaterialInstance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, LumaMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_LumaMaterialInstance_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_LumaMaterialInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_LumaBaseMaterial_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_LumaBaseMaterial = { "LumaBaseMaterial", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, LumaBaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_LumaBaseMaterial_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_LumaBaseMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_CropMin_MetaData[] = {
		{ "Category", "Luma" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "Comment", "/** Crop bounding box minimum. -2.0 extends towards the full range of the NeRF, -1.0 extends as far as the Blueprint size. */" },
		{ "DisplayName", "Crop Bounding Box Minimum" },
		{ "EditCondition", "HasCropSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
		{ "ToolTip", "Crop bounding box minimum. -2.0 extends towards the full range of the NeRF, -1.0 extends as far as the Blueprint size." },
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_CropMin = { "CropMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, CropMin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_CropMin_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_CropMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_CropMax_MetaData[] = {
		{ "Category", "Luma" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "Comment", "/** Crop bounding box maximum. 2.0 extends towards the full range of the NeRF, 1.0 extends as far as the Blueprint size. */" },
		{ "DisplayName", "Crop Bounding Box Maximum" },
		{ "EditCondition", "HasCropSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
		{ "ToolTip", "Crop bounding box maximum. 2.0 extends towards the full range of the NeRF, 1.0 extends as far as the Blueprint size." },
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_CropMax = { "CropMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, CropMax), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_CropMax_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_CropMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_CropCenter_MetaData[] = {
		{ "Category", "Luma" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "DisplayName", "Crop Bounding Center" },
		{ "EditCondition", "HasCropRotationSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_CropCenter = { "CropCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, CropCenter), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_CropCenter_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_CropCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_CropRotation_MetaData[] = {
		{ "Category", "Luma" },
		{ "DisplayName", "Crop Rotation" },
		{ "EditCondition", "HasCropRotationSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_CropRotation = { "CropRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, CropRotation), Z_Construct_UScriptStruct_FRotator3d, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_CropRotation_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_CropRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_Exposure_MetaData[] = {
		{ "Category", "Luma" },
		{ "Comment", "/** Exposure controls for this NeRF instance. Default is 1.0, 1.0, 1.0. */" },
		{ "DisplayName", "Exposure" },
		{ "EditCondition", "HasExposureSupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
		{ "ToolTip", "Exposure controls for this NeRF instance. Default is 1.0, 1.0, 1.0." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_Exposure = { "Exposure", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, Exposure), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_Exposure_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_Exposure_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_QualityMode_MetaData[] = {
		{ "Category", "Luma" },
		{ "DisplayName", "Quality" },
		{ "EditCondition", "HasQualitySupport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, QualityMode), Z_Construct_UEnum_LumaRuntime_ELumaQualityMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_QualityMode_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_QualityMode_MetaData) }; // 1111150970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_LoaderFlagsSet_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	void Z_Construct_UClass_ALumaField_Statics::NewProp_LoaderFlagsSet_SetBit(void* Obj)
	{
		((ALumaField*)Obj)->LoaderFlagsSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_LoaderFlagsSet = { "LoaderFlagsSet", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaField), &Z_Construct_UClass_ALumaField_Statics::NewProp_LoaderFlagsSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_LoaderFlagsSet_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_LoaderFlagsSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropSupport_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	void Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropSupport_SetBit(void* Obj)
	{
		((ALumaField*)Obj)->HasCropSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropSupport = { "HasCropSupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaField), &Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropSupport_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropSupport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_HasExposureSupport_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	void Z_Construct_UClass_ALumaField_Statics::NewProp_HasExposureSupport_SetBit(void* Obj)
	{
		((ALumaField*)Obj)->HasExposureSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_HasExposureSupport = { "HasExposureSupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaField), &Z_Construct_UClass_ALumaField_Statics::NewProp_HasExposureSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_HasExposureSupport_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_HasExposureSupport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_HasQualitySupport_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	void Z_Construct_UClass_ALumaField_Statics::NewProp_HasQualitySupport_SetBit(void* Obj)
	{
		((ALumaField*)Obj)->HasQualitySupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_HasQualitySupport = { "HasQualitySupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaField), &Z_Construct_UClass_ALumaField_Statics::NewProp_HasQualitySupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_HasQualitySupport_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_HasQualitySupport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropRotationSupport_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	void Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropRotationSupport_SetBit(void* Obj)
	{
		((ALumaField*)Obj)->HasCropRotationSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropRotationSupport = { "HasCropRotationSupport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaField), &Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropRotationSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropRotationSupport_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropRotationSupport_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_Version_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Luma" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, Version), Z_Construct_UEnum_LumaRuntime_ELumaVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_Version_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_Version_MetaData) }; // 2154411798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALumaField_Statics::NewProp_VersionInfo_MetaData[] = {
		{ "Category", "Luma" },
		{ "ModuleRelativePath", "Public/LumaField.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALumaField_Statics::NewProp_VersionInfo = { "VersionInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaField, VersionInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::NewProp_VersionInfo_MetaData), Z_Construct_UClass_ALumaField_Statics::NewProp_VersionInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALumaField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_LumaMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_LumaBaseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_CropMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_CropMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_CropCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_CropRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_Exposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_QualityMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_QualityMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_LoaderFlagsSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_HasExposureSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_HasQualitySupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_HasCropRotationSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_Version_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaField_Statics::NewProp_VersionInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALumaField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALumaField>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALumaField_Statics::ClassParams = {
		&ALumaField::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALumaField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::Class_MetaDataParams), Z_Construct_UClass_ALumaField_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaField_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALumaField()
	{
		if (!Z_Registration_Info_UClass_ALumaField.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALumaField.OuterSingleton, Z_Construct_UClass_ALumaField_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALumaField.OuterSingleton;
	}
	template<> LUMARUNTIME_API UClass* StaticClass<ALumaField>()
	{
		return ALumaField::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALumaField);
	ALumaField::~ALumaField() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALumaField)
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_Statics::EnumInfo[] = {
		{ ELumaVersion_StaticEnum, TEXT("ELumaVersion"), &Z_Registration_Info_UEnum_ELumaVersion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2154411798U) },
		{ ELumaQualityMode_StaticEnum, TEXT("ELumaQualityMode"), &Z_Registration_Info_UEnum_ELumaQualityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1111150970U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALumaField, ALumaField::StaticClass, TEXT("ALumaField"), &Z_Registration_Info_UClass_ALumaField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALumaField), 4049269699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_678138009(TEXT("/Script/LumaRuntime"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
