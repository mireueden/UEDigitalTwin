// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/DTAssetManager.h"

#ifdef DT_DTAssetManager_generated_h
#error "DTAssetManager.generated.h already included, missing '#pragma once' in DTAssetManager.h"
#endif
#define DT_DTAssetManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADTAssetManager;
class UDTCellDataAsset;
class UDTSpecDataAsset;
class UObject;
struct FGameplayTag;

// ********** Begin Class UDTProjectSettings *******************************************************
DT_API UClass* Z_Construct_UClass_UDTProjectSettings_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTProjectSettings(); \
	friend struct Z_Construct_UClass_UDTProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UDTProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DT_API UDTProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTProjectSettings(UDTProjectSettings&&) = delete; \
	UDTProjectSettings(const UDTProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DT_API, UDTProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTProjectSettings) \
	DT_API virtual ~UDTProjectSettings();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_15_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTProjectSettings;

// ********** End Class UDTProjectSettings *********************************************************

// ********** Begin Class ADTAssetManager **********************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCellDataAssetByName); \
	DECLARE_FUNCTION(execGetCellDataAssetByTag); \
	DECLARE_FUNCTION(execGetSpecDataAssetByName); \
	DECLARE_FUNCTION(execGetSpecDataAssetByTag); \
	DECLARE_FUNCTION(execInitializeDataAssetMap); \
	DECLARE_FUNCTION(execGetDTAssetManager);


DT_API UClass* Z_Construct_UClass_ADTAssetManager_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTAssetManager(); \
	friend struct Z_Construct_UClass_ADTAssetManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTAssetManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTAssetManager, ADTManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTAssetManager_NoRegister) \
	DECLARE_SERIALIZER(ADTAssetManager)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADTAssetManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTAssetManager(ADTAssetManager&&) = delete; \
	ADTAssetManager(const ADTAssetManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTAssetManager) \
	NO_API virtual ~ADTAssetManager();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_25_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_28_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTAssetManager;

// ********** End Class ADTAssetManager ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
