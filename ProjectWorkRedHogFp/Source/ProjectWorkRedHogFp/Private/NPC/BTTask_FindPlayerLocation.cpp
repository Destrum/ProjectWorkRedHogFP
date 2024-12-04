// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTTask_FindPlayerLocation.h"

#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

UBTTask_FindPlayerLocation::UBTTask_FindPlayerLocation(FObjectInitializer const& ObjectInitializer) : UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = "Find Player Location";
}

EBTNodeResult::Type UBTTask_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	

	// prende il player character
	if (auto* const Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0 ))
	{
		//Prende la location del player 
		auto const PlayerLocation = Player-> GetActorLocation();
		if (SearchRadius)
		{
			FNavLocation Loc;

			// fa in modo che il navigation sistem cerchi un punto attorno al player
			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				// prova a prendere un punto vicino al player
				if (NavSys -> GetRandomPointInNavigableRadius(PlayerLocation,SearchRadius,Loc))
				{
					OwnerComp.GetBlackboardComponent()-> SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
				
			}
		}
		else
		{
			OwnerComp.GetBlackboardComponent()-> SetValueAsVector(GetSelectedBlackboardKey(), PlayerLocation);
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	
	return EBTNodeResult::Failed;
}
