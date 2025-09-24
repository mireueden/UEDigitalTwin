// Fill out your copyright notice in the Description page of Project Settings.


#include "Manager/RAInventoryManager.h"
#include "Components/RAManageComponent.h"
#include "Engine/DataTable.h"
#include "EngineUtils.h"
#include "Kismet/KismetStringLibrary.h"

DEFINE_LOG_CATEGORY_STATIC(LogRAInventoryManager, Log, All);

//DECLARE_DELEGATE_TwoParams(FConsoleCommandWithWorldAndArgsDelegate, const TArray< FString >&, UWorld*);

FAutoConsoleCommandWithWorldAndArgs DebugIncomingItemCommand(
	TEXT("RA.Debug.InventoryItem"),
	TEXT("RA.Debug.InventoryItem 'ItemName' 'count'"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda(
		[](const TArray< FString >& Args, UWorld* World)
		{
			if (Args.Num() != 2)
			{
				return;
			}

			FName ItemName = FName(Args[0]);
			int32 Count = 0;

			if (Args[1].IsNumeric())
			{
				Count = UKismetStringLibrary::Conv_StringToInt(Args[1]);
			}

			if (World)
			{
				for (auto Iter = TActorIterator<ARAInventoryManager>(World); Iter; ++Iter)
				{
					if (Count > 0)
					{
						Iter->IncomingItem(ItemName, Count);
					}
					else
					{
						Iter->OutgoingItem(ItemName, FMath::Abs(Count));
					}
				}
			}
		}
	)
);

FAutoConsoleCommandWithWorldAndArgs DebugItemHistoryCommand(
	TEXT("RA.Debug.ItemHistory"),
	TEXT("RA.Debug.ItemHistory 'ItemName' 'count' 'bStockDirection(0,1)'"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda(
		[](const TArray< FString >& Args, UWorld* World)
		{
			if (Args.Num() != 3)
			{
				return;
			}

			FName ItemName = FName(Args[0]);
			int32 Count = 0;
			int32 StockDirection = 0;

			if (Args[1].IsNumeric())
			{
				Count = UKismetStringLibrary::Conv_StringToInt(Args[1]);
			}

			if (Args[2].IsNumeric())
			{
				StockDirection = UKismetStringLibrary::Conv_StringToInt(Args[2]);
			}

			if (World)
			{
				for (auto Iter = TActorIterator<ARAInventoryManager>(World); Iter; ++Iter)
				{
					Iter->AddItemHistory(ItemName, Count, (bool)StockDirection, FDateTime::UtcNow());
				}
			}
		}
	)
);

bool ARAInventoryManager::IsAllowClass(URAManageComponent* Comp)
{
	if (Comp == nullptr)
	{
		return false;
	}

	return Comp->GetClass()->IsChildOf<URAManageComponent_Item>();

	// 클래스가 정확하게 일치해야 하는 경우 IsA, 
	// 하위 클래스까지 허용하는 경우 IsChildOf
	// Comp->IsA(URAManageComponent_Robot::StaticClass())
}

bool ARAInventoryManager::GetItemSpec(const FName& Row, FRAItemSpec& ItemSpec)
{
	if (ItemTable == nullptr)
	{
		return false;
	}

	const FRAItemSpec* FoundItemSpec = ItemTable->FindRow<FRAItemSpec>(Row, TEXT(""));
	if (FoundItemSpec)
	{
		ItemSpec = *FoundItemSpec;
		return true;
	}

	return false;
}

void ARAInventoryManager::AddItemHistory(FName SpecName, int32 Count, bool bStockDirection, FDateTime Time)
{
	FRAItemHistory History;
	History.SpecName = SpecName;
	History.Count = Count;
	History.bStockDirection = bStockDirection;
	History.Time = Time;

	AddItemHistoryInternal(History);
}

void ARAInventoryManager::AddItemHistoryInternal(const FRAItemHistory& NewHistory)
{
	if (NewHistory.SpecName == NAME_None)
	{
		return;
	}

	ItemHistory.Add(NewHistory);
	OnItemHistoryChanged.Broadcast();
}

void ARAInventoryManager::IncomingItem(FName ItemName, int32 Count)
{
	if (ItemName == NAME_None)
	{
		return;
	}

	if (Count < 1)
	{
		ensureMsgf(false, TEXT("Incoming Item count must bigger than 0."));
		return;
	}

	ItemStockMap.FindOrAdd(ItemName) += Count;

	OnIncomingItem.Broadcast(ItemName, Count);
}

void ARAInventoryManager::OutgoingItem(FName ItemName, int32 Count)
{
	if (ItemName == NAME_None)
	{
		return;
	}

	if (Count < 1)
	{
		ensureMsgf(false, TEXT("Outgoing Item count must bigger than 0."));
		return;
	}

	if (!IsItemEnough(ItemName, Count))
	{
		UE_LOG(LogRAInventoryManager, Warning, TEXT("Not enough item(%s), stock(%d), outgoing(%d)")
			, *ItemName.ToString(), GetItemCount(ItemName), Count);
		return;
	}

	ItemStockMap[ItemName] -= Count;
	if (ItemStockMap[ItemName] <= 0)
	{
		ItemStockMap.Remove(ItemName);
	}
	
	OnOutgoingItem.Broadcast(ItemName, Count);
}

bool ARAInventoryManager::IsItemEnough(const FName& ItemName, int32 Count) const
{
	if (ItemStockMap.Contains(ItemName))
	{
		return ItemStockMap[ItemName] >= Count;
	}
	return false;
}

int32 ARAInventoryManager::GetItemCount(const FName& ItemName) const
{
	if (ItemStockMap.Contains(ItemName))
	{
		return ItemStockMap[ItemName];
	}

	return 0;
}

