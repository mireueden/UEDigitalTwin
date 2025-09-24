// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDT_init() {}
	DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature();
	DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature();
	DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature();
	DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature();
	DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature();
	DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature();
	DT_API UFunction* Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DT;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DT()
	{
		if (!Z_Registration_Info_UPackage__Script_DT.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DT",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x89D8E551,
				0xDCC9C9BC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DT.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DT.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DT(Z_Construct_UPackage__Script_DT, TEXT("/Script/DT"), Z_Registration_Info_UPackage__Script_DT, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x89D8E551, 0xDCC9C9BC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
