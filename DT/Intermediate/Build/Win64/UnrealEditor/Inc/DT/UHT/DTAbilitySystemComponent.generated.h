// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/DTAbilitySystemComponent.h"

#ifdef DT_DTAbilitySystemComponent_generated_h
#error "DTAbilitySystemComponent.generated.h already included, missing '#pragma once' in DTAbilitySystemComponent.h"
#endif
#define DT_DTAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;

// ********** Begin Delegate FOnTagChangedDelegate *************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h_9_DELEGATE \
DT_API void FOnTagChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTagChangedDelegate, FGameplayTag const& Tag, bool TagExists);


// ********** End Delegate FOnTagChangedDelegate ***************************************************

// ********** Begin Class UDTAbilitySystemComponent ************************************************
DT_API UClass* Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UDTAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UDTAbilitySystemComponent)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTAbilitySystemComponent(UDTAbilitySystemComponent&&) = delete; \
	UDTAbilitySystemComponent(const UDTAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTAbilitySystemComponent) \
	NO_API virtual ~UDTAbilitySystemComponent();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h_14_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTAbilitySystemComponent;

// ********** End Class UDTAbilitySystemComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
