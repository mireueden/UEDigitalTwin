// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/RAAnimationLibrary.h"
#include "ControlRig.h"
#include "ControlRigComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/SkinnedAsset.h"
#include "ReferenceSkeleton.h"

FTransform URAAnimationLibrary::GetControlTransform(UControlRig* ControlRig, USceneComponent* Component, FName Name, EControlRigComponentSpace Space, bool bInitial /*= false*/)
{
	if (ControlRig)
	{
		if (FRigControlElement* ControlElement = ControlRig->GetHierarchy()->Find<FRigControlElement>(FRigElementKey(Name, ERigElementType::Control)))
		{
			FTransform Transform;
			if (Space == EControlRigComponentSpace::LocalSpace)
			{
				ERigTransformType::Type Type = (bInitial ? ERigTransformType::InitialLocal : ERigTransformType::CurrentLocal);
				Transform = ControlRig->GetHierarchy()->GetTransform(ControlElement, Type);
			}
			else
			{
				ERigTransformType::Type Type = (bInitial ? ERigTransformType::InitialGlobal : ERigTransformType::CurrentGlobal);
				Transform = ControlRig->GetHierarchy()->GetTransform(ControlElement, ERigTransformType::CurrentGlobal);
				ConvertTransformFromRigSpace(Component, Transform, Space);
			}
			return Transform;
		}
	}

	return FTransform::Identity;
}

void URAAnimationLibrary::ConvertTransformFromRigSpace(USceneComponent* SceneComponent, FTransform& InOutTransform, EControlRigComponentSpace ToSpace)
{
	if (SceneComponent == nullptr)
	{
		ensureMsgf(false, TEXT("SceneComponent is nullptr."));
		return;
	}

	switch (ToSpace)
	{
	case EControlRigComponentSpace::WorldSpace:
	{
		InOutTransform = InOutTransform * SceneComponent->GetComponentToWorld();
		break;
	}
	case EControlRigComponentSpace::ActorSpace:
	{
		InOutTransform = InOutTransform * SceneComponent->GetRelativeTransform();
		break;
	}
	case EControlRigComponentSpace::ComponentSpace:
	case EControlRigComponentSpace::RigSpace:
	case EControlRigComponentSpace::LocalSpace:
	default:
	{
		// nothing to do
		break;
	}
	}
}

