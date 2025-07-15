#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LRObjectComponent.generated.h"

class UUserWidget;
//class UWidgetComponent;

// DigitalTwin에 사용할 오브젝트의 셋팅을 가지는 컴포넌트
UCLASS(Blueprintable, BlueprintType)
class ULRObjectComponent : public USceneComponent
{
	GENERATED_BODY()

	/**
	WidgetComponent를 추가하고, 사용
	TSubclass 로 표현할 위젯 클래스 설정
	1. 컴포넌트 생성자를 작성
	*/

public:
	ULRObjectComponent();

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 위젯 클래스
	UPROPERTY(EditDefaultsOnly, Category = "Settings")
	TSubclassOf<UUserWidget> WidgetClass;

	//// 위젯 컴포넌트
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "LRObjectComp")
	//UWidgetComponent* WidgetComp;
};