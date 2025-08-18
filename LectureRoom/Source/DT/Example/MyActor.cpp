// Copyright Epic Games, Inc. All Rights Reserved.

#include "Example/MyActor.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "MyObject.h"

void AMyDummy::TestSpawn()
{
	Obj = NewObject<UMyObject>();
}

AMyActor::AMyActor()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MySpringArm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera"));

	// Root -> SpringArm -> Camera
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootScene");
	SpringArm->SetupAttachment(RootComponent);
	Camera->SetupAttachment(SpringArm);

	SpringArm->TargetArmLength = 500.f;
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
}

void AMyActor::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
}

void AMyActor::RemoveTestObject()
{
	DummyActor->Obj = nullptr;
	DummyActor->SetLifeSpan(.1f);
}

void AMyActor::NewTestObject()
{
	//ManagedMyObj = NewObject<UMyObject>(GetTransientPackage());
	FActorSpawnParameters SpawnParam;
	DummyActor = GetWorld()->SpawnActor<AMyDummy>(SpawnParam);
	DummyActor->TestSpawn();
	TestMyObj = DummyActor->Obj;
}

bool AMyActor::IsValidManagedTestObject()
{

	return DummyActor && IsValid(DummyActor->Obj);
}

bool AMyActor::IsValidTestObject()
{
	return IsValid(TestMyObj);
}


