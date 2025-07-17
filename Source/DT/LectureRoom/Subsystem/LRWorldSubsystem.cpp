// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/Subsystem/LRWorldSubsystem.h"
#include "LectureRoom/Player/LRPawn.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogLRWorldSubsystem, Log, All);

FString GetWorldTypeToString(UWorld* World)
{
	FString TypeName;

	if (World)
	{
		FString WorldTypeStr;
		switch (World->WorldType)
		{
		case EWorldType::None:
			WorldTypeStr = "None";
			break;
		case EWorldType::Game:
			WorldTypeStr = "Game";
			break;
		case EWorldType::Editor:
			WorldTypeStr = "Editor";
			break;
		case EWorldType::PIE:
			WorldTypeStr = "PIE";
			break;
		case EWorldType::EditorPreview:
			WorldTypeStr = "EditorPreview";
			break;
		case EWorldType::GamePreview:
			WorldTypeStr = "GamePreview";
			break;
		case EWorldType::GameRPC:
			WorldTypeStr = "GameRPC";
			break;
		case EWorldType::Inactive:
			WorldTypeStr = "Inactive";
			break;
		default:
			break;
		}
		return FString::Printf(TEXT("%s"), *WorldTypeStr);
	}
	return FString();
}

void ULRWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogLRWorldSubsystem, Log, TEXT("[LifeCycle] LRWorldSubsystem::Initialize [%s]-Type:%s"), *GetNameSafe(GetWorld()), *GetWorldTypeToString(GetWorld()));
}

void ULRWorldSubsystem::Deinitialize()
{
	Super::Deinitialize();
	UE_LOG(LogLRWorldSubsystem, Log, TEXT("[LifeCycle] LRWorldSubsystem::Deinitialize [%s]-Type:%s"), *GetNameSafe(GetWorld()), *GetWorldTypeToString(GetWorld()));
}

ALRPawn* ULRWorldSubsystem::GetLectureRoomPawn()
{
	// 없는 경우 가져오기
	if (CachedLRPawn == nullptr)
	{
		CachedLRPawn = Cast<ALRPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	}
	return CachedLRPawn;
}
