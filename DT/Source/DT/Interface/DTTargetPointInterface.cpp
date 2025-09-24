


#include "Interface/DTTargetPointInterface.h"


// Add default functionality here for any IDTTargetPointInterface functions that are not pure virtual.
FTransform IDTTargetPointInterface::GetTargetTransform_Implementation(FGameplayTag TargetTag, bool& bFound)
{
	bFound = false;
	return FTransform::Identity;
}

void IDTTargetPointInterface::GetAllTargetTransform_Implementation(FGameplayTag FilterTargetTag, TMap<FGameplayTag, FTransform>& OutTargetTransform)
{
	// Override ...
}
