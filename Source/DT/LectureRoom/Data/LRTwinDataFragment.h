// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LRTwinDataFragment.generated.h"

enum class ELRAirCareType : uint8;

/**
 * fragment 클래스로 사용하려고 합니다.
 */
UCLASS(abstract, BlueprintType)
class DT_API ULRTwinDataFragment : public UObject
{
	GENERATED_BODY()

public:
	//// Twin된 정보를 문자열로 반환하는 함수
	//UFUNCTION(BlueprintCallable)
	//virtual FText GetTwinInfo();
};

/**
* 사용시간, 전력소모에 대한 상태를 담당하는 데이터
*/
UCLASS(DefaultToInstanced)
class DT_API ULRTwinPowerConsumptionDataFragment : public ULRTwinDataFragment
{
	GENERATED_BODY()
	// 설정처럼 상태를 정의하는 데이터
public:
	//최대 전력 소모량
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxPowerConsumption;

	// 런타임 상태를 나태는 데이터
public:
	// 동작시간
	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, transient)
	float ActiveTime;

	// 전력 소모량
	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, transient)
	float PowerConsumption;
};

UCLASS(DefaultToInstanced)
class DT_API ULRAirCareDataFragment : public ULRTwinDataFragment
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	ELRAirCareType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DesireValue;

public:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	float CurrentValue;
};
