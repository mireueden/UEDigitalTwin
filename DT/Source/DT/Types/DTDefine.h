// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DTDefine.generated.h"

// 여러 코드 파일에서 공통으로 사용할 타입들을 정의

USTRUCT(BlueprintType)
struct FDTTagAssetData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Categories="DT.Asset"))
	FGameplayTag AssetTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UDataAsset> DataAsset;

	FDTTagAssetData()
		: AssetTag()
		, DataAsset(nullptr)
	{
	}
};

USTRUCT(BlueprintType)
struct FDTActorList
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> ActorList;
};

UENUM(BlueprintType)
enum class EDTSpecState : uint8
{
	Idle,
	TargetAssigned,
	MoveToTarget,
	WorkReady,
	WorkProgress,
	WorkPause,
	WorkFinish,
	Complete
};


UCLASS()
class DT_API UDTDefine : public UObject
{
	GENERATED_BODY()
	
};
