// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "RAGameMode.generated.h"

class ARAManagerBase;
class APlayerController;
class URAManageComponent;

//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInitializeManager)

/**
 * 
 */
UCLASS()
class RA_API ARAGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "RAGameMode")
	TArray<TSubclassOf<ARAManagerBase>> ManagerList;

	UPROPERTY()
	TMap<TSubclassOf<ARAManagerBase>, ARAManagerBase*> ManagerInstanceMap;

	UPROPERTY()
	TMap<TSubclassOf<ARAManagerBase>, bool> ManagerInitializedMap;

	UFUNCTION()
	void InitializeManagers();

	UFUNCTION()
	void OnPostInitializeManager(ARAManagerBase* Manager);

public:
	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void Logout(AController* Exiting) override;

public:
	void RegisterManageComponent(URAManageComponent* Comp);
	void UnregisterManageComponent(URAManageComponent* Comp);


};
