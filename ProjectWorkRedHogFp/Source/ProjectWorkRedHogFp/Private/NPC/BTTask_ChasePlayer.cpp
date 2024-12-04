// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTTask_ChasePlayer.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NPC/Monster_AIController.h"

UBTTask_ChasePlayer::UBTTask_ChasePlayer(FObjectInitializer const& ObjectInitializer) : UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = "Chase Player";
}

EBTNodeResult::Type UBTTask_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Prende la target location dalla blackboard
	if (auto* const cont = Cast<AMonster_AIController>(OwnerComp.GetAIOwner()))
	{
		
		auto const PlayerLocation = OwnerComp.GetBlackboardComponent() -> GetValueAsVector(GetSelectedBlackboardKey());
		
		//Si muove verso il player
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(cont, PlayerLocation );
		//finisce la task con successo
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
