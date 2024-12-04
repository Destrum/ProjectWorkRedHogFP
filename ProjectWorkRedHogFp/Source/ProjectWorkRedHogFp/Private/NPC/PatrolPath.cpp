// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/PatrolPath.h"

// Sets default values
APatrolPath::APatrolPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
}

FVector APatrolPath::GetPatrolPoint(int const index) const
{
	return PathPoints[index];	
}

int APatrolPath::Num() const
{
	return PathPoints.Num();
}



