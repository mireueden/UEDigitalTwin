// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "RAManagerBase.generated.h"

class ARAManagerBase;
class URAManageComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FManagerPhaseDelegate, ARAManagerBase*, Manager);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManageComponentDelegate, URAManageComponent*, Comp);

UENUM()
enum class ERAManagerInitializeState : uint8
{
	Uninitialized,
	Initializing,
	Initialized,
};

UCLASS(abstract, Blueprintable, BlueprintType)
class RA_API ARAManagerBase : public AInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ERAManagerInitializeState InitializeState;

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsInitialized() const { return InitializeState == ERAManagerInitializeState::Initialized; }

	UFUNCTION()
	void Initialize();
	
	UFUNCTION()
	virtual void InitializeNative();

	UFUNCTION(BlueprintImplementableEvent, Category = "RAManager", meta = (DisplayName = "Initialize"))
	void BP_Initialize();

	UPROPERTY(BlueprintAssignable, Category = "RAManager")
	FManagerPhaseDelegate OnPreInitialized;

	UPROPERTY(BlueprintAssignable, Category = "RAManager")
	FManagerPhaseDelegate OnPostInitialized;

	// TODO : 25.08.26 매니저별 컴포넌트 등록 함수 오버라이드 필요
	// TODO : 컴포넌트 Add, Remove 델리게이트 추가
public:
	// *********************************
	// Begin RAManagerBase Interface
	// *********************************
	UFUNCTION()
	virtual void AddManageComponent(URAManageComponent* Comp);

	UFUNCTION()
	virtual void RemoveManageComponent(URAManageComponent* Comp);

	UFUNCTION(BlueprintCallable, Category = "RAManager")
	virtual void GetManageComponents(TArray<URAManageComponent*>& ComponentList);

	UFUNCTION()
	virtual bool IsAllowClass(URAManageComponent* Comp) { return false; }

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "RAManager")
	TArray<URAManageComponent*> ManageComponentList;

	UPROPERTY(BlueprintAssignable, Category = "RAManager")
	FOnManageComponentDelegate OnManageComponentAdded;

	UPROPERTY(BlueprintAssignable, Category = "RAManager")
	FOnManageComponentDelegate OnManageComponentRemoved;
	// *********************************
	// End RAManagerBase Interface
	// *********************************

};
