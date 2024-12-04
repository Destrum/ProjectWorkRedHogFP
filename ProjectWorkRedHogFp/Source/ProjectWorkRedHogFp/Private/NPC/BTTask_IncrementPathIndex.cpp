// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/BTTask_IncrementPathIndex.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "NPC/Monster.h"
#include "NPC/Monster_AIController.h"

UBTTask_IncrementPathIndex::UBTTask_IncrementPathIndex(FObjectInitializer const& ObjectInitializer) : UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = "Increment Path Index";
}

EBTNodeResult::Type UBTTask_IncrementPathIndex::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	//prova a prende l'AI controller
	if (auto* const  Cont = Cast<AMonster_AIController>(OwnerComp.GetAIOwner()))
	{
		//prova a prendere il mostro
		if (auto* const Monster = Cast<AMonster>(Cont->GetPawn()))
		{
			//Prova a prendere la Blackboard
			if (auto* const Bc = OwnerComp.GetBlackboardComponent())
			{
				auto const NumOfPoint = Monster->GetPatrolPath()->Num();
				auto const MinIndex = 0;
				auto const MaxIndex = NumOfPoint - 1;
				auto Index = Bc->GetValueAsInt(GetSelectedBlackboardKey());

				//cambia direzione alla fine del path
				if (bBiDirectional)
				{
					if (Index >= MaxIndex && Direction == EDirectionType::Forward)
					{
						Direction = EDirectionType::Reverse;
					}
					else if (Index == MinIndex && Direction == EDirectionType::Reverse)
					{
						Direction = EDirectionType::Forward;
					}
				}

				Bc->SetValueAsInt(GetSelectedBlackboardKey(),
				(Direction == EDirectionType::Forward? ++Index : --Index) % NumOfPoint);

				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	
	return EBTNodeResult::Failed;
}
