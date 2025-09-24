// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DTPawnBase.h"

#ifdef DT_DTPawnBase_generated_h
#error "DTPawnBase.generated.h already included, missing '#pragma once' in DTPawnBase.h"
#endif
#define DT_DTPawnBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADTPawnBase **************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeAbilities);


DT_API UClass* Z_Construct_UClass_ADTPawnBase_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTPawnBase(); \
	friend struct Z_Construct_UClass_ADTPawnBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTPawnBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTPawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTPawnBase_NoRegister) \
	DECLARE_SERIALIZER(ADTPawnBase) \
	virtual UObject* _getUObject() const override { return const_cast<ADTPawnBase*>(this); }


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTPawnBase(ADTPawnBase&&) = delete; \
	ADTPawnBase(const ADTPawnBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTPawnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTPawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTPawnBase) \
	NO_API virtual ~ADTPawnBase();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h_15_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTPawnBase;

// ********** End Class ADTPawnBase ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
