// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "LRAsyncAction_WaitTargetChanged.generated.h"

class APawn;
class ALRInteractiveActor;

/**
 * 
 */
UCLASS()
class DT_API ULRAsyncAction_WaitTargetChanged : public UCancellableAsyncAction
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Wait Target Changed"))
	static ULRAsyncAction_WaitTargetChanged* CreateWaitLRTargetChanged(UObject* WorldContextObject, bool bRetriggerable);

	virtual void Activate() override;
	virtual void Cancel() override;

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWaitTargetChanged, APawn*, TargetPawn, ALRInteractiveActor*, OldTarget, ALRInteractiveActor*, NewTarget);

	UPROPERTY(BlueprintAssignable)
	FOnWaitTargetChanged OnWaitTargetChangedDelegate;

	UFUNCTION()
	void OnWaitTargetChanged(APawn* Pawn, ALRInteractiveActor* OldTarget, ALRInteractiveActor* NewTarget);

private:
	UPROPERTY()
	UObject* CachedWorldContext;

	UPROPERTY()
	class ALRTwinManager* CachedTwinManager;

	UPROPERTY()
	bool bRetriggerable;
};
