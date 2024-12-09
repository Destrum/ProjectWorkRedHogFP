// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectWorkRedHogFp/Public/NPC/Monster.h"

#include "NPC/Monster_AIController.h"

// Sets default values
AMonster::AMonster()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();
	AMonster_AIController* MonsterAIController = Cast<AMonster_AIController>(GetController());

	SightRadiusDebug = MonsterAIController->SightRadiusVariable;
}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugCircleArc(GetWorld(), this->GetActorLocation(), SightRadiusDebug, this->GetActorForwardVector(), 90.f, 4,
	                   FColor::Purple, false, 0.05, 0, 0.5);
}

// Called to bind functionality to input
void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

UBehaviorTree* AMonster::GetBehaviorTree() const
{
	return Tree;
}

APatrolPath* AMonster::GetPatrolPath() const
{
	return PatrolPath;
}
