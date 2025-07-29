// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "LRLightVolume.generated.h"

class AInfo;
class ALRLightVolume;
class ADirectionalLight;
class AExponentialHeightFog;
class APawn;

// 변경할 데이터 타입
USTRUCT(BlueprintType)
struct FLRLightSettings
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DirectionalLight")
	float Intensity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DirectionalLight")
	FColor LightColor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DirectionalLight")
	FRotator Rotation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "HeightFog")
	float FogDensity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "HeightFog")
	float FogHeightFallOff;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "HeightFog")
	FLinearColor FogInscaterringColor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "HeightFog")
	float StartDistance;

	// HeightFog는 Z 높이도 설정값으로 사용합니다.
	
	void SetBaseValue();
	
	void SetOverrideValue(const FLRLightSettings& Settings, float Alpha);


	FLRLightSettings()
		: Intensity(1.0f)
		, LightColor(FColor::White)
		, Rotation()
		, FogDensity(0.02f)
		, FogHeightFallOff(0.2f)
		, StartDistance(0.0f)
	{
	}
};

// LightVolume 영역안에 플레이어를 감지하고, 설정값을 변경하는 주체 (액터)
UCLASS(BlueprintType, Blueprintable)
class ALRLightController : public AInfo
{
	GENERATED_BODY()

public:
	ALRLightController(const FObjectInitializer& ObjectInitializer);

	UFUNCTION()
	void AddLightVolume(ALRLightVolume* InVolume);
	
	UFUNCTION()
	void RemoveLightVolume(ALRLightVolume* InVolume);

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
	TArray<ALRLightVolume*> VolumeList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FLRLightSettings DefaultSettings;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FLRLightSettings OverrideSettings;

public:
	UFUNCTION()
	void InitLightReference();

	UPROPERTY()
	ADirectionalLight* DirectionalLight;
	
	UPROPERTY()
	AExponentialHeightFog* HeightFog;

	UPROPERTY()
	APawn* Pawn;

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void StartProcess();
	void DoProcess(const ALRLightVolume* Volume);
	void EndProcess();
	void OverrideLightSettings(const FLRLightSettings& Settings, float Weight);

public:
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	static ALRLightController* GetWorldLightController(UObject* WorldContextObject);
};


/**
 * 
 */
UCLASS()
class DT_API ALRLightVolume : public AVolume
{
	GENERATED_BODY()

public:
	ALRLightVolume(const FObjectInitializer& ObjectInitializer);

	// PostProcess의 UWorld::DoPostProcess 참고 (Priority, Weight 처리 생략)

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FLRLightSettings OverrideValue;

	virtual void PostRegisterAllComponents() override;
	virtual void UnregisterAllComponents(bool bForReregister = false) override;
};
