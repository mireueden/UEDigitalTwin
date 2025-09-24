
#pragma once

#include "CoreMinimal.h"
#include "Manager/DTManagerBase.h"
#include "GameplayTagContainer.h"
#include "UObject/PrimaryAssetId.h"
#include "Engine/DeveloperSettings.h"
#include "DTAssetManager.generated.h"

class UDataTable;
class UDTSpecDataAsset;
class UDTCellDataAsset;

UCLASS(Config = Game, DefaultConfig, MinimalAPI, meta = (DisplayName = "DTProject"))
class UDTProjectSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Config, Category = "Asset")
	FSoftClassPath DTAssetManagerClassName;
};

UCLASS()
class DT_API ADTAssetManager : public ADTManagerBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(Categories="DT.Asset"))
	TMap<FGameplayTag, FPrimaryAssetId> TagAssetIdList;

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DeprecatedFunction, DeprecationMessage = "Use ADTGameMode::GetManager"))
	static ADTAssetManager* GetDTAssetManager(UObject* WorldContextObject);

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UDataTable* TagAssetTable;

	UPROPERTY(VisibleInstanceOnly)
	TMap<FGameplayTag, UDTSpecDataAsset*> SpecDataAssetMap;

	UPROPERTY(VisibleInstanceOnly)
	TMap<FGameplayTag, UDTCellDataAsset*> CellDataAssetMap;

	UFUNCTION()
	void InitializeDataAssetMap();

	UFUNCTION(BlueprintPure)
	UDTSpecDataAsset* GetSpecDataAssetByTag(const FGameplayTag& Tag);

	UFUNCTION(BlueprintPure)
	UDTSpecDataAsset* GetSpecDataAssetByName(const FName& TagName);

	UFUNCTION(BlueprintPure)
	UDTCellDataAsset* GetCellDataAssetByTag(const FGameplayTag& Tag);
	
	UFUNCTION(BlueprintPure)
	UDTCellDataAsset* GetCellDataAssetByName(const FName& TagName);
};
