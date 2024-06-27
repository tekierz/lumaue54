// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLumaEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LumaEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LumaEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_LumaEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LumaEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xAC68F554,
				0xD77E1868,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LumaEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LumaEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LumaEditor(Z_Construct_UPackage__Script_LumaEditor, TEXT("/Script/LumaEditor"), Z_Registration_Info_UPackage__Script_LumaEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAC68F554, 0xD77E1868));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
