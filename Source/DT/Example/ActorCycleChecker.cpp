// Fill out your copyright notice in the Description page of Project Settings.


#include "Example/ActorCycleChecker.h"

// 헤더에 EXTERN 로그 클래스 정의 후, DEFINE_LOG_CATEGORY로 C++에서 사용
//DECLARE_LOG_CATEGORY_EXTERN(ActorCycleCheckerLog, Log, All)
//DEFINE_LOG_CATEGORY(ActorCycleCheckerLog)

// 아래 두개 동일함
// DEFINE_LOG_CATEGORY_STATIC(ActorCycleCheckerLog, Log, All)
DECLARE_LOG_CATEGORY_CLASS(ActorCycleCheckerLog, Log, All)

/*
1 Actor: PostInitProperties
 2 Actor: PostLoadSubobjects
 3 Actor: PostLoad
 4 Actor: PreRegisterAllComponents
 5 Actor: PostRegisterAllComponents
 6 Actor: PreInitializeComponents
 7 Actor: PostInitializeComponents
 8 Actor: BeginPlay
 9 Actor: Tick
 10 Actor: Destroyed
 11 Actor: EndPlay
 12 Actor: UnregisterAllComponents
 13 Actor: PostUnregisterAllComponents
 14 [GarbageCollection]
 15 Actor: BeginDestroy
 16 Actor: UnregisterAllComponents

*/

// Sets default values
AActorCycleChecker::AActorCycleChecker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorCycleChecker::BeginPlay()
{
	Super::BeginPlay();
	
	/*
	*	LogCategory
		Log 단계 Log, Warning, Error
		Log Message
	*/
	
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("BeginPlay %s"), *GetName());
}

// Called every frame
void AActorCycleChecker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(ActorCycleCheckerLog, Log, TEXT("Tick %s"), *GetName());
	
	Destroy();
}

void AActorCycleChecker::EndPlay(EEndPlayReason::Type Reason) 
{
	Super::EndPlay(Reason);
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("EndPlay %s"), *GetName());

}
void AActorCycleChecker::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("Serialize %s"), *GetName());

}
void AActorCycleChecker::PostInitProperties()
{
	Super::PostInitProperties();
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("PostInitProperties %s"), *GetName());
}
void AActorCycleChecker::PostLoad()
{
	Super::PostLoad();
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("PostLoad %s"), *GetName());

}
void AActorCycleChecker::RegisterAllComponents()
{
	Super::RegisterAllComponents();
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("RegisterAllComponents %s"), *GetName());

}
void AActorCycleChecker::PreRegisterAllComponents()
{
	Super::PreRegisterAllComponents();
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("PreRegisterAllComponents %s"), *GetName());

}
void AActorCycleChecker::PostRegisterAllComponents()
{
	Super::PostRegisterAllComponents();
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("PostRegisterAllComponents %s"), *GetName());

}
void AActorCycleChecker::UnregisterAllComponents(bool bForReregister)
{
	Super::UnregisterAllComponents(bForReregister);
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("UnregisterAllComponents %s"), *GetName());

}
void AActorCycleChecker::PostUnregisterAllComponents()
{
	Super::PostUnregisterAllComponents();
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("PostUnregisterAllComponents %s"), *GetName());

}
void AActorCycleChecker::BeginDestroy()
{
	Super::BeginDestroy();
	UE_LOG(ActorCycleCheckerLog, Log, TEXT("BeginDestroy %s"), *GetName());

}
