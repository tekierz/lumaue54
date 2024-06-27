// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LumaField.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUMARUNTIME_LumaField_generated_h
#error "LumaField.generated.h already included, missing '#pragma once' in LumaField.h"
#endif
#define LUMARUNTIME_LumaField_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALumaField, NO_API)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALumaField(); \
	friend struct Z_Construct_UClass_ALumaField_Statics; \
public: \
	DECLARE_CLASS(ALumaField, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LumaRuntime"), NO_API) \
	DECLARE_SERIALIZER(ALumaField) \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_ARCHIVESERIALIZER


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALumaField(ALumaField&&); \
	NO_API ALumaField(const ALumaField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALumaField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALumaField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALumaField) \
	NO_API virtual ~ALumaField();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_67_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LUMARUNTIME_API UClass* StaticClass<class ALumaField>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LumaAIPlugin_Source_LumaRuntime_Public_LumaField_h


#define FOREACH_ENUM_ELUMAVERSION(op) \
	op(ELumaVersion::V001_Initial_Release) \
	op(ELumaVersion::V002_Added_Crop_And_Exposure_Controls) \
	op(ELumaVersion::V003_Crop_Rotation_And_Quality_Controls) \
	op(ELumaVersion::VersionPlusOne) \
	op(ELumaVersion::LatestVersion) 

enum class ELumaVersion : uint8;
template<> struct TIsUEnumClass<ELumaVersion> { enum { Value = true }; };
template<> LUMARUNTIME_API UEnum* StaticEnum<ELumaVersion>();

#define FOREACH_ENUM_ELUMAQUALITYMODE(op) \
	op(ELumaQualityMode::Minimal) \
	op(ELumaQualityMode::VeryLow) \
	op(ELumaQualityMode::Low) \
	op(ELumaQualityMode::Mid) \
	op(ELumaQualityMode::High) \
	op(ELumaQualityMode::VeryHigh) \
	op(ELumaQualityMode::Extreme) 

enum class ELumaQualityMode : uint8;
template<> struct TIsUEnumClass<ELumaQualityMode> { enum { Value = true }; };
template<> LUMARUNTIME_API UEnum* StaticEnum<ELumaQualityMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
