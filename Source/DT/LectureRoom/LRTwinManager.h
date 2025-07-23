#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LRTwinManager.generated.h"

class ULRInteractComponentBase;
class ALRInteractiveActor;
class APawn;

// AddTwinComponent, RemoveComponent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractComponentAdded, ULRInteractComponentBase*, Component);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractComponentRemoved, ULRInteractComponentBase*, Component);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractComponentListChanged);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTargetActorChanged, APawn*, Pawn, ALRInteractiveActor*, OldActor, ALRInteractiveActor*, NewActor);

UCLASS(BlueprintType, Blueprintable)
class ALRTwinManager : public AActor
{
	GENERATED_BODY()

public:
	static TMap<UWorld*, ALRTwinManager*> WorldTwinManagerMap;

	UFUNCTION(BlueprintCallable, meta = (WorldContext="WorldContextObject"))
	static ALRTwinManager* GetWorldTwinManager(UObject* WorldContextObject, bool bCreate = false);

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, transient, Category = "LRTwinManager")
	TArray<ULRInteractComponentBase*> InteractComponentList;

	// TODO :int32 반환값을 사용해서 추가된 항목 수 또는 제거된 항목수를 표현할 수 도 있음
public:
	// LRObjectComponent 레퍼런스 등록
	UFUNCTION(BlueprintCallable)
	void AddInteractComponent(ULRInteractComponentBase* Comp);

	// LRObjectComponent 레퍼런스 해제
	UFUNCTION(BlueprintCallable)
	void RemoveInteractComponent(ULRInteractComponentBase* Comp);

	UFUNCTION(BlueprintPure)
	bool HasInteractComponent(ULRInteractComponentBase* Comp) const;

	UPROPERTY(BlueprintAssignable)
	FOnInteractComponentAdded OnInteractComponentAdded;

	UPROPERTY(BlueprintAssignable)
	FOnInteractComponentRemoved OnInteractComponentRemoved;

	UPROPERTY(BlueprintAssignable)
	FOnInteractComponentListChanged OnInteractComponentListChanged;

public:
	 UFUNCTION(BlueprintPure)
	 ALRInteractiveActor* GetCurrentTargetActor();

	UFUNCTION()
	void NotifyChangeTargetActor(APawn* Pawn, ALRInteractiveActor* OldTargetActor, ALRInteractiveActor* NewTargetActor);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "Pawn", DisplayName = "NotifyChangeTargetActor"))
	static void BP_NotifyChangeTargetActor(APawn* Pawn, ALRInteractiveActor* OldTargetActor, ALRInteractiveActor* NewTargetActor);

	UPROPERTY(BlueprintAssignable)
	FOnTargetActorChanged OnTargetActorChanged;
	
};

