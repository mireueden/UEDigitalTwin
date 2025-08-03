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
