// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTTask_FindPathPoint.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "NPC/Monster.h"
#include "DrawDebugHelpers.h"
#include "NPC/Monster_AIController.h"

UBTTask_FindPathPoint::UBTTask_FindPathPoint(const FObjectInitializer& ObjectInitializer) : UBTTask_BlackboardBase(
	ObjectInitializer)
{
	NodeName = "Find Path Point";
}

EBTNodeResult::Type UBTTask_FindPathPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// prova a prendere il controller del mostro
	if (auto* const cont = Cast<AMonster_AIController>(OwnerComp.GetAIOwner()))
	{
		// prova a prendere la blackboard
		if (auto* const Bc = OwnerComp.GetBlackboardComponent())
		{
			//prende il punto dell'array attuale
			const auto Index = Bc->GetValueAsInt(GetSelectedBlackboardKey());

			//prova a prende il Mostro 
			if (auto* Monster = Cast<AMonster>(cont->GetPawn()))
			{
				// Prende il vettore dal mostro al pathpoint
				const auto Point = Monster->GetPatrolPath()->GetPatrolPoint(Index);
				// converte il vettore locale in vettore globale
				const auto GlobalPoint = Monster->GetPatrolPath()->GetActorTransform().TransformPosition(Point);

				// Prende come start la posizione del mostro e come fine il punto di arrivo
				FVector Start = Monster->GetActorLocation();
				FVector End = GlobalPoint;


				//Crea una debug line dal mostro al path point che insegue
				DrawDebugLine(Monster->GetWorld(), Start, End, FColor::Green, false, 5.0f, 0, 1.0f);


				Bc->SetValueAsVector(PatrolPathVectorKey.SelectedKeyName, GlobalPoint);


				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}
