// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "RADefine.generated.h"

class UTexture2D;

/** 로봇의 상태 */ 
UENUM(BlueprintType)
enum class ERARobotState : uint8
{
	// 정지
	Stopped   UMETA(DisplayName = "Robot Stopped"),
	// 대기
	Idle,
	// 작업중
	Working,
	// 고장
	Error
};

/** 아이템 정보 */
USTRUCT(BlueprintType)
struct FRAItemSpec : public FTableRowBase
{
	GENERATED_BODY()

	// 아이템명
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemSpec")
	FText Name;

	// 아이템 설명
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemSpec")
	FText Description;

	// 아이템 아이콘
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemSpec")
	UTexture2D* Icon;

	FRAItemSpec() 
		: Name()
		, Description()
		, Icon(nullptr)
	{
	}
};

/** 아이템 주문 정보 */
USTRUCT(BlueprintType)
struct FRAItemOrder
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemOrder")
	FGuid Id;

	// 아이템 정보
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemOrder")
	FName SpecName;

	// 주문 수량
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemOrder")
	int32 Count;

	FRAItemOrder()
		: Id()
		, SpecName(NAME_None)
		, Count(1)
	{
	}
};

USTRUCT(BlueprintType)
struct FRAItemHistory
{
	GENERATED_BODY()

	// 아이템 정보 (DataTable Key; RowName)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemOrder")
	FName SpecName;

	// 주문 수량
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemOrder")
	int32 Count;

	// 입고, 출고 구분 (true인 경우 입고, false인 경우 출고)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemOrder")
	bool bStockDirection;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemOrder")
	FDateTime Time;

	FRAItemHistory()
		: SpecName(NAME_None)
		, Count(0)
		, bStockDirection(false)
		, Time()
	{
	}
};