// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLumaRuntime_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LumaRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LumaRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_LumaRuntime.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LumaRuntime",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x51C45985,
				0xCCDA9E1D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LumaRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LumaRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LumaRuntime(Z_Construct_UPackage__Script_LumaRuntime, TEXT("/Script/LumaRuntime"), Z_Registration_Info_UPackage__Script_LumaRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x51C45985, 0xCCDA9E1D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
