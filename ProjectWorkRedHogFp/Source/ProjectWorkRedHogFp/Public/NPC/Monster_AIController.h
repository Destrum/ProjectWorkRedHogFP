// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "Monster_AIController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTWORKREDHOGFP_API AMonster_AIController : public AAIController
{
	GENERATED_BODY()

public:
	explicit AMonster_AIController(const FObjectInitializer& ObjectInitializer); // Constructor

	UPROPERTY(visibleAnywhere, BlueprintReadWrite)
	float SightRadiusVariable = 500.f;

protected:
	virtual void OnPossess(APawn* InPawn) override; // get blackboard component
private:
	class UAISenseConfig_Sight* SightConfig;

	void SetupPerceptionSystem();

	UFUNCTION()
	void OnTargetDetected(AActor* Actor, const FAIStimulus Stimulus);
};
