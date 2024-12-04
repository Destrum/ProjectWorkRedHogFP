// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PatrolPath.h"
#include "BehaviorTree/BehaviorTree.h"
#include "GameFramework/Character.h"
#include "Monster.generated.h"

UCLASS()
class PROJECTWORKREDHOGFP_API AMonster : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonster();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UBehaviorTree* GetBehaviorTree() const;		// crea il get per BehaviorTree

	APatrolPath* GetPatrolPath() const;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta = (AllowPrivateAccess = true))
	UBehaviorTree* Tree;	//crea la variabile BehaviorTree

	UPROPERTY(editAnywhere, BlueprintReadWrite, Category="AI", meta = (AllowPrivateAccess = true))
	APatrolPath* PatrolPath;
};
