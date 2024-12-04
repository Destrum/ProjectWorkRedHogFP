// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTTask_FindPathPoint.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "NPC/Monster.h"
#include "NPC/Monster_AIController.h"

UBTTask_FindPathPoint::UBTTask_FindPathPoint(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Find Path Point";
}

EBTNodeResult::Type UBTTask_FindPathPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// prova a prendere il controller del mostro
	if ( auto* const cont = Cast<AMonster_AIController> (OwnerComp.GetAIOwner()))
	{
		// prova a prendere la blackboard
		if (auto* const Bc = OwnerComp.GetBlackboardComponent())
		{
			//prende il punto dell'array attuale
			auto const Index =  Bc->GetValueAsInt(GetSelectedBlackboardKey());

			//prova a prende il Mostro 
			if (auto* Monster = Cast<AMonster> (cont->GetPawn()))
			{
				// Prende il vettore dal mostro al pathpoint
				auto const Point = Monster-> GetPatrolPath()-> GetPatrolPoint(Index);
				// converte il vettore locale in vettore globale
				auto const GlobalPoint = Monster-> GetPatrolPath()->GetActorTransform().TransformPosition(Point);

				Bc-> SetValueAsVector(PatrolPathVectorKey.SelectedKeyName, GlobalPoint);


				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;

	
}
