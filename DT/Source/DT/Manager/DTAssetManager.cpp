
#include "Manager/DTAssetManager.h"
#include "Types/DTGameplayTags.h"
#include "DataAsset/DTSpecDataAsset.h"
#include "DataAsset/DTCellDataAsset.h"
#include "Types/DTDefine.h"


ADTAssetManager* ADTAssetManager::GetDTAssetManager(UObject* WorldContextObject)
{
#if 0
	UWorld* World = WorldContextObject ? WorldContextObject->GetWorld() : nullptr;
	if (World == nullptr)
	{
		return nullptr;
	}

	static ADTAssetManager* WorldAssetManager;
	if (!IsValid(WorldAssetManager))
	{
		TSubclassOf<ADTAssetManager> DTAssetManagerClass = ADTAssetManager::StaticClass();

		const UDTProjectSettings* DTProjectSettings = GetDefault<UDTProjectSettings>();
		check(DTProjectSettings);

		const FSoftClassPath& ClassPath = DTProjectSettings->DTAssetManagerClassName;
		if (ClassPath.IsValid())
		{
			DTAssetManagerClass = ClassPath.TryLoadClass<ADTAssetManager>();
		}

		WorldAssetManager = World->SpawnActor<ADTAssetManager>(DTAssetManagerClass);
	}

	return WorldAssetManager;
#endif
	return nullptr;
}

void ADTAssetManager::BeginPlay()
{
	Super::BeginPlay();

	InitializeDataAssetMap();
}

void ADTAssetManager::InitializeDataAssetMap()
{
	if (TagAssetTable == nullptr)
	{
		ensureMsgf(false, TEXT("Invalid TagAssetTable."));
		return;
	}

	TArray<FDTTagAssetData*> TagAssetList;
	TagAssetTable->GetAllRows<FDTTagAssetData>(TEXT(""), TagAssetList);

	for (const auto& Row : TagAssetList)
	{
		// TODO : 로드 타이밍에, DataTable 읽어서 로드 하도록 수정 필요
		Row->DataAsset.LoadSynchronous();

		if (Row->AssetTag.MatchesTag(DTAssetSpecTag.GetTag()))
		{
			SpecDataAssetMap.FindOrAdd(Row->AssetTag) = Cast<UDTSpecDataAsset>(Row->DataAsset.Get());
		}
		else if (Row->AssetTag.MatchesTag(DTAssetCellTag.GetTag()))
		{
			CellDataAssetMap.FindOrAdd(Row->AssetTag) = Cast<UDTCellDataAsset>(Row->DataAsset.Get());
		}
	}
}

UDTSpecDataAsset* ADTAssetManager::GetSpecDataAssetByTag(const FGameplayTag& Tag)
{
	if (Tag.IsValid() && SpecDataAssetMap.Contains(Tag))
	{
		return SpecDataAssetMap[Tag];
	}

	ensureAlwaysMsgf(false, TEXT("Not found SpecDataAsset by tag(%s)"), *Tag.GetTagName().ToString());

	return nullptr;
}

UDTSpecDataAsset* ADTAssetManager::GetSpecDataAssetByName(const FName& TagName)
{
	return GetSpecDataAssetByTag(FGameplayTag::RequestGameplayTag(TagName, false));
}

UDTCellDataAsset* ADTAssetManager::GetCellDataAssetByTag(const FGameplayTag& Tag)
{
	if (Tag.IsValid() && CellDataAssetMap.Contains(Tag))
	{
		return CellDataAssetMap[Tag];
	}

	ensureAlwaysMsgf(false, TEXT("Not found CellDataAsset by tag(%s)"), *Tag.GetTagName().ToString());

	return nullptr;
}

UDTCellDataAsset* ADTAssetManager::GetCellDataAssetByName(const FName& TagName)
{
	return GetCellDataAssetByTag(FGameplayTag::RequestGameplayTag(TagName, false));
}