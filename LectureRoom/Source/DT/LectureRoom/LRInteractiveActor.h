// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LectureRoom/Interface/LRActorInterface.h"
#include "LRInteractiveActor.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UBoxComponent;
class ULRInteractComponentBase;

UCLASS()
class DT_API ALRInteractiveActor : public AActor, public ILRActorInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALRInteractiveActor();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* SceneComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* CollisionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ULRInteractComponentBase* LRComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

#if WITH_EDITOR
	UFUNCTION(BlueprintCallable)
	void TestDebugMessage();
#endif // WITH_EDITOR

	UFUNCTION(BlueprintCallable)
	void TestDebugMessageBlueprintSafe();

#if WITH_EDITORONLY_DATA
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString DebugMessage;
#endif // WITH_EDITORONLY_DATA

public:
	// ~ Begin ILRActorInterface
	virtual void TurnOn_Implementation() override;
	virtual void TurnOff_Implementation() override;
	virtual void BeginFocus_Implementation() override;
	virtual void EndFocus_Implementation() override;
	// ~ End ILRActorInterface

};
