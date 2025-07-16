// Copyright Epic Games, Inc. All Rights Reserved.

#include "Example/MyBall.h"

// ******************
// AMyGround
// ******************

AMyGround::AMyGround()
{
	BallClass = AMyBall::StaticClass();
}

void AMyGround::SpawnBall(FTransform T)
{
	// 바운드 안의 랜덤한 위치를 사용할 예정입니다.
	AMyBall* Ball = GetWorld()->SpawnActor<AMyBall>(BallClass, T);
	BallList.Add(Ball);

	BindBall(Ball);
	// EndPlay 이후 타이밍에 Destory되기 때문에, Unbind 시점으로 늦을 수 있습니다.
	Ball->OnDestroyed.AddDynamic(this, &AMyGround::UnbindBall);
}

void AMyGround::BindBall(AMyBall* TargetBall)
{
	if (!IsValid(TargetBall))
	{
		return;
	}
	
	if (!TargetBall->OnBallMoved.IsBound())
	{
		TargetBall->OnBallMoved.BindUObject(this, &AMyGround::OnBallMoved);
	}

	if (!TargetBall->OnDynamicBallMoved.IsBound())
	{
		TargetBall->OnDynamicBallMoved.BindDynamic(this, &AMyGround::OnBallMovedDynamic);
	}

	TargetBall->OnMultiBallMoved.AddUObject(this, &AMyGround::OnBallMovedMulti);
	TargetBall->OnDynamicMulticBallMoved.AddDynamic(this, &AMyGround::OnBallMovedDynamicMulti);
}

void AMyGround::UnbindBall(AActor* TargetBall)
{
	AMyBall* Ball = Cast<AMyBall>(TargetBall);
	if (Ball == nullptr)
	{
		return;
	}

	if (Ball->OnBallMoved.IsBoundToObject(this))
	{
		Ball->OnBallMoved.Unbind();
	}

	if (Ball->OnDynamicBallMoved.IsBoundToObject(this))
	{
		Ball->OnDynamicBallMoved.Unbind();
	}

	// this 가 바인드 한 모든 델리게이트를 제거 합니다.
	Ball->OnMultiBallMoved.RemoveAll(this);
	Ball->OnDynamicMulticBallMoved.RemoveAll(this);

	// 모든 델리게이트 바인드를 제거합니다.
	//Ball->OnMultiBallMoved.Clear();
}

void AMyGround::OnBallMoved(AMyBall* Ball, FVector Location)
{
	UE_LOG(LogTemp, Log, TEXT("Ball(%s) Moved at %s [Delegate]"), *GetNameSafe(Ball), *Location.ToString());
}
void AMyGround::OnBallMovedDynamic(AMyBall* Ball, FVector Location)
{
	UE_LOG(LogTemp, Log, TEXT("Ball(%s) Moved at %s [DynamicDelegate]"), *GetNameSafe(Ball), *Location.ToString());
}
void AMyGround::OnBallMovedMulti(AMyBall* Ball, FVector Location)
{
	UE_LOG(LogTemp, Log, TEXT("Ball(%s) Moved at %s [MultiDelegate]"), *GetNameSafe(Ball), *Location.ToString());
}
void AMyGround::OnBallMovedDynamicMulti(AMyBall* Ball, FVector Location)
{
	UE_LOG(LogTemp, Log, TEXT("Ball(%s) Moved at %s [DynamicMultiDelegate]"), *GetNameSafe(Ball), *Location.ToString());
}


// ******************
// AMyBall
// ******************
AMyBall::AMyBall()
{

}

void AMyBall::BeginPlay()
{
	Super::BeginPlay();
}

void AMyBall::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
}

void AMyBall::SetBallLocation(FVector NewLocation)
{
	// TODO : Vector 비교시, Tolerance값을 주어서 비교해야함
	if (GetActorLocation() == NewLocation)
	{
		return;
	}

	SetActorLocation(NewLocation);

	OnBallMoved.ExecuteIfBound(this, NewLocation);
	OnDynamicBallMoved.ExecuteIfBound(this, NewLocation);
	OnMultiBallMoved.Broadcast(this, NewLocation);
	OnDynamicMulticBallMoved.Broadcast(this, NewLocation);
}
