// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTService_IsPlayerInKillRange.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NPC/Monster.h"
#include "NPC/Monster_AIController.h"


UBTService_IsPlayerInKillRange::UBTService_IsPlayerInKillRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = "Player In Kill Range";
}

void UBTService_IsPlayerInKillRange::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);
	auto const* const Cont = Cast<AMonster_AIController>(OwnerComp.GetAIOwner());
	if (Cont == nullptr){return;}
	
	auto const* const Monster = Cast<AMonster>(Cont-> GetPawn());
	if (Monster == nullptr){return;}

	auto const * const Player = UGameplayStatics:: GetPlayerCharacter(GetWorld(), 0);
	if (Player == nullptr){return;}

	OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), Monster->GetDistanceTo(Player)<= KillRange);
}
