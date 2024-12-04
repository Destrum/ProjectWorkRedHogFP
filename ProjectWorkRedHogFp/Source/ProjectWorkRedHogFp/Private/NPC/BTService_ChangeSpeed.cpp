// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTService_ChangeSpeed.h"

#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NPC/Monster.h"

UBTService_ChangeSpeed::UBTService_ChangeSpeed()
{
	bNotifyBecomeRelevant = true;
	NodeName = "Change Speed";
}

void UBTService_ChangeSpeed::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	if (auto const Cont = OwnerComp.GetAIOwner())
	{
		if ( auto const Monster = Cast<AMonster>(Cont-> GetPawn()))
		{
			Monster -> GetCharacterMovement()-> MaxWalkSpeed = Speed;
		}
	}
}
