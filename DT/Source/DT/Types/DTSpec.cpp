// Fill out your copyright notice in the Description page of Project Settings.


#include "Types/DTSpec.h"
#include "DataAsset/DTSpecDataAsset.h"
#include "Manager/DTAssetManager.h"
#include "GameMode/DTGameMode.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogDTSpec, Log, All)

void UDTSpec::InitSpec()
{
	UE_LOG(LogDTSpec, Log, TEXT("UDTSpec::InitSpec Begin."));
	ADTGameMode* GameMode = Cast<ADTGameMode>(UGameplayStatics::GetGameMode(this));
	ADTAssetManager* Manager = GameMode ? Cast<ADTAssetManager>(GameMode->GetManager(ADTAssetManager::StaticClass())) 
										: nullptr;
	if (Manager)
	{
		SpecDataAsset = Manager->GetSpecDataAssetByTag(Type);
		UE_LOG(LogDTSpec, Log, TEXT("UDTSpec::InitSpec Found SpecDataAsset(%s)"), *GetNameSafe(SpecDataAsset));
	}

	if (IsValidSpec())
	{
		ProcessCellIndex = 0;
		LastProcessCellIndex = SpecDataAsset->ProcessCellList.Num() - 1;
	}
	else
	{
		ProcessCellIndex = INDEX_NONE;
		LastProcessCellIndex = INDEX_NONE;
		UE_LOG(LogDTSpec, Warning, TEXT("UDTSpec::InitSpec - Invalid Spec."));
	}
	UE_LOG(LogDTSpec, Log, TEXT("UDTSpec::InitSpec End."));
}

bool UDTSpec::IsProcessCellFinished() const
{
	return ProcessCellIndex > LastProcessCellIndex;
}

int32 UDTSpec::GetNextProcessCellIndex() const
{
	if (IsProcessCellFinished())
	{
		return INDEX_NONE;
	}

	return ProcessCellIndex + 1;
}

int32 UDTSpec::GetCurrentPrcessCellIndex() const
{
	return ProcessCellIndex;
}

void UDTSpec::SetNextProcessCellIndex()
{
	if (IsProcessCellFinished())
	{
		return;
	}

	ProcessCellIndex += 1;
	// Callback (index 변경, Process 완료 여부)
}

void UDTSpec::SetState(EDTSpecState NewState)
{
	if (State == NewState)
	{
		return;
	}

	EDTSpecState PrevState = State;
	State = NewState;

	OnSpecStateChanged.Broadcast(this, PrevState, State);
}

void UDTSpec::GetOwnedGameplayTags(FGameplayTagContainer& Tag) const
{
	Tag.AppendTags(SpecTags);
}
