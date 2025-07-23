#pragma once

#include "CoreMinimal.h"
#include "LRTypes.generated.h"

UENUM(BlueprintType)
enum class ELRObjectType : uint8
{
	None = 0    UMETA(DisplayName="Undefined"),
	Lamp,
	Computer,
	Desk,
	Chair,
	Keyboard,
	Mouse,
	Monitor,
	AirConditioner,
	AirPurifier,
	BeamProject
};

UENUM(BlueprintType)
enum class ELRValueType : uint8
{
	// 전력 소모량 (최대, 현재)
	PowerCosumption,
	// 희망 온도 
	DesireTemperature,
	// 현재 온도 
	CurrentTemperature,
	// 희망 습도
	DesireHumidity,
	// 현재 습도
	CurrentHumidity,
	// 희망 미세먼지농도
	DesireFinDustLevel,
	// 현재 미세먼지농도
	CurrentFinDustLevel
};

UENUM(BlueprintType)
enum class ELRAirCareType : uint8
{
	Temperature,
	Humidity,
	FineDust
};

USTRUCT(BlueprintType)
struct FLRObjectInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
	ELRObjectType ObjecType;

	// WidgetComponent 기준으로 추가 Offset
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Info")
	FVector WidgetOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
	FText DisplayName;

	// bool; unit8

public:
	FLRObjectInfo()
		: ObjecType(ELRObjectType::None)
		, WidgetOffset()
		, DisplayName()
	{
	}
};

