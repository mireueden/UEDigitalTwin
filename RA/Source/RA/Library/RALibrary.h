// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RALibrary.generated.h"

class UActorComponent;
class ARAManagerBase;

/**
 * 
 */
UCLASS()
class RA_API URALibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Blueprint에서 구조체 포인트 허용 안됨
	//UFUNCTION(BlueprintPure, Category = "RALibrary")
	//static UActorComponent* ResolveComponentReference(FBaseComponentReference ComponentReference, AActor* OwningActor = nullptr);

	UFUNCTION(BlueprintPure, Category = "RALibrary")
	static UActorComponent* ResolveBaseComponentReference(FBaseComponentReference ComponentReference, AActor* OwningActor = nullptr);

	UFUNCTION(BlueprintPure, Category = "RALibrary")
	static UActorComponent* ResolveSoftComponentReference(FSoftComponentReference ComponentReference, AActor* OwningActor = nullptr);

	UFUNCTION(BlueprintPure, Category = "RALibrary")
	static UActorComponent* ResolveComponentReference(FComponentReference ComponentReference, AActor* OwningActor = nullptr);


public:
	UFUNCTION(BlueprintCallable, Category = "RALibrary", meta=(WorldContext="WorldContextObject"))
	static bool IsGameWorld(UObject* WorldContextObject);

public:
	UFUNCTION(BlueprintCallable, Category = "RALibrary", meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "ManagerClass", DynamicOutputParam = "Manager"))
	static void GetRAManager(UObject* WorldContextObject, TSubclassOf<ARAManagerBase> ManagerClass, ARAManagerBase*& Manager);

};
