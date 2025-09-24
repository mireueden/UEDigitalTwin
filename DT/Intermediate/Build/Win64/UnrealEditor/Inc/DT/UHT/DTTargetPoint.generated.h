// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/DTTargetPoint.h"

#ifdef DT_DTTargetPoint_generated_h
#error "DTTargetPoint.generated.h already included, missing '#pragma once' in DTTargetPoint.h"
#endif
#define DT_DTTargetPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADTTargetPoint ***********************************************************
DT_API UClass* Z_Construct_UClass_ADTTargetPoint_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTTargetPoint(); \
	friend struct Z_Construct_UClass_ADTTargetPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTTargetPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTTargetPoint, ATargetPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTTargetPoint_NoRegister) \
	DECLARE_SERIALIZER(ADTTargetPoint)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTTargetPoint(ADTTargetPoint&&) = delete; \
	ADTTargetPoint(const ADTTargetPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTTargetPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTTargetPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTTargetPoint) \
	NO_API virtual ~ADTTargetPoint();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h_10_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h_13_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTTargetPoint;

// ********** End Class ADTTargetPoint *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
