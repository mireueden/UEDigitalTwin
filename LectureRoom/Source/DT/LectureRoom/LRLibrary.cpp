#include "DT/LectureRoom/LRLibrary.h"
#include "LectureRoom/Components/LRInteractComponentBase.h"
#include "LectureRoom/Data/LRTwinDataAsset.h"
#include "LectureRoom/LRTypes.h"

ELRInteractionType ULRLibrary::GetInteractionType(ULRInteractComponentBase* Target)
{
	if (Target == nullptr)
	{
		ensureMsgf(false, TEXT("Component Should valid."));
		return ELRInteractionType::None;
	}
	if (Target->TwinDataAsset == nullptr)
	{
		ensureMsgf(false, TEXT("Invalid TwinDataAsset - Component(%s::%s)"), *GetNameSafe(Target->GetOwner()), *GetNameSafe(Target));
		return ELRInteractionType::None;
	}

	return Target->TwinDataAsset->InteractionType;
}

float ULRLibrary::GetSRand()
{
	return FMath::SRand();
}

FLinearColor ULRLibrary::GetRandomLinearColor(bool bRandomAlpha, float Alpha)
{
	if (bRandomAlpha)
	{
		Alpha = FMath::Rand();
	}

	return FLinearColor(FMath::Rand(), FMath::Rand(), FMath::Rand(), Alpha);
	//return FLinearColor(FMath::SRand(), FMath::SRand(), FMath::SRand(), Alpha);
}

