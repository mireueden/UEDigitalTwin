// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/DTManagerBase.h"

#ifdef DT_DTManagerBase_generated_h
#error "DTManagerBase.generated.h already included, missing '#pragma once' in DTManagerBase.h"
#endif
#define DT_DTManagerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADTManagerBase;

// ********** Begin Delegate FOnManagerLoadComplete ************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_11_DELEGATE \
DT_API void FOnManagerLoadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnManagerLoadComplete, ADTManagerBase* Manager);


// ********** End Delegate FOnManagerLoadComplete **************************************************

// ********** Begin Class ADTManagerBase ***********************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execTryNotifyLoadCompleted); \
	DECLARE_FUNCTION(execLoadManager);


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_CALLBACK_WRAPPERS
DT_API UClass* Z_Construct_UClass_ADTManagerBase_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTManagerBase(); \
	friend struct Z_Construct_UClass_ADTManagerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTManagerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTManagerBase, ADTActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTManagerBase_NoRegister) \
	DECLARE_SERIALIZER(ADTManagerBase)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTManagerBase(ADTManagerBase&&) = delete; \
	ADTManagerBase(const ADTManagerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTManagerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADTManagerBase) \
	NO_API virtual ~ADTManagerBase();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_21_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_CALLBACK_WRAPPERS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTManagerBase;

// ********** End Class ADTManagerBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h

// ********** Begin Enum EDTManagerLoadState *******************************************************
#define FOREACH_ENUM_EDTMANAGERLOADSTATE(op) \
	op(EDTManagerLoadState::Unloaded) \
	op(EDTManagerLoadState::Loading) \
	op(EDTManagerLoadState::Loaded) 

enum class EDTManagerLoadState : uint8;
template<> struct TIsUEnumClass<EDTManagerLoadState> { enum { Value = true }; };
template<> DT_API UEnum* StaticEnum<EDTManagerLoadState>();
// ********** End Enum EDTManagerLoadState *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
