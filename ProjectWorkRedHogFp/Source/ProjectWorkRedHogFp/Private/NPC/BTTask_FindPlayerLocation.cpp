// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTTask_FindPlayerLocation.h"

#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "NPC/Monster.h"
#include "NPC/Monster_AIController.h"

UBTTask_FindPlayerLocation::UBTTask_FindPlayerLocation(const FObjectInitializer& ObjectInitializer) :
	UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = "Find Player Location";
}

EBTNodeResult::Type UBTTask_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// prende il player character
	if (auto* const Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		//Prende la location del player 
		const auto PlayerLocation = Player->GetActorLocation();
		if (SearchRadius)
		{
			FNavLocation Loc;


			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				// prova a prendere un punto vicino al player
				if (NavSys->GetRandomPointInNavigableRadius(PlayerLocation, SearchRadius, Loc))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);
					// fa in modo che il navigation sistem cerchi un punto attorno al player


					if (AMonster_AIController* const cont = Cast<AMonster_AIController>(OwnerComp.GetAIOwner()))
					{
						if (AActor* const Monster = Cast<AMonster>(cont->GetPawn()))
						{
							FVector Start = Monster->GetActorLocation();
							FVector End = PlayerLocation;
							//crea una debug line dal mostro al punto della navmesh che insegue
							DrawDebugLine(Monster->GetWorld(), Start, End, FColor::Red, false, 0.5f, 0, 1.0f);
						}
					}

					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
			}
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerLocation);
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}

	return EBTNodeResult::Failed;
}
