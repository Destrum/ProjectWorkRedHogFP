// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/Monster_AIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"

#include "NPC/Monster.h"
#include "Perception/AIPerceptionComponent.h"
#include "Player/PlayerCharacter.h"


AMonster_AIController::AMonster_AIController(FObjectInitializer const& ObjectInitializer)
{
	SetupPerceptionSystem();
}

void AMonster_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (AMonster* const monster = Cast<AMonster>(InPawn)) // se il cast ha successo prende il behaviortree
		if (UBehaviorTree* const tree = monster->GetBehaviorTree())
		{
			UBlackboardComponent* b;
			UseBlackboard(tree->BlackboardAsset, b); // Fa in modo che l'AI usa uno specifico Blackboard asset
			Blackboard=b;
			RunBehaviorTree(tree);
		}
}

void AMonster_AIController::SetupPerceptionSystem()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	if (SightConfig)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent")));
		SightConfig -> SightRadius = 500.f;
		SightConfig -> LoseSightRadius = SightConfig -> SightRadius + 25.f;
		SightConfig -> PeripheralVisionAngleDegrees = 90.f;
		SightConfig -> SetMaxAge(5.f);
		SightConfig -> AutoSuccessRangeFromLastSeenLocation = 520.f;
		SightConfig -> DetectionByAffiliation.bDetectEnemies = true;
		SightConfig -> DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig -> DetectionByAffiliation.bDetectNeutrals = true;
		
		GetPerceptionComponent() -> SetDominantSense(*SightConfig ->GetSenseImplementation());
		GetPerceptionComponent() -> OnTargetPerceptionUpdated.AddDynamic(
		this, &AMonster_AIController::OnTargetDetected);
		GetPerceptionComponent() -> ConfigureSense(*SightConfig);
	}
}

void AMonster_AIController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if (auto* const Ch = Cast<APlayerCharacter>(Actor) )
	{
		GetBlackboardComponent() -> SetValueAsBool("CanSeePlayer", Stimulus.WasSuccessfullySensed());
	}
}
