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

