// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Types/DTDefine.h"
#include "GameplayTagAssetInterface.h"
#include "DTSpec.generated.h"

class UDTSpecDataAsset;
class UDTCell;
class UDTSpec;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSpecStateChanged, UDTSpec*, Spec, EDTSpecState, PrevState, EDTSpecState, CurrentState);

UCLASS(Blueprintable, BlueprintType)
class DT_API UDTSpec : public UObject, public IGameplayTagAssetInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ExposeOnSpawn = "true", Categories="DT.Asset.Spec"))
	FGameplayTag Type;

public:
	UPROPERTY(BlueprintReadOnly)
	UDTSpecDataAsset* SpecDataAsset;

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsValidSpec() const { return !!SpecDataAsset; };

	UFUNCTION(BlueprintCallable)
	void InitSpec();

public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsProcessCellFinished() const;

	UFUNCTION(BlueprintPure)
	FORCEINLINE int32 GetNextProcessCellIndex() const;

	UFUNCTION(BlueprintPure)
	FORCEINLINE int32 GetCurrentPrcessCellIndex() const;

	UFUNCTION(BlueprintCallable)
	void SetNextProcessCellIndex();

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
	int32 ProcessCellIndex;

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
	int32 LastProcessCellIndex;

public:
	UPROPERTY(VisibleInstanceOnly)
	EDTSpecState State;

	UPROPERTY(BlueprintAssignable)
	FOnSpecStateChanged OnSpecStateChanged;

	UFUNCTION(BlueprintCallable)
	void SetState(EDTSpecState NewState);

	UFUNCTION(BlueprintPure)
	EDTSpecState GetState() const { return State; }

public:
	// Spec의 내부 상태를 나타내는 태그로 표현
	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly)
	FGameplayTagContainer SpecTags;

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& Tag) const override;

#if 0 // 작업중인 셀 정보 확인용
	UPROPERTY(VisibleInstanceOnly)
	FGameplayTag TargetCell;

	UFUNCTION(BlueprintCallable)
	void SetTargetCell(FGameplayTag CellTag) { TargetCell = CellTag; }

	UFUNCTION(BlueprintPure)
	FGameplayTag GetTargetCell() const { return TargetCell; }
#endif
};
