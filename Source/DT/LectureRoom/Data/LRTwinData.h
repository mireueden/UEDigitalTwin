// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LRTwinData.generated.h"

class ULRTwinDataFragment;
class UTexture2D;
enum class ELRObjectType : uint8;
enum class ELRValueType : uint8;
class ULRTwinDataAsset;

/**
 * Twin 오브젝트의 런타임 데이터를 관리
 */
UCLASS(BlueprintType)
class DT_API ULRTwinData : public UObject
{
	GENERATED_BODY()
	
	// 기본 데이터
public:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	FGuid Id;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	TMap<ELRValueType, float> ValueMap;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	ULRTwinDataAsset* SettingDataAsset;

public:
	UFUNCTION(BlueprintCallable)
	bool SetId(FGuid NewID);

	UFUNCTION(BlueprintCallable)
	void InitTwinData(ULRTwinDataAsset* DataAsset);

	// DataAsset에서 값을 가져오는 변수
	UFUNCTION(BlueprintPure)
	bool GetSettingValue(ELRValueType ValueType, float& OutValue);

	UFUNCTION(BlueprintPure)
	bool GetCurrentValue(ELRValueType ValueType, float& OutValue);

	UFUNCTION(BlueprintCallable)
	void SetCurrentValue(ELRValueType ValueType, float Value);

};
