// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/GameplayAbility/DTGameplayAbility.h"

#ifdef DT_DTGameplayAbility_generated_h
#error "DTGameplayAbility.generated.h already included, missing '#pragma once' in DTGameplayAbility.h"
#endif
#define DT_DTGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAbilityActorInfo;
struct FGameplayAbilitySpec;

// ********** Begin Class UDTGameplayAbility *******************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h_15_CALLBACK_WRAPPERS
DT_API UClass* Z_Construct_UClass_UDTGameplayAbility_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTGameplayAbility(); \
	friend struct Z_Construct_UClass_UDTGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UDTGameplayAbility)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTGameplayAbility(UDTGameplayAbility&&) = delete; \
	UDTGameplayAbility(const UDTGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTGameplayAbility) \
	NO_API virtual ~UDTGameplayAbility();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h_12_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h_15_CALLBACK_WRAPPERS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTGameplayAbility;

// ********** End Class UDTGameplayAbility *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
