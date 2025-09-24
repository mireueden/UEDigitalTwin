


#include "Library/DTLibrary.h"
#include "GameMode/DTGameMode.h"
#include "Manager/DTManagerBase.h"
#include "Kismet/GameplayStatics.h"


ADTManagerBase* UDTLibrary::GetManager(UObject* WorldContextObject, TSubclassOf<ADTManagerBase> ManagerClass)
{
	ADTGameMode* GameMode = Cast<ADTGameMode>(UGameplayStatics::GetGameMode(WorldContextObject));
	if (GameMode)
	{
		return GameMode->GetManager(ManagerClass);
	}

	return nullptr;
}


FGameplayTag UDTLibrary::GetMatchTagInContainer(FGameplayTag Tag, FGameplayTagContainer TagContainer)
{
	for (auto& TargetTag : TagContainer)
	{
		if (Tag.MatchesTag(TargetTag))
		{
			return TargetTag;
		}
	}

	return FGameplayTag::EmptyTag;
}
