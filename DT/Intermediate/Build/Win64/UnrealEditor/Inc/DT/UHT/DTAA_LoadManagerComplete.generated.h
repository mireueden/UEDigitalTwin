// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncAction/DTAA_LoadManagerComplete.h"

#ifdef DT_DTAA_LoadManagerComplete_generated_h
#error "DTAA_LoadManagerComplete.generated.h already included, missing '#pragma once' in DTAA_LoadManagerComplete.h"
#endif
#define DT_DTAA_LoadManagerComplete_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDTAA_LoadManagerComplete;
class UObject;

// ********** Begin Delegate FOnLoadManagerComplete ************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_9_DELEGATE \
DT_API void FOnLoadManagerComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadManagerComplete);


// ********** End Delegate FOnLoadManagerComplete **************************************************

// ********** Begin Class UDTAA_LoadManagerComplete ************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyLoadManagerComplete); \
	DECLARE_FUNCTION(execCreateListenLoadManagerCompleted);


DT_API UClass* Z_Construct_UClass_UDTAA_LoadManagerComplete_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTAA_LoadManagerComplete(); \
	friend struct Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTAA_LoadManagerComplete_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTAA_LoadManagerComplete, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTAA_LoadManagerComplete_NoRegister) \
	DECLARE_SERIALIZER(UDTAA_LoadManagerComplete)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTAA_LoadManagerComplete(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTAA_LoadManagerComplete(UDTAA_LoadManagerComplete&&) = delete; \
	UDTAA_LoadManagerComplete(const UDTAA_LoadManagerComplete&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTAA_LoadManagerComplete); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTAA_LoadManagerComplete); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTAA_LoadManagerComplete) \
	NO_API virtual ~UDTAA_LoadManagerComplete();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_13_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_16_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTAA_LoadManagerComplete;

// ********** End Class UDTAA_LoadManagerComplete **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
