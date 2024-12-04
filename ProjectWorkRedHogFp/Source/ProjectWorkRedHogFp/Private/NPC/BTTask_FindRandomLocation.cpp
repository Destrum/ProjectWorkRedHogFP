// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTTask_FindRandomLocation.h"

#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NPC/Monster_AIController.h"

UBTTask_FindRandomLocation::UBTTask_FindRandomLocation(FObjectInitializer const& ObjectInitializer) : UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = "Find Random Location In NavMesh";
	
}

EBTNodeResult::Type UBTTask_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// prende l'AI controller e l'npc con cui è connesso
	if (auto* const cont= Cast<AMonster_AIController>(OwnerComp.GetAIOwner())) 
	{
		if (auto* const monster = cont -> GetPawn())
		{
			// Salva la posizione dell'NPC
			auto const Origin = monster -> GetActorLocation();

			//Prende il navigation System
			if (auto* const NavSys= UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation Loc;

				//genera un punto casuale nella navmesh entro il SearchRadius
				if (NavSys->GetRandomPointInNavigableRadius(Origin,SearchRadius,Loc ))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);
				}

				FinishLatentTask(OwnerComp,EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
			
		}
	}
	return EBTNodeResult::Failed;
}
