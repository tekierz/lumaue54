// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LumaEditor/Public/Loaders/LumaLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLumaLoader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LUMAEDITOR_API UClass* Z_Construct_UClass_ULumaLoader();
LUMAEDITOR_API UClass* Z_Construct_UClass_ULumaLoader_NoRegister();
UPackage* Z_Construct_UPackage__Script_LumaEditor();
// End Cross Module References

// Begin Class ULumaLoader
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Loaders/LumaLoader.h" },
		{ "ModuleRelativePath", "Public/Loaders/LumaLoader.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULumaLoader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULumaLoader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LumaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULumaLoader_Statics::DependentSingletons) < 16);
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
// End Class ULumaLoader

// Begin Registration
struct Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULumaLoader, ULumaLoader::StaticClass, TEXT("ULumaLoader"), &Z_Registration_Info_UClass_ULumaLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULumaLoader), 1999172669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_1788673859(TEXT("/Script/LumaEditor"),
	Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__TmpUplug_HostProject_Plugins_LumaAIPlugin_Source_LumaEditor_Public_Loaders_LumaLoader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
