// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/LRInteractiveActor.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ALRInteractiveActor::ALRInteractiveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(SceneComp);
	
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMeshComp->SetupAttachment(SceneComp);
	
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	CollisionComp->SetupAttachment(SceneComp);
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

}

