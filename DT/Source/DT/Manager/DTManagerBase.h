

#pragma once

#include "CoreMinimal.h"
#include "DTActor.h"
#include "DTManagerBase.generated.h"

class ADTManagerBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManagerLoadComplete, ADTManagerBase*, Manager);

UENUM(BlueprintType)
enum class EDTManagerLoadState : uint8
{
	Unloaded,
	Loading,
	Loaded
};

UCLASS(abstract, Blueprintable, BlueprintType)
class DT_API ADTManagerBase : public ADTActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADTManagerBase();

public:
	UPROPERTY(BlueprintAssignable)
	FOnManagerLoadComplete OnLoadCompleted;

	UFUNCTION(BlueprintNativeEvent)
	void LoadManager();
	virtual void LoadManager_Implementation();

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	EDTManagerLoadState LoadState;

	UFUNCTION(BlueprintCallable)
	void TryNotifyLoadCompleted();

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsLoaded() const 
	{ 
		return LoadState == EDTManagerLoadState::Loaded; 
	}
};
