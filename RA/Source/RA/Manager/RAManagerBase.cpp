// Fill out your copyright notice in the Description page of Project Settings.


#include "Manager/RAManagerBase.h"
#include "Components/RAManageComponent.h"

void ARAManagerBase::Initialize()
{
	InitializeState = ERAManagerInitializeState::Initializing;

	OnPreInitialized.Broadcast(this);
	InitializeNative();
	BP_Initialize();
	OnPostInitialized.Broadcast(this);

	InitializeState = ERAManagerInitializeState::Initialized;
}

void ARAManagerBase::InitializeNative()
{
	// c++ override
}

void ARAManagerBase::AddManageComponent(URAManageComponent* Comp)
{
	if (!IsAllowClass(Comp))
	{
		return;
	}

	ManageComponentList.Add(Comp);
	OnManageComponentAdded.Broadcast(Comp);
}

void ARAManagerBase::RemoveManageComponent(URAManageComponent* Comp)
{
	if (Comp == nullptr)
	{
		return;
	}

	ManageComponentList.Remove(Comp);
	OnManageComponentRemoved.Broadcast(Comp);
}

void ARAManagerBase::GetManageComponents(TArray<URAManageComponent*>& ComponentList)
{
	ComponentList.Empty();
	ComponentList.Append(ManageComponentList);
}
