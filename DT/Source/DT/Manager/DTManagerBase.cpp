


#include "Manager/DTManagerBase.h"

// Sets default values
ADTManagerBase::ADTManagerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LoadState = EDTManagerLoadState::Unloaded;
}

void ADTManagerBase::LoadManager_Implementation()
{
	LoadState = EDTManagerLoadState::Loading;
	
	TryNotifyLoadCompleted();
}

void ADTManagerBase::TryNotifyLoadCompleted()
{
	if (LoadState == EDTManagerLoadState::Loaded)
	{
		return;
	}

	LoadState = EDTManagerLoadState::Loaded;
	OnLoadCompleted.Broadcast(this);
}

