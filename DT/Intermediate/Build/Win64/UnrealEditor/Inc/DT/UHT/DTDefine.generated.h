// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/DTDefine.h"

#ifdef DT_DTDefine_generated_h
#error "DTDefine.generated.h already included, missing '#pragma once' in DTDefine.h"
#endif
#define DT_DTDefine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDTTagAssetData ***************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDTTagAssetData_Statics; \
	DT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FDTTagAssetData;
// ********** End ScriptStruct FDTTagAssetData *****************************************************

// ********** Begin ScriptStruct FDTActorList ******************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDTActorList_Statics; \
	DT_API static class UScriptStruct* StaticStruct();


struct FDTActorList;
// ********** End ScriptStruct FDTActorList ********************************************************

// ********** Begin Class UDTDefine ****************************************************************
DT_API UClass* Z_Construct_UClass_UDTDefine_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTDefine(); \
	friend struct Z_Construct_UClass_UDTDefine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTDefine_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTDefine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTDefine_NoRegister) \
	DECLARE_SERIALIZER(UDTDefine)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTDefine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTDefine(UDTDefine&&) = delete; \
	UDTDefine(const UDTDefine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTDefine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTDefine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTDefine) \
	NO_API virtual ~UDTDefine();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h_55_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h_58_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTDefine;

// ********** End Class UDTDefine ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h

// ********** Begin Enum EDTSpecState **************************************************************
#define FOREACH_ENUM_EDTSPECSTATE(op) \
	op(EDTSpecState::Idle) \
	op(EDTSpecState::TargetAssigned) \
	op(EDTSpecState::MoveToTarget) \
	op(EDTSpecState::WorkReady) \
	op(EDTSpecState::WorkProgress) \
	op(EDTSpecState::WorkPause) \
	op(EDTSpecState::WorkFinish) \
	op(EDTSpecState::Complete) 

enum class EDTSpecState : uint8;
template<> struct TIsUEnumClass<EDTSpecState> { enum { Value = true }; };
template<> DT_API UEnum* StaticEnum<EDTSpecState>();
// ********** End Enum EDTSpecState ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
