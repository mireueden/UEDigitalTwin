// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/RAInventoryManager.h"

#ifdef RA_RAInventoryManager_generated_h
#error "RAInventoryManager.generated.h already included, missing '#pragma once' in RAInventoryManager.h"
#endif
#define RA_RAInventoryManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FDateTime;
struct FRAItemHistory;
struct FRAItemSpec;

// ********** Begin Delegate FOnItemHistoryChangedDelegate *****************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_12_DELEGATE \
RA_API void FOnItemHistoryChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnItemHistoryChangedDelegate);


// ********** End Delegate FOnItemHistoryChangedDelegate *******************************************

// ********** Begin Delegate FOnItemChangedDelegate ************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_13_DELEGATE \
RA_API void FOnItemChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnItemChangedDelegate, FName ItemName, int32 Count);


// ********** End Delegate FOnItemChangedDelegate **************************************************

// ********** Begin Class ARAInventoryManager ******************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemCount); \
	DECLARE_FUNCTION(execIsItemEnough); \
	DECLARE_FUNCTION(execOutgoingItem); \
	DECLARE_FUNCTION(execIncomingItem); \
	DECLARE_FUNCTION(execGetItemHistory); \
	DECLARE_FUNCTION(execAddItemHistoryEx); \
	DECLARE_FUNCTION(execAddItemHistory); \
	DECLARE_FUNCTION(execGetItemSpec);


RA_API UClass* Z_Construct_UClass_ARAInventoryManager_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARAInventoryManager(); \
	friend struct Z_Construct_UClass_ARAInventoryManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_ARAInventoryManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ARAInventoryManager, ARAManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_ARAInventoryManager_NoRegister) \
	DECLARE_SERIALIZER(ARAInventoryManager)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARAInventoryManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARAInventoryManager(ARAInventoryManager&&) = delete; \
	ARAInventoryManager(const ARAInventoryManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARAInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARAInventoryManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARAInventoryManager) \
	NO_API virtual ~ARAInventoryManager();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_18_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_21_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARAInventoryManager;

// ********** End Class ARAInventoryManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
