// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/GameplayAbilitySystemComponent.h"

#ifdef RA_GameplayAbilitySystemComponent_generated_h
#error "GameplayAbilitySystemComponent.generated.h already included, missing '#pragma once' in GameplayAbilitySystemComponent.h"
#endif
#define RA_GameplayAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayAbilitySystemComponent ******************************************
RA_API UClass* Z_Construct_UClass_UGameplayAbilitySystemComponent_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_AbilitySystem_GameplayAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UGameplayAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_UGameplayAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_UGameplayAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbilitySystemComponent)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_AbilitySystem_GameplayAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbilitySystemComponent(UGameplayAbilitySystemComponent&&) = delete; \
	UGameplayAbilitySystemComponent(const UGameplayAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilitySystemComponent) \
	NO_API virtual ~UGameplayAbilitySystemComponent();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_AbilitySystem_GameplayAbilitySystemComponent_h_12_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_AbilitySystem_GameplayAbilitySystemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_AbilitySystem_GameplayAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_AbilitySystem_GameplayAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbilitySystemComponent;

// ********** End Class UGameplayAbilitySystemComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_AbilitySystem_GameplayAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
