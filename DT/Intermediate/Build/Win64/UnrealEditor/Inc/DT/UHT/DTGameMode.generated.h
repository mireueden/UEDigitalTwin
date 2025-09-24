// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/DTGameMode.h"

#ifdef DT_DTGameMode_generated_h
#error "DTGameMode.generated.h already included, missing '#pragma once' in DTGameMode.h"
#endif
#define DT_DTGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADTManagerBase;

// ********** Begin Delegate FOnInitializeManagersComplete *****************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_11_DELEGATE \
DT_API void FOnInitializeManagersComplete_DelegateWrapper(const FMulticastScriptDelegate& OnInitializeManagersComplete);


// ********** End Delegate FOnInitializeManagersComplete *******************************************

// ********** Begin Class ADTGameMode **************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsInitializeManagersComplete); \
	DECLARE_FUNCTION(execOnManagerLoaded); \
	DECLARE_FUNCTION(execNotifyInitializeManagerComplete); \
	DECLARE_FUNCTION(execGetManager); \
	DECLARE_FUNCTION(execInitializeManagers);


DT_API UClass* Z_Construct_UClass_ADTGameMode_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTGameMode(); \
	friend struct Z_Construct_UClass_ADTGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTGameMode_NoRegister) \
	DECLARE_SERIALIZER(ADTGameMode)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADTGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTGameMode(ADTGameMode&&) = delete; \
	ADTGameMode(const ADTGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADTGameMode) \
	NO_API virtual ~ADTGameMode();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_16_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_19_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTGameMode;

// ********** End Class ADTGameMode ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
