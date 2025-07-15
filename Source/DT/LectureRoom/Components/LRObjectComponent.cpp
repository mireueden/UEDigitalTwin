#include "DT/LectureRoom/Components/LRObjectComponent.h"
#include "Blueprint/UserWidget.h"
#include "LectureRoom/LRTwinManager.h"
#include "DrawDebugHelpers.h"
//#include "Components/WidgetComponent.h"

ULRObjectComponent::ULRObjectComponent()
{
	// WidgetComp 초기화
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void ULRObjectComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (ALRTwinManager* TwinManager = ALRTwinManager::GetWorldTwinManager(this))
	{
		TwinManager->AddLRObjectComponent(this);
	}
}

void ULRObjectComponent::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
	if (ALRTwinManager* TwinManager = ALRTwinManager::GetWorldTwinManager(this))
	{
		TwinManager->RemoveLRObjectComponent(this);
	}
}

void ULRObjectComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

#if ENABLE_DRAW_DEBUG
	DrawDebugSphere(GetWorld(), GetComponentLocation(), 50.0f, 12, FColor::Red, false, 0.001f, 0, 5.0f);
#endif // ENABLE_DRAW_DEBUG

	/*
	 const UWorld* InWorld, 
    FVector const& Center,
    float Radius,
    int32 Segments,
    FColor const& Color,
    bool bPersistentLines = false, float LifeTime=-1.f, 
    uint8 DepthPriority = 0, 
    float Thickness = 0.f);
	*/

}
