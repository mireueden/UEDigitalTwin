// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DTActor.h"

#ifdef DT_DTActor_generated_h
#error "DTActor.generated.h already included, missing '#pragma once' in DTActor.h"
#endif
#define DT_DTActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADTActor *****************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeAbilities);


DT_API UClass* Z_Construct_UClass_ADTActor_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTActor(); \
	friend struct Z_Construct_UClass_ADTActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTActor_NoRegister) \
	DECLARE_SERIALIZER(ADTActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADTActor*>(this); }


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTActor(ADTActor&&) = delete; \
	ADTActor(const ADTActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTActor) \
	NO_API virtual ~ADTActor();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h_14_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTActor;

// ********** End Class ADTActor *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
