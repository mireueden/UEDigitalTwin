// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h"

#ifdef DT_DTAT_LoadManagerComplete_generated_h
#error "DTAT_LoadManagerComplete.generated.h already included, missing '#pragma once' in DTAT_LoadManagerComplete.h"
#endif
#define DT_DTAT_LoadManagerComplete_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDTAT_LoadManagerComplete;
class UGameplayAbility;

// ********** Begin Delegate FOnLoadManagerComplete ************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_29_DELEGATE \
static void FOnLoadManagerComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadManagerComplete);


// ********** End Delegate FOnLoadManagerComplete **************************************************

// ********** Begin Class UDTAT_LoadManagerComplete ************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyLoadManagerComplete); \
	DECLARE_FUNCTION(execCreateWaitLoadManagerCompleted);


DT_API UClass* Z_Construct_UClass_UDTAT_LoadManagerComplete_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTAT_LoadManagerComplete(); \
	friend struct Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTAT_LoadManagerComplete_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTAT_LoadManagerComplete, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTAT_LoadManagerComplete_NoRegister) \
	DECLARE_SERIALIZER(UDTAT_LoadManagerComplete)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTAT_LoadManagerComplete(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTAT_LoadManagerComplete(UDTAT_LoadManagerComplete&&) = delete; \
	UDTAT_LoadManagerComplete(const UDTAT_LoadManagerComplete&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTAT_LoadManagerComplete); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTAT_LoadManagerComplete); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTAT_LoadManagerComplete) \
	NO_API virtual ~UDTAT_LoadManagerComplete();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_16_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_19_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTAT_LoadManagerComplete;

// ********** End Class UDTAT_LoadManagerComplete **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
