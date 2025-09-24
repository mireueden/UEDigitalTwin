


#include "AsyncAction/DTAA_LoadManagerComplete.h"
#include "GameMode/DTGameMode.h"
#include "Kismet/GameplayStatics.h"

UDTAA_LoadManagerComplete* UDTAA_LoadManagerComplete::CreateListenLoadManagerCompleted(UObject* WorldContextObject)
{
	UDTAA_LoadManagerComplete* AsyncAction =
		NewObject<UDTAA_LoadManagerComplete>(WorldContextObject);
	AsyncAction->RegisterWithGameInstance(WorldContextObject);
	AsyncAction->CachedGameMode = Cast<ADTGameMode>(UGameplayStatics::GetGameMode(WorldContextObject));

	return AsyncAction;
}

void UDTAA_LoadManagerComplete::Activate()
{
	if (!IsValid(CachedGameMode))
	{
		Cancel();
		return;
	}

	if (CachedGameMode->IsInitializeManagersComplete())
	{
		NotifyLoadManagerComplete();
		return;
	}

	CachedGameMode->OnInitializeManagersComplete.AddDynamic(this, &UDTAA_LoadManagerComplete::NotifyLoadManagerComplete);
}

void UDTAA_LoadManagerComplete::NotifyLoadManagerComplete()
{
	if (!ShouldBroadcastDelegates())
	{
		return;
	}

	if (CachedGameMode->OnInitializeManagersComplete.IsAlreadyBound(this, &UDTAA_LoadManagerComplete::NotifyLoadManagerComplete))
	{
		CachedGameMode->OnInitializeManagersComplete.RemoveDynamic(this, &UDTAA_LoadManagerComplete::NotifyLoadManagerComplete);
	}

	OnLoadManagerComplete.Broadcast();

	SetReadyToDestroy();
}
