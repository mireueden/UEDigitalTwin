// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/RAManagerBase.h"

#ifdef RA_RAManagerBase_generated_h
#error "RAManagerBase.generated.h already included, missing '#pragma once' in RAManagerBase.h"
#endif
#define RA_RAManagerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ARAManagerBase;
class URAManageComponent;

// ********** Begin Delegate FManagerPhaseDelegate *************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_12_DELEGATE \
RA_API void FManagerPhaseDelegate_DelegateWrapper(const FMulticastScriptDelegate& ManagerPhaseDelegate, ARAManagerBase* Manager);


// ********** End Delegate FManagerPhaseDelegate ***************************************************

// ********** Begin Delegate FOnManageComponentDelegate ********************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_13_DELEGATE \
RA_API void FOnManageComponentDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnManageComponentDelegate, URAManageComponent* Comp);


// ********** End Delegate FOnManageComponentDelegate **********************************************

// ********** Begin Class ARAManagerBase ***********************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAllowClass); \
	DECLARE_FUNCTION(execGetManageComponents); \
	DECLARE_FUNCTION(execRemoveManageComponent); \
	DECLARE_FUNCTION(execAddManageComponent); \
	DECLARE_FUNCTION(execInitializeNative); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsInitialized);


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_CALLBACK_WRAPPERS
RA_API UClass* Z_Construct_UClass_ARAManagerBase_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARAManagerBase(); \
	friend struct Z_Construct_UClass_ARAManagerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_ARAManagerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ARAManagerBase, AInfo, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_ARAManagerBase_NoRegister) \
	DECLARE_SERIALIZER(ARAManagerBase)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARAManagerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARAManagerBase(ARAManagerBase&&) = delete; \
	ARAManagerBase(const ARAManagerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARAManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARAManagerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARAManagerBase) \
	NO_API virtual ~ARAManagerBase();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_23_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_CALLBACK_WRAPPERS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARAManagerBase;

// ********** End Class ARAManagerBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h

// ********** Begin Enum ERAManagerInitializeState *************************************************
#define FOREACH_ENUM_ERAMANAGERINITIALIZESTATE(op) \
	op(ERAManagerInitializeState::Uninitialized) \
	op(ERAManagerInitializeState::Initializing) \
	op(ERAManagerInitializeState::Initialized) 

enum class ERAManagerInitializeState : uint8;
template<> struct TIsUEnumClass<ERAManagerInitializeState> { enum { Value = true }; };
template<> RA_API UEnum* StaticEnum<ERAManagerInitializeState>();
// ********** End Enum ERAManagerInitializeState ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
