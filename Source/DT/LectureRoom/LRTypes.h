#pragma once

#include "CoreMinimal.h"
#include "LRTypes.generated.h"

UENUM(BlueprintType)
enum class ELRObjectType : uint8
{
	None = 0    UMETA(DisplayName = "Undefined"),
	Light,
	Computer,
	Desk,
	Chair,
	Keyboard,
	Mouse,
	Monitor,
	AirClear,
};


USTRUCT(BlueprintType)
struct FLRObjectInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Info")
	ELRObjectType ObjectType;

	// WidgetComponent 기준으로 추가 Offset
	UPROPERTY(BlueprintReadWrite,EditAnyWhere,Category="Info")
	FVector WidgetOffset;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Info")
	FText DisplayName;


public:
	FLRObjectInfo()
		: ObjectType(ELRObjectType::None)
		, WidgetOffset()
		, DisplayName()
	{
	}
};
