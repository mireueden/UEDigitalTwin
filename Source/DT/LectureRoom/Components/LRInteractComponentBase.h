// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LRInteractComponentBase.generated.h"

enum class ELRObjectType : uint8;
class ULRTwinData;
class ULRTwinDataAsset;

DECLARE_LOG_CATEGORY_EXTERN(LogLRInteractComponent, Log, All);

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DT_API ULRInteractComponentBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULRInteractComponentBase();

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

	// TurnOn / TurnOff 
public:
	UFUNCTION(BlueprintCallable)
	virtual void TurnOn();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta=(DisplayName="TurnOn"))
	void ReceiveTurnOn();

	UFUNCTION(BlueprintCallable)
	virtual void TurnOff();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "TurnOff"))
	void ReceiveTurnOff();

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsWorking() const { return bWorking; }

	// BeginFocus / EndFocus
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BeginFocus();
	virtual void BeginFocus_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EndFocus();
	virtual void EndFocus_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FString GetComponentInfo();
	virtual FString GetComponentInfo_Implementation();

public:
	UFUNCTION(BlueprintPure)
	ELRObjectType GetObjectType() const;

	UPROPERTY(VisibleInstanceOnly)
	bool bWorking;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	ULRTwinDataAsset* TwinDataAsset;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	ULRTwinData* TwinData;
};
