// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LumaEditor/Public/LumaAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLumaAssetFactory() {}

// Begin Cross Module References
LUMAEDITOR_API UClass* Z_Construct_UClass_ULumaAssetFactory();
LUMAEDITOR_API UClass* Z_Construct_UClass_ULumaAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LumaEditor();
// End Cross Module References

// Begin Class ULumaAssetFactory
void ULumaAssetFactory::StaticRegisterNativesULumaAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULumaAssetFactory);
UClass* Z_Construct_UClass_ULumaAssetFactory_NoRegister()
{
	return ULumaAssetFactory::StaticClass();
}
struct Z_Construct_UClass_ULumaAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "LumaAssetFactory.h" },
		{ "ModuleRelativePath", "Public/LumaAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULumaAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULumaAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LumaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULumaAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULumaAssetFactory_Statics::ClassParams = {
	&ULumaAssetFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULumaAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULumaAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULumaAssetFactory()
{
	if (!Z_Registration_Info_UClass_ULumaAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULumaAssetFactory.OuterSingleton, Z_Construct_UClass_ULumaAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULumaAssetFactory.OuterSingleton;
}
template<> LUMAEDITOR_API UClass* StaticClass<ULumaAssetFactory>()
{
	return ULumaAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULumaAssetFactory);
ULumaAssetFactory::~ULumaAssetFactory() {}
// End Class ULumaAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_LumaAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULumaAssetFactory, ULumaAssetFactory::StaticClass, TEXT("ULumaAssetFactory"), &Z_Registration_Info_UClass_ULumaAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULumaAssetFactory), 3074760246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_LumaAssetFactory_h_82991234(TEXT("/Script/LumaEditor"),
	Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_LumaAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_LumaAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
