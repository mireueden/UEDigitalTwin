// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/RALibrary.h"
#include "Components/ActorComponent.h"
#include "Manager/RAManagerBase.h"
#include "RAGameMode.h"

#if 0
// BaseComponentReference 외에 블루프린트 접근이 어려움
UActorComponent* URALibrary::ResolveComponentReference(FBaseComponentReference ComponentReference, AActor* OwningActor /*= nullptr*/)
{
	//OwningActor = (OwningActor == nullptr)
	FBaseComponentReference* CompPtr = &ComponentReference;
	if (const FComponentReference* CR = (FComponentReference*)CompPtr)
	{
		return CR->GetComponent(OwningActor);
	}
	else if (const FSoftComponentReference* SCR = (FSoftComponentReference*)CompPtr)
	{
		return SCR->GetComponent(OwningActor);
	}
	
	return ComponentReference.ExtractComponent(OwningActor);
}
#endif

UActorComponent* URALibrary::ResolveBaseComponentReference(FBaseComponentReference ComponentReference, AActor* OwningActor /*= nullptr*/)
{
	return ComponentReference.ExtractComponent(OwningActor);
}

UActorComponent* URALibrary::ResolveSoftComponentReference(FSoftComponentReference ComponentReference, AActor* OwningActor /*= nullptr*/)
{
	return ComponentReference.GetComponent(OwningActor);
}

UActorComponent* URALibrary::ResolveComponentReference(FComponentReference ComponentReference, AActor* OwningActor /*= nullptr*/)
{
	return ComponentReference.GetComponent(OwningActor);
}

bool URALibrary::IsGameWorld(UObject* WorldContextObject)
{
	if (UWorld* World = WorldContextObject ? WorldContextObject->GetWorld() : nullptr)
	{
		return World->IsGameWorld();
	}

	return false;
}

void URALibrary::GetRAManager(UObject* WorldContextObject, TSubclassOf<ARAManagerBase> ManagerClass, ARAManagerBase*& Manager)
{
	UWorld* World = WorldContextObject ? WorldContextObject->GetWorld() : nullptr;
	if (World == nullptr)
	{
		ensureMsgf(false, TEXT("Invalid WorldContextObject (%s)"), *GetNameSafe(WorldContextObject));
		return;
	}

	if (ManagerClass == nullptr)
	{
		ensureMsgf(false, TEXT("ManagerClass should not nullptr."));
		return;
	}

	if (ARAGameMode* GameMode = World->GetAuthGameMode<ARAGameMode>())
	{
		Manager = GameMode->ManagerInstanceMap.FindRef(ManagerClass);

#if 0
		Manager = GameMode->ManagerInstanceMap.Contains(ManagerClass) ?
			GameMode->ManagerInstanceMap[ManagerClass] : nullptr;
#elif 0
		if (ARAManagerBase** ManagerPtr = GameMode->ManagerInstanceMap.Find(ManagerClass))
		{
			Manager = *ManagerPtr;
		}
#endif
	}
}