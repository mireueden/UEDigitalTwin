// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RAManageComponent.h"

#ifdef RA_RAManageComponent_generated_h
#error "RAManageComponent.generated.h already included, missing '#pragma once' in RAManageComponent.h"
#endif
#define RA_RAManageComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ERARobotState : uint8;

// ********** Begin Delegate FOnRobotStateChangedDelegate ******************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_10_DELEGATE \
RA_API void FOnRobotStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRobotStateChangedDelegate, ERARobotState PrevState, ERARobotState NewState);


// ********** End Delegate FOnRobotStateChangedDelegate ********************************************

// ********** Begin Class URAManageComponent *******************************************************
RA_API UClass* Z_Construct_UClass_URAManageComponent_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURAManageComponent(); \
	friend struct Z_Construct_UClass_URAManageComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_URAManageComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URAManageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_URAManageComponent_NoRegister) \
	DECLARE_SERIALIZER(URAManageComponent)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URAManageComponent(URAManageComponent&&) = delete; \
	URAManageComponent(const URAManageComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URAManageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URAManageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URAManageComponent) \
	NO_API virtual ~URAManageComponent();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_12_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URAManageComponent;

// ********** End Class URAManageComponent *********************************************************

// ********** Begin Class URAManageComponent_Robot *************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRobotState); \
	DECLARE_FUNCTION(execSetRobotState);


RA_API UClass* Z_Construct_UClass_URAManageComponent_Robot_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURAManageComponent_Robot(); \
	friend struct Z_Construct_UClass_URAManageComponent_Robot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_URAManageComponent_Robot_NoRegister(); \
public: \
	DECLARE_CLASS2(URAManageComponent_Robot, URAManageComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_URAManageComponent_Robot_NoRegister) \
	DECLARE_SERIALIZER(URAManageComponent_Robot)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URAManageComponent_Robot(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URAManageComponent_Robot(URAManageComponent_Robot&&) = delete; \
	URAManageComponent_Robot(const URAManageComponent_Robot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URAManageComponent_Robot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URAManageComponent_Robot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URAManageComponent_Robot) \
	NO_API virtual ~URAManageComponent_Robot();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_33_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URAManageComponent_Robot;

// ********** End Class URAManageComponent_Robot ***************************************************

// ********** Begin Class URAManageComponent_Item **************************************************
RA_API UClass* Z_Construct_UClass_URAManageComponent_Item_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURAManageComponent_Item(); \
	friend struct Z_Construct_UClass_URAManageComponent_Item_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_URAManageComponent_Item_NoRegister(); \
public: \
	DECLARE_CLASS2(URAManageComponent_Item, URAManageComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_URAManageComponent_Item_NoRegister) \
	DECLARE_SERIALIZER(URAManageComponent_Item)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URAManageComponent_Item(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URAManageComponent_Item(URAManageComponent_Item&&) = delete; \
	URAManageComponent_Item(const URAManageComponent_Item&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URAManageComponent_Item); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URAManageComponent_Item); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URAManageComponent_Item) \
	NO_API virtual ~URAManageComponent_Item();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_54_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_57_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URAManageComponent_Item;

// ********** End Class URAManageComponent_Item ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
