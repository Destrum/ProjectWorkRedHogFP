#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class PROJECTWORKREDHOGFP_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	class UCameraComponent* Camera;

	/** MappingContext for player input. */
	UPROPERTY(EditAnywhere, Category = "EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* InputMapping;
	
	UPROPERTY(EditAnywhere, Category = "EnhancedInput", meta =(AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput", meta =(AllowPrivateAccess = "true"))
	class UInputAction* LookAction;
	
	UPROPERTY(EditAnywhere, Category = "EnhancedInput", meta =(AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	

	
public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	void Move(const FInputActionValue& InputValue);
	void Look(const FInputActionValue& InputValue);
	void Jump();
	
private:
	class UAIPerceptionStimuliSourceComponent* StimulusSource;
	void SetupstimulusSource();

};
