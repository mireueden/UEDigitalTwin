// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/Data/LRTwinData.h"
#include "LectureRoom/Data/LRTwinDataAsset.h"
#include "LectureRoom/LRTypes.h"

bool ULRTwinData::SetId(FGuid NewID)
{
	if (NewID.IsValid())
	{
		Id = NewID;
	}

	return false;
}

void ULRTwinData::InitTwinData(ULRTwinDataAsset* DataAsset)
{
	if (DataAsset == nullptr)
	{
		return;
	}

	for (auto& Pair : DataAsset->DefaultValueMap)
	{
		switch (Pair.Key)
		{
			case ELRValueType::PowerCosumption:
			{
				ValueMap.FindOrAdd(Pair.Key) = 0.0f;
				break;
			}
			case ELRValueType::DesireTemperature:
			case ELRValueType::DesireHumidity:
			case ELRValueType::DesireFinDustLevel:
			{
				ValueMap.FindOrAdd(Pair.Key) = Pair.Value;
				ValueMap.FindOrAdd(ELRValueType(uint8(Pair.Key)+1)) = 0.0f;
				break;
			}
			case ELRValueType::CurrentTemperature:
			case ELRValueType::CurrentHumidity:
			case ELRValueType::CurrentFinDustLevel:
			{
				break;
			}
			default:
			{

				ValueMap.FindOrAdd(Pair.Key) = Pair.Value;
				break;
			}
		}
	}

	SettingDataAsset = DataAsset;
}

bool ULRTwinData::GetSettingValue(ELRValueType ValueType, float& OutValue)
{
	float* FindValue = SettingDataAsset ? SettingDataAsset->DefaultValueMap.Find(ValueType) : nullptr;
	if (FindValue)
	{
		OutValue = 0.0f;
		return false;
	}
	
	OutValue = *FindValue;
	return true;
}

bool ULRTwinData::GetCurrentValue(ELRValueType ValueType, float& OutValue)
{
	if (ValueMap.Contains(ValueType))
	{
		OutValue = ValueMap[ValueType];
		return true;
	}
	
	OutValue = 0.0f;
	return false;
}

void ULRTwinData::SetCurrentValue(ELRValueType ValueType, float Value)
{
	if(ValueMap.Contains(ValueType))
	{
		ValueMap[ValueType] = Value;
	}
}
