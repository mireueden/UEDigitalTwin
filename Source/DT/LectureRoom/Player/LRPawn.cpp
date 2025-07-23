// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/Player/LRPawn.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"

// Sets default values
ALRPawn::ALRPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(SceneComp);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(SceneComp);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));;
	CameraComp->SetupAttachment(SpringArmComp);

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));;
	CollisionComp->SetupAttachment(SceneComp);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMeshComp->SetupAttachment(SceneComp);

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshFinder(TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	if (MeshFinder.Succeeded())
	{
		//UStaticMesh* Mesh = Cast<UStaticMesh>(MeshFinder.Object);
		UE_LOG(LogTemp, Log, TEXT("[TEST] Found Mesh."));
		StaticMeshComp->SetStaticMesh(MeshFinder.Object);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("[TEST] Not found Mesh."));
	}

	MovementComp = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
}

// Called when the game starts or when spawned
void ALRPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALRPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALRPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
