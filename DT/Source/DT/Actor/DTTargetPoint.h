

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "GameplayTagContainer.h"
#include "DTTargetPoint.generated.h"

UCLASS()
class DT_API ADTTargetPoint : public ATargetPoint
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADTTargetPoint();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (Categories="DT.TargetPoint"))
	FGameplayTag TargetTag;
	
};
