

#pragma once

#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "DTAA_LoadManagerComplete.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadManagerComplete);

class ADTGameMode;

UCLASS(BlueprintType)
class DT_API UDTAA_LoadManagerComplete : public UCancellableAsyncAction
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext="WorldContextObject", DisplayName="ListenLoadManagerCompleted"))
	static UDTAA_LoadManagerComplete* CreateListenLoadManagerCompleted(UObject* WorldContextObject);

	virtual void Activate() override;

public:
	UPROPERTY(BlueprintAssignable)
	FOnLoadManagerComplete OnLoadManagerComplete;

	UFUNCTION()
	void NotifyLoadManagerComplete();

private:

	UPROPERTY()
	ADTGameMode* CachedGameMode;



};