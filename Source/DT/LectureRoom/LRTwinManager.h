#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LRTwinManager.generated.h"

class ULRObjectComponent;

UCLASS(BlueprintType, Blueprintable)
class ALRTwinManager : public AActor
{
	GENERATED_BODY()

public:
	static TMap<UWorld*, ALRTwinManager*> WorldTwinManagerMap;

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static ALRTwinManager* GetWorldTwinManager(UObject* WorldContextObject, bool bCreate = false);

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, transient, Category = "LRTwinManager")
	TArray<ULRObjectComponent*> LRObjectComplist;

	// TODO :int32 반환값을 사용해서 추가된 항목 수 또는 제거된 항목수를 표현할 수 도 있음
public:
	// LRObjectComponent 레퍼런스 등록
	UFUNCTION(BlueprintCallable)
	void AddLRObjectComponent(ULRObjectComponent* Comp);

	// LRObjectComponent 레퍼런스 해제
	UFUNCTION(BlueprintCallable)
	void RemoveLRObjectComponent(ULRObjectComponent* Comp);

	UFUNCTION(BlueprintPure)
	bool HasContainsLRObjectComponent(ULRObjectComponent* Comp) const;

};

