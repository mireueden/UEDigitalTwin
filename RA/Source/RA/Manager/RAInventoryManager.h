// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Manager/RAManagerBase.h"
#include "Types/RADefine.h"
#include "RAInventoryManager.generated.h"

class UDataTable;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemHistoryChangedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemChangedDelegate, FName, ItemName, int32, Count);

/**
 * 
 */
UCLASS()
class RA_API ARAInventoryManager : public ARAManagerBase
{
	GENERATED_BODY()

public:
	virtual bool IsAllowClass(URAManageComponent* Comp) override;

	// ItemSpec
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RAInventoryManager")
	UDataTable* ItemTable;
	
	UFUNCTION(BlueprintCallable, Category = "RAInventoryManager")
	bool GetItemSpec(const FName& Row, FRAItemSpec& ItemSpec);

	// ItemHistory (한 개의 창고 이력만 관리), todo : 여러개 창고 이력, Load 가능하도록
public:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "RAInventoryManager")
	TArray<FRAItemHistory> ItemHistory;

	UPROPERTY(BlueprintAssignable)
	FOnItemHistoryChangedDelegate OnItemHistoryChanged;

	UFUNCTION(BlueprintCallable, Category = "RAInventoryManager")
	void AddItemHistory(FName SpecName, int32 Count, bool bStockDirection, FDateTime Time);

	UFUNCTION(BlueprintCallable, Category = "RAInventoryManager")
	void AddItemHistoryEx(const FRAItemHistory& NewHistory)
	{
		AddItemHistoryInternal(NewHistory);
	}
		
	void AddItemHistoryInternal(const FRAItemHistory& NewHistory);

	UFUNCTION(BlueprintPure, Category = "RAInventoryManager")
	const TArray<FRAItemHistory>& GetItemHistory() const { return ItemHistory; }

	// 현재 재고
public:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "RAInventoryManager")
	TMap<FName, int32> ItemStockMap;

	// 입고
	UFUNCTION(BlueprintCallable, Category = "RAInventoryManager")
	void IncomingItem(FName ItemName, int32 Count);

	// 출고
	UFUNCTION(BlueprintCallable, Category = "RAInventoryManager")
	void OutgoingItem(FName ItemName, int32 Count);

	UFUNCTION(BlueprintPure, Category = "RAInventoryManager")
	bool IsItemEnough(const FName& ItemName, int32 Count) const;

	UFUNCTION(BlueprintPure, Category = "RAInventoryManager")
	int32 GetItemCount(const FName& ItemName) const;

	UPROPERTY(BlueprintAssignable)
	FOnItemChangedDelegate OnIncomingItem;

	UPROPERTY(BlueprintAssignable)
	FOnItemChangedDelegate OnOutgoingItem;
};
