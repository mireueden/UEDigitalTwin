// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Manager/RAManagerBase.h"
#include "RARobotManager.generated.h"

/**
 * 
 */
UCLASS()
class RA_API ARARobotManager : public ARAManagerBase
{
	GENERATED_BODY()

public:
	virtual bool IsAllowClass(URAManageComponent* Comp) override;
	
};
