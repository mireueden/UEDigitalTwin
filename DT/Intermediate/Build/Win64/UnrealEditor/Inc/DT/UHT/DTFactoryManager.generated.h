// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/DTFactoryManager.h"

#ifdef DT_DTFactoryManager_generated_h
#error "DTFactoryManager.generated.h already included, missing '#pragma once' in DTFactoryManager.h"
#endif
#define DT_DTFactoryManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDTAbilitySystemComponent;

// ********** Begin Delegate FOnRegisterChangedDelegate ********************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_14_DELEGATE \
DT_API void FOnRegisterChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRegisterChangedDelegate, UDTAbilitySystemComponent* ASC);


// ********** End Delegate FOnRegisterChangedDelegate **********************************************

// ********** Begin Class ADTFactoryManager ********************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeTargetPointMap); \
	DECLARE_FUNCTION(execUnregisterAbilitySystemComp); \
	DECLARE_FUNCTION(execRegisterAbilitySystemComp);


DT_API UClass* Z_Construct_UClass_ADTFactoryManager_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTFactoryManager(); \
	friend struct Z_Construct_UClass_ADTFactoryManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTFactoryManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTFactoryManager, ADTManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTFactoryManager_NoRegister) \
	DECLARE_SERIALIZER(ADTFactoryManager) \
	virtual UObject* _getUObject() const override { return const_cast<ADTFactoryManager*>(this); }


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTFactoryManager(ADTFactoryManager&&) = delete; \
	ADTFactoryManager(const ADTFactoryManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTFactoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTFactoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTFactoryManager) \
	NO_API virtual ~ADTFactoryManager();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_16_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTFactoryManager;

// ********** End Class ADTFactoryManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
