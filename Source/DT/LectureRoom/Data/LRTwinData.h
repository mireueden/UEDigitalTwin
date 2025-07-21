// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LRTwinData.generated.h"

class ULRTwinDataFragment;
class UTexture2D;
enum class ELRObjectType : uint8;

/**
 * Twin 오브젝트의 공통 데이터를 담는 객체로 사용
 */
UCLASS(Blueprintable, BlueprintType)
class DT_API ULRTwinData : public UObject
{
	GENERATED_BODY()
	
	// 기본 데이터
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGuid Id;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	ELRObjectType Type;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UTexture2D* Icon;

	// 추가정보를 담을 데이터 목록
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<ULRTwinDataFragment*> TwinDataFragments;
};
