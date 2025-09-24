
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DTSpecDataAsset.generated.h"

class UDTCell;
class ADTActor;

UCLASS(BlueprintType)
class DT_API UDTSpecDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FText Name;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FText Description;

	// 작업할 공정 목록 (순서)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(Categoreis="DT.Asset.Cell"))
	TArray<FGameplayTag> ProcessCellList;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<ADTActor> ActorClass;

	//TODO : 엔진 외부에서 데이터 를 받아 올 때, FName 으로 
};