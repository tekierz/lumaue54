// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LumaEditor/Public/Loaders/LumaSplatLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLumaSplatLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LUMAEDITOR_API UClass* Z_Construct_UClass_ULumaSplatLoader();
	LUMAEDITOR_API UClass* Z_Construct_UClass_ULumaSplatLoader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LumaEditor();
// End Cross Module References
	void ULumaSplatLoader::StaticRegisterNativesULumaSplatLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULumaSplatLoader);
	UClass* Z_Construct_UClass_ULumaSplatLoader_NoRegister()
	{
		return ULumaSplatLoader::StaticClass();
	}
	struct Z_Construct_UClass_ULumaSplatLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULumaSplatLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LumaEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULumaSplatLoader_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULumaSplatLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Loaders/LumaSplatLoader.h" },
		{ "ModuleRelativePath", "Public/Loaders/LumaSplatLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULumaSplatLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULumaSplatLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULumaSplatLoader_Statics::ClassParams = {
		&ULumaSplatLoader::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULumaSplatLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_ULumaSplatLoader_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULumaSplatLoader()
	{
		if (!Z_Registration_Info_UClass_ULumaSplatLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULumaSplatLoader.OuterSingleton, Z_Construct_UClass_ULumaSplatLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULumaSplatLoader.OuterSingleton;
	}
	template<> LUMAEDITOR_API UClass* StaticClass<ULumaSplatLoader>()
	{
		return ULumaSplatLoader::StaticClass();
	}
	ULumaSplatLoader::ULumaSplatLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULumaSplatLoader);
	ULumaSplatLoader::~ULumaSplatLoader() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaSplatLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaSplatLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULumaSplatLoader, ULumaSplatLoader::StaticClass, TEXT("ULumaSplatLoader"), &Z_Registration_Info_UClass_ULumaSplatLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULumaSplatLoader), 2844821154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaSplatLoader_h_2591417781(TEXT("/Script/LumaEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaSplatLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaSplatLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
