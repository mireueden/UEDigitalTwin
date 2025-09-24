// Fill out your copyright notice in the Description page of Project Settings.


#include "Manager/RARobotManager.h"
#include "Components/RAManageComponent.h"

bool ARARobotManager::IsAllowClass(URAManageComponent* Comp)
{
	if (Comp == nullptr)
	{
		return false;
	}
	
	return Comp->GetClass()->IsChildOf<URAManageComponent_Robot>();

	// 클래스가 정확하게 일치해야 하는 경우 IsA, 
	// 하위 클래스까지 허용하는 경우 IsChildOf
	// Comp->IsA(URAManageComponent_Robot::StaticClass())
}