// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/RADefine.h"

#ifdef RA_RADefine_generated_h
#error "RADefine.generated.h already included, missing '#pragma once' in RADefine.h"
#endif
#define RA_RADefine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRAItemSpec *******************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRAItemSpec_Statics; \
	RA_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FRAItemSpec;
// ********** End ScriptStruct FRAItemSpec *********************************************************

// ********** Begin ScriptStruct FRAItemOrder ******************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRAItemOrder_Statics; \
	RA_API static class UScriptStruct* StaticStruct();


struct FRAItemOrder;
// ********** End ScriptStruct FRAItemOrder ********************************************************

// ********** Begin ScriptStruct FRAItemHistory ****************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRAItemHistory_Statics; \
	RA_API static class UScriptStruct* StaticStruct();


struct FRAItemHistory;
// ********** End ScriptStruct FRAItemHistory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h

// ********** Begin Enum ERARobotState *************************************************************
#define FOREACH_ENUM_ERAROBOTSTATE(op) \
	op(ERARobotState::Stopped) \
	op(ERARobotState::Idle) \
	op(ERARobotState::Working) \
	op(ERARobotState::Error) 

enum class ERARobotState : uint8;
template<> struct TIsUEnumClass<ERARobotState> { enum { Value = true }; };
template<> RA_API UEnum* StaticEnum<ERARobotState>();
// ********** End Enum ERARobotState ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
