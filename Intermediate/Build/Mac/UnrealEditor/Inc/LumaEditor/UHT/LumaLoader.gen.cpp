// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LumaEditor/Public/Loaders/LumaLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLumaLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LUMAEDITOR_API UClass* Z_Construct_UClass_ULumaLoader();
	LUMAEDITOR_API UClass* Z_Construct_UClass_ULumaLoader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LumaEditor();
// End Cross Module References
	void ULumaLoader::StaticRegisterNativesULumaLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULumaLoader);
	UClass* Z_Construct_UClass_ULumaLoader_NoRegister()
	{
		return ULumaLoader::StaticClass();
	}
	struct Z_Construct_UClass_ULumaLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULumaLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LumaEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULumaLoader_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULumaLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Loaders/LumaLoader.h" },
		{ "ModuleRelativePath", "Public/Loaders/LumaLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULumaLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULumaLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULumaLoader_Statics::ClassParams = {
		&ULumaLoader::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULumaLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_ULumaLoader_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULumaLoader()
	{
		if (!Z_Registration_Info_UClass_ULumaLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULumaLoader.OuterSingleton, Z_Construct_UClass_ULumaLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULumaLoader.OuterSingleton;
	}
	template<> LUMAEDITOR_API UClass* StaticClass<ULumaLoader>()
	{
		return ULumaLoader::StaticClass();
	}
	ULumaLoader::ULumaLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULumaLoader);
	ULumaLoader::~ULumaLoader() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULumaLoader, ULumaLoader::StaticClass, TEXT("ULumaLoader"), &Z_Registration_Info_UClass_ULumaLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULumaLoader), 487594780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_2649484971(TEXT("/Script/LumaEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
