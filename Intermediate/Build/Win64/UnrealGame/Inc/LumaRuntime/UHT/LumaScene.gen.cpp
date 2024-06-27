// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LumaRuntime/Public/LumaScene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLumaScene() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ALocationVolume_NoRegister();
LUMARUNTIME_API UClass* Z_Construct_UClass_ALumaScene();
LUMARUNTIME_API UClass* Z_Construct_UClass_ALumaScene_NoRegister();
LUMARUNTIME_API UClass* Z_Construct_UClass_ALumaSceneSingle();
LUMARUNTIME_API UClass* Z_Construct_UClass_ALumaSceneSingle_NoRegister();
LUMARUNTIME_API UEnum* Z_Construct_UEnum_LumaRuntime_ELumaVersion();
LUMARUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianComponentChunk();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_LumaRuntime();
// End Cross Module References

// Begin ScriptStruct FGaussianComponentChunk
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GaussianComponentChunk;
class UScriptStruct* FGaussianComponentChunk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GaussianComponentChunk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GaussianComponentChunk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianComponentChunk, (UObject*)Z_Construct_UPackage__Script_LumaRuntime(), TEXT("GaussianComponentChunk"));
	}
	return Z_Registration_Info_UScriptStruct_GaussianComponentChunk.OuterSingleton;
}
template<> LUMARUNTIME_API UScriptStruct* StaticStruct<FGaussianComponentChunk>()
{
	return FGaussianComponentChunk::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGaussianComponentChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianComponentChunk>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianComponentChunk_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LumaRuntime,
	nullptr,
	&NewStructOps,
	"GaussianComponentChunk",
	nullptr,
	0,
	sizeof(FGaussianComponentChunk),
	alignof(FGaussianComponentChunk),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianComponentChunk_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaussianComponentChunk_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaussianComponentChunk()
{
	if (!Z_Registration_Info_UScriptStruct_GaussianComponentChunk.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GaussianComponentChunk.InnerSingleton, Z_Construct_UScriptStruct_FGaussianComponentChunk_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GaussianComponentChunk.InnerSingleton;
}
// End ScriptStruct FGaussianComponentChunk

// Begin Class ALumaScene
void ALumaScene::StaticRegisterNativesALumaScene()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALumaScene);
UClass* Z_Construct_UClass_ALumaScene_NoRegister()
{
	return ALumaScene::StaticClass();
}
struct Z_Construct_UClass_ALumaScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "LumaScene.h" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
		{ "PrioritizeCategories", "Luma Transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropBox_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullBox1_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullBox2_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullBox3_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullBox4_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatScale_MetaData[] = {
		{ "Category", "Luma" },
		{ "DisplayName", "Splat Scale" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCropBox_MetaData[] = {
		{ "Category", "Luma" },
		{ "DisplayName", "Enable Crop Box" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCullBox1_MetaData[] = {
		{ "Category", "Luma" },
		{ "DisplayName", "Enable Cull Box 1" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCullBox2_MetaData[] = {
		{ "Category", "Luma" },
		{ "DisplayName", "Enable Cull Box 2" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCullBox3_MetaData[] = {
		{ "Category", "Luma" },
		{ "DisplayName", "Enable Cull Box 3" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCullBox4_MetaData[] = {
		{ "Category", "Luma" },
		{ "DisplayName", "Enable Cull Box 4" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumaNiagaraSystem_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumaNiagaraComponents_MetaData[] = {
		{ "Category", "Hidden" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumaGaussianChunks_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Luma" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionInfo_MetaData[] = {
		{ "Category", "Luma" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CropBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CullBox1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CullBox2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CullBox3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CullBox4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplatScale;
	static void NewProp_EnableCropBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCropBox;
	static void NewProp_EnableCullBox1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCullBox1;
	static void NewProp_EnableCullBox2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCullBox2;
	static void NewProp_EnableCullBox3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCullBox3;
	static void NewProp_EnableCullBox4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCullBox4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LumaNiagaraSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LumaNiagaraComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LumaNiagaraComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LumaGaussianChunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LumaGaussianChunks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Version_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VersionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALumaScene>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_CropBox = { "CropBox", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, CropBox), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropBox_MetaData), NewProp_CropBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_CullBox1 = { "CullBox1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, CullBox1), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullBox1_MetaData), NewProp_CullBox1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_CullBox2 = { "CullBox2", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, CullBox2), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullBox2_MetaData), NewProp_CullBox2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_CullBox3 = { "CullBox3", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, CullBox3), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullBox3_MetaData), NewProp_CullBox3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_CullBox4 = { "CullBox4", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, CullBox4), Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullBox4_MetaData), NewProp_CullBox4_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_SplatScale = { "SplatScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, SplatScale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatScale_MetaData), NewProp_SplatScale_MetaData) };
void Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCropBox_SetBit(void* Obj)
{
	((ALumaScene*)Obj)->EnableCropBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCropBox = { "EnableCropBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaScene), &Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCropBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCropBox_MetaData), NewProp_EnableCropBox_MetaData) };
void Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox1_SetBit(void* Obj)
{
	((ALumaScene*)Obj)->EnableCullBox1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox1 = { "EnableCullBox1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaScene), &Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCullBox1_MetaData), NewProp_EnableCullBox1_MetaData) };
void Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox2_SetBit(void* Obj)
{
	((ALumaScene*)Obj)->EnableCullBox2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox2 = { "EnableCullBox2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaScene), &Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCullBox2_MetaData), NewProp_EnableCullBox2_MetaData) };
void Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox3_SetBit(void* Obj)
{
	((ALumaScene*)Obj)->EnableCullBox3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox3 = { "EnableCullBox3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaScene), &Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCullBox3_MetaData), NewProp_EnableCullBox3_MetaData) };
void Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox4_SetBit(void* Obj)
{
	((ALumaScene*)Obj)->EnableCullBox4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox4 = { "EnableCullBox4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALumaScene), &Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCullBox4_MetaData), NewProp_EnableCullBox4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaNiagaraSystem = { "LumaNiagaraSystem", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, LumaNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumaNiagaraSystem_MetaData), NewProp_LumaNiagaraSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaNiagaraComponents_Inner = { "LumaNiagaraComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaNiagaraComponents = { "LumaNiagaraComponents", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, LumaNiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumaNiagaraComponents_MetaData), NewProp_LumaNiagaraComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaGaussianChunks_Inner = { "LumaGaussianChunks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGaussianComponentChunk, METADATA_PARAMS(0, nullptr) }; // 2240565155
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaGaussianChunks = { "LumaGaussianChunks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, LumaGaussianChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumaGaussianChunks_MetaData), NewProp_LumaGaussianChunks_MetaData) }; // 2240565155
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_Version_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, Version), Z_Construct_UEnum_LumaRuntime_ELumaVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 2776180049
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALumaScene_Statics::NewProp_VersionInfo = { "VersionInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALumaScene, VersionInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionInfo_MetaData), NewProp_VersionInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALumaScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_CropBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_CullBox1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_CullBox2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_CullBox3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_CullBox4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_SplatScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCropBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_EnableCullBox4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaNiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaNiagaraComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaNiagaraComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaGaussianChunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_LumaGaussianChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_Version_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALumaScene_Statics::NewProp_VersionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaScene_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALumaScene_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LumaRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaScene_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALumaScene_Statics::ClassParams = {
	&ALumaScene::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALumaScene_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALumaScene_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaScene_Statics::Class_MetaDataParams), Z_Construct_UClass_ALumaScene_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALumaScene()
{
	if (!Z_Registration_Info_UClass_ALumaScene.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALumaScene.OuterSingleton, Z_Construct_UClass_ALumaScene_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALumaScene.OuterSingleton;
}
template<> LUMARUNTIME_API UClass* StaticClass<ALumaScene>()
{
	return ALumaScene::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALumaScene);
ALumaScene::~ALumaScene() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALumaScene)
// End Class ALumaScene

// Begin Class ALumaSceneSingle
void ALumaSceneSingle::StaticRegisterNativesALumaSceneSingle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALumaSceneSingle);
UClass* Z_Construct_UClass_ALumaSceneSingle_NoRegister()
{
	return ALumaSceneSingle::StaticClass();
}
struct Z_Construct_UClass_ALumaSceneSingle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Hidden Hidden" },
		{ "IncludePath", "LumaScene.h" },
		{ "ModuleRelativePath", "Public/LumaScene.h" },
		{ "PrioritizeCategories", "Luma Transform" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALumaSceneSingle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALumaSceneSingle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALumaScene,
	(UObject* (*)())Z_Construct_UPackage__Script_LumaRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaSceneSingle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALumaSceneSingle_Statics::ClassParams = {
	&ALumaSceneSingle::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALumaSceneSingle_Statics::Class_MetaDataParams), Z_Construct_UClass_ALumaSceneSingle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALumaSceneSingle()
{
	if (!Z_Registration_Info_UClass_ALumaSceneSingle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALumaSceneSingle.OuterSingleton, Z_Construct_UClass_ALumaSceneSingle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALumaSceneSingle.OuterSingleton;
}
template<> LUMARUNTIME_API UClass* StaticClass<ALumaSceneSingle>()
{
	return ALumaSceneSingle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALumaSceneSingle);
ALumaSceneSingle::~ALumaSceneSingle() {}
// End Class ALumaSceneSingle

// Begin Registration
struct Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaScene_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGaussianComponentChunk::StaticStruct, Z_Construct_UScriptStruct_FGaussianComponentChunk_Statics::NewStructOps, TEXT("GaussianComponentChunk"), &Z_Registration_Info_UScriptStruct_GaussianComponentChunk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaussianComponentChunk), 2240565155U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALumaScene, ALumaScene::StaticClass, TEXT("ALumaScene"), &Z_Registration_Info_UClass_ALumaScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALumaScene), 413072027U) },
		{ Z_Construct_UClass_ALumaSceneSingle, ALumaSceneSingle::StaticClass, TEXT("ALumaSceneSingle"), &Z_Registration_Info_UClass_ALumaSceneSingle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALumaSceneSingle), 3853974216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaScene_h_2734330674(TEXT("/Script/LumaRuntime"),
	Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaScene_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaScene_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaScene_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
