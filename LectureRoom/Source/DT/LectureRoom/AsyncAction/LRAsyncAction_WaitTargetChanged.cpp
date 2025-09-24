// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/AsyncAction/LRAsyncAction_WaitTargetChanged.h"
#include "NSDT/LectureRoom/LRTwinManager.h"
#include "NSDT/LectureRoom/LRInteractiveActor.h"
#include "GameFramework/Pawn.h"

ULRAsyncAction_WaitTargetChanged* ULRAsyncAction_WaitTargetChanged::CreateWaitLRTargetChanged(UObject* WorldContextObject, bool bRetriggerable)
{
	ULRAsyncAction_WaitTargetChanged* AsyncAction
		= NewObject<ULRAsyncAction_WaitTargetChanged>(WorldContextObject);

	// Activate 실행시, 오브젝트에서 사용할 값 설정
	AsyncAction->CachedWorldContext = WorldContextObject;
	AsyncAction->bRetriggerable = bRetriggerable;

	return AsyncAction;
}

void ULRAsyncAction_WaitTargetChanged::Activate()
{
	CachedTwinManager = ALRTwinManager::GetWorldTwinManager(CachedWorldContext);
	if(CachedTwinManager ==nullptr)
	{
		Cancel();
		return;
	}
	
	RegisterWithGameInstance(this);
	CachedTwinManager->OnTargetActorChanged.AddDynamic(this, &ULRAsyncAction_WaitTargetChanged::OnWaitTargetChanged);
}

void ULRAsyncAction_WaitTargetChanged::Cancel()
{
	if (CachedTwinManager)
	{
		if (CachedTwinManager->OnTargetActorChanged.IsAlreadyBound(this, &ULRAsyncAction_WaitTargetChanged::OnWaitTargetChanged))
		{
			CachedTwinManager->OnTargetActorChanged.RemoveDynamic(this, &ULRAsyncAction_WaitTargetChanged::OnWaitTargetChanged);
		}
	}

	SetReadyToDestroy();
}

void ULRAsyncAction_WaitTargetChanged::OnWaitTargetChanged(APawn* Pawn, ALRInteractiveActor* OldTarget, ALRInteractiveActor* NewTarget)
{
	if (ShouldBroadcastDelegates())
	{
		OnWaitTargetChangedDelegate.Broadcast(Pawn, OldTarget, NewTarget);
		
		if (bRetriggerable == false)
		{
			Cancel();
		}
	}
}