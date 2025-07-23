// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/LRInteractiveActor.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "LectureRoom/Components/LRInteractComponentBase.h"

// Sets default values
ALRInteractiveActor::ALRInteractiveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(SceneComp);
	
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	CollisionComp->SetupAttachment(SceneComp);

	LRComponent = CreateDefaultSubobject<ULRInteractComponentBase>(TEXT("LRInteractComp"));
}

// Called when the game starts or when spawned
void ALRInteractiveActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALRInteractiveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

#if WITH_EDITOR
	//TestDebugMessage();
#endif

}

// WITH_EDITOR : 에디터 환경에서만 사용하는 코드
// WITH_EDITORONLY_DATA : 에디터 환경에서만 사용하는 프로퍼티
// UE_BUILD_SHIPPING, UE_BUILD_DEVELOPMENT, UE_BUILD_DEBUG
// PLATFORM_WINDOWS, PLATFORM_ANDROID, PLATFORM_IOS

#if WITH_EDITOR
void ALRInteractiveActor::TestDebugMessage()
{
#if WITH_EDITORONLY_DATA && !UE_BUILD_SHIPPING
	UE_LOG(LogTemp, Warning, TEXT("DebugMessage : %s"), *DebugMessage);
#endif // WITH_EDITORONLY_DATA
}
#endif // WITH_EDITOR

void ALRInteractiveActor::TestDebugMessageBlueprintSafe()
{
#if WITH_EDITOR && WITH_EDITORONLY_DATA
	UE_LOG(LogTemp, Warning, TEXT("DebugMessage : %s"), *DebugMessage);
#endif // WITH_EDITOR && WITH_EDITORONLY_DATA
}

void ALRInteractiveActor::TurnOn_Implementation()
{
	// BP Override
	UE_LOG(LogTemp, Verbose, TEXT("InteractiveActor::TurnOn"));
}

void ALRInteractiveActor::TurnOff_Implementation()
{
	UE_LOG(LogTemp, Verbose, TEXT("InteractiveActor::TurnOff"));
}

void ALRInteractiveActor::BeginFocus_Implementation()
{
	UE_LOG(LogTemp, Verbose, TEXT("InteractiveActor::BeginFocus"));
}

void ALRInteractiveActor::EndFocus_Implementation()
{
	UE_LOG(LogTemp, Verbose, TEXT("InteractiveActor::EndFocus"));
	

}
