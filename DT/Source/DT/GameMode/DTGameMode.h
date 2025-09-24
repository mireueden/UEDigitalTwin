

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DTGameMode.generated.h"

class ADTManagerBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInitializeManagersComplete);

/**
 * 
 */
UCLASS()
class DT_API ADTGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, Category="Manager")
	TArray<TSubclassOf<ADTManagerBase>> ManagerClassList;

	UPROPERTY(VisibleInstanceOnly, Category="Manager")
	TMap<TSubclassOf<ADTManagerBase>, ADTManagerBase*> ManagerMap;

	UFUNCTION(BlueprintCallable)
	void InitializeManagers();

	UFUNCTION(BlueprintCallable, meta=(DeterminesOutputType="ManagerClass"))
	ADTManagerBase* GetManager(TSubclassOf<ADTManagerBase> ManagerClass);

public:
	UPROPERTY()
	bool bInitializeManager;

	UPROPERTY(transient)
	TArray<ADTManagerBase*> LoadingManagerList;

	UPROPERTY(BlueprintAssignable)
	FOnInitializeManagersComplete OnInitializeManagersComplete;

	UFUNCTION()
	void NotifyInitializeManagerComplete();

	UFUNCTION()
	void OnManagerLoaded(ADTManagerBase* Manager);

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsInitializeManagersComplete() const
	{
		return bInitializeManager && LoadingManagerList.IsEmpty();
	}
};
