

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NativeGameplayTags.h"

// TODO : 네이밍 개선..
DT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DTAssetSpecTag);
DT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DTAssetCellTag);

DT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DTCellTypeTag);
DT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DTRobotTypeTag);
DT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DTPartTypeTag);

DT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DTTargetPointTag);

/**
* Asset
* - DT.Asset.Spec
* - DT.Asset.Cell
* 
* Type(Category)
* - DT.Type.Cell
* - DT.Type.Robot
* - DT.Type.Part
*/