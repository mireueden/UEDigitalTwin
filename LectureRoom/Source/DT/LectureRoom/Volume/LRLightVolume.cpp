// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/Volume/LRLightVolume.h"
#include "Components/BrushComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DirectionalLight.h"
#include "Engine/ExponentialHeightFog.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"

#define SET_LRLIGHT_LERP(Name) Name = FMath::Lerp(Name, Settings.Name, Alpha)
#define SET_LRLIGHT_LERP_LCOLOR(Name) Name = FLinearColor::LerpUsingHSV(Name, Settings.Name, Alpha)
#define SET_LRLIGHT_LERP_FCOLOR(Name, bSRGB) Name = FLinearColor::LerpUsingHSV(Name, Settings.Name, Alpha).ToFColor(bSRGB)

void FLRLightSettings::SetBaseValue()
{
	*this = FLRLightSettings();
}

void FLRLightSettings::SetOverrideValue(const FLRLightSettings& Settings, float Alpha)
{
	if (Alpha == 0.0f)
	{
		return;
	}
	//Intensity = FMath::Lerp(Intensity, Settings.Intensity, Alpha);
	SET_LRLIGHT_LERP(Intensity);
	SET_LRLIGHT_LERP_FCOLOR(LightColor, true);
	Rotation = FMath::Lerp(Rotation, Settings.Rotation, Alpha);
	SET_LRLIGHT_LERP(FogDensity);
	SET_LRLIGHT_LERP(FogHeightFallOff);
	SET_LRLIGHT_LERP_LCOLOR(FogInscaterringColor);
	SET_LRLIGHT_LERP(StartDistance);
}


ALRLightController::ALRLightController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.SetTickFunctionEnable(true);
}


void ALRLightController::AddLightVolume(ALRLightVolume* InVolume)
{
	if (InVolume)
	{
		VolumeList.Add(InVolume);
	}
}

void ALRLightController::RemoveLightVolume(ALRLightVolume* InVolume)
{
	if (InVolume)
	{
		VolumeList.Remove(InVolume);
	}
}

void ALRLightController::InitLightReference()
{
	//TArray<AActor*> FoundDirectionLightList;
	//UGameplayStatics::GetAllActorsOfClass(this,
	//	ADirectionalLight::StaticClass(), FoundDirectionLightList);

#if 1 // Lambda template 버전의 액터 구하기
	UWorld* World = GetWorld();
	auto GetActorTemplateClass = [this, World]<typename TActor, typename 
		= typename std::enable_if_t<std::is_base_of_v<AActor, TActor>>>(TActor*& TargetActor) ->bool
	{
		for (TActorIterator<TActor> It(World, TActor::StaticClass()); It; ++It)
		{
			TargetActor = *It;
			return true;
		}

		return false;
	};

	if (GetActorTemplateClass(DirectionalLight))
	{
		// Found;
	}

	if (GetActorTemplateClass(HeightFog))
	{
		// Found;
	}

#else
	// DirectionalLight
	if (UWorld* World = GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::LogAndReturnNull))
	{
		for (TActorIterator<ADirectionalLight> It(World, ADirectionalLight::StaticClass()); It; ++It)
		{
			DirectionalLight = *It;
			break;
		}
	}

	// ExponentialHeightFog
	if (UWorld* World = GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::LogAndReturnNull))
	{
		for (TActorIterator<AExponentialHeightFog> It(World, AExponentialHeightFog::StaticClass()); It; ++It)
		{
			HeightFog = *It;
			break;
		}
	}
#endif

	Pawn = UGameplayStatics::GetPlayerPawn(this, 0);	
}

void ALRLightController::BeginPlay()
{
	Super::BeginPlay();
	InitLightReference();
}

void ALRLightController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Pawn)
	{
		StartProcess();
		EndProcess();
	}
}

void ALRLightController::StartProcess()
{
	//GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.001f, FColor::Red, TEXT("LRLightController::StartProcess"));
	OverrideLightSettings(DefaultSettings, 1.0f);

	for (const ALRLightVolume* Volume : VolumeList)
	{
		DoProcess(Volume);
	}
}


void ALRLightController::DoProcess(const ALRLightVolume* Volume)
{
	if (Volume == nullptr)
	{
		return;
	}
	// TODO : 가중치 및 거리에 따른 우선순위 계산하여, 마지막에 적용하도록 동작해야합니다.
	float DistanceToPoint = 0.0f;
	float BlendWeight = 0.0f;
	Volume->EncompassesPoint(Pawn->GetActorLocation(), 0.0f, &DistanceToPoint);
	
	OverrideLightSettings(Volume->OverrideValue, BlendWeight);

}

void ALRLightController::OverrideLightSettings(const FLRLightSettings& Settings, float Weight)
{
	OverrideSettings.SetOverrideValue(Settings, Weight);
}

void ALRLightController::EndProcess()
{
	UDirectionalLightComponent* DirectionalLightComp =
		DirectionalLight ? Cast<UDirectionalLightComponent>(DirectionalLight->GetLightComponent()): nullptr;
	if (DirectionalLightComp)
	{
		DirectionalLightComp->SetIntensity(OverrideSettings.Intensity);
		DirectionalLightComp->SetLightColor(OverrideSettings.LightColor);
		DirectionalLight->SetActorRotation(OverrideSettings.Rotation, ETeleportType::TeleportPhysics);
	}

	UExponentialHeightFogComponent* HeightFogComp =
		HeightFog ? HeightFog->GetComponent() : nullptr;
	if (HeightFogComp)
	{
		HeightFogComp->SetFogDensity(OverrideSettings.FogDensity);
		HeightFogComp->SetFogHeightFalloff(OverrideSettings.FogHeightFallOff);
		HeightFogComp->SetFogInscatteringColor(OverrideSettings.FogInscaterringColor);
		HeightFogComp->SetStartDistance(OverrideSettings.StartDistance);
	}
}

// static
ALRLightController* ALRLightController::GetWorldLightController(UObject* WorldContextObject)
{
	static TMap<UWorld*, ALRLightController*> LightControllerMap;
	UWorld* World = WorldContextObject->GetWorld();
	if (World && World->IsGameWorld())
	{
		if (!LightControllerMap.Contains(World))
		{
			ALRLightController* LightController = World->SpawnActor<ALRLightController>();
			LightControllerMap.Add(World, LightController);
			
			// TODO : TMap에서 사용하지 않는 KeyValue 정리하도록 수정
		}
		
		return LightControllerMap[World];
	}

	return nullptr;
}

ALRLightVolume::ALRLightVolume(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GetBrushComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	// post process volume needs physics data for trace
	GetBrushComponent()->bAlwaysCreatePhysicsState = true;
	GetBrushComponent()->Mobility = EComponentMobility::Movable;
}

void ALRLightVolume::PostRegisterAllComponents()
{
	Super::PostRegisterAllComponents();

	// TODO : LRLightController에 등록
	if (ALRLightController* Controller = ALRLightController::GetWorldLightController(this))
	{
		Controller->AddLightVolume(this);
	}
}

void ALRLightVolume::UnregisterAllComponents(bool bForReregister /*= false*/)
{
	Super::UnregisterAllComponents(bForReregister);

	// TODO : LRLightController에서 해제
	if (ALRLightController* Controller = ALRLightController::GetWorldLightController(this))
	{
		Controller->RemoveLightVolume(this);
	}
}