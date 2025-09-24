


#include "Manager/DTFactoryManager.h"
#include "AbilitySystem/DTAbilitySystemComponent.h"
#include "Actor/DTTargetPoint.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADTFactoryManager::ADTFactoryManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADTFactoryManager::BeginPlay()
{
	Super::BeginPlay();
	
	InitializeTargetPointMap(); // TODO : LoadManager 통합 될 수 있습니다.
}

void ADTFactoryManager::RegisterAbilitySystemComp(UDTAbilitySystemComponent* ASC)
{
	if (ASC == nullptr)
	{
		ensure(false);
		return;
	}

	int32 Index = ASCList.Add(ASC);

	if (Index != INDEX_NONE)
	{
		OnASCRegistered.Broadcast(ASC);
	}
}

void ADTFactoryManager::UnregisterAbilitySystemComp(UDTAbilitySystemComponent* ASC)
{
	if (ASC == nullptr)
	{
		ensure(false);
		return;
	}

	if (ASCList.Remove(ASC))
	{
		OnASCUnregistered.Broadcast(ASC);
	}
}

void ADTFactoryManager::InitializeTargetPointMap()
{
	for (TActorIterator<ADTTargetPoint> Iter(GetWorld()); Iter; ++Iter)
	{
		TargetPointMap.FindOrAdd(Iter->TargetTag, *Iter);
	}
}


FTransform ADTFactoryManager::GetTargetTransform_Implementation(FGameplayTag TargetTag, bool& bFound)
{
	if (TargetPointMap.Contains(TargetTag))
	{
		if (ADTTargetPoint* TargetPoint = Cast<ADTTargetPoint>(TargetPointMap[TargetTag]))
		{
			bFound = true;
			return TargetPoint->GetActorTransform();
		}
	}

	bFound = false;
	return FTransform::Identity;
}

void ADTFactoryManager::GetAllTargetTransform_Implementation(FGameplayTag FilterTargetTag, TMap<FGameplayTag, FTransform>& OutTargetTransform)
{
	OutTargetTransform.Empty();

	for (auto& Pair : TargetPointMap)
	{
		FGameplayTag& Tag = Pair.Key;
#if 0
		FTransform Transform = Pair.Value ? Pair.Value->GetActorTransform() : FTransform::Identity;
		if (Tag.MatchesTag(FilterTargetTag))
		{
			OutTargetTransform.FindOrAdd(Tag, Transform);
		}
#else
		bool bFound = false;
		FTransform Transform = IDTTargetPointInterface::Execute_GetTargetTransform(this, Tag, bFound);
		if (bFound && Tag.MatchesTag(FilterTargetTag))
		{
			OutTargetTransform.FindOrAdd(Tag, Transform);
		}
#endif
	}
}


