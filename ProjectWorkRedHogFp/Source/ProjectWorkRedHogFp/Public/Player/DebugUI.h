// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugUI.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTWORKREDHOGFP_API UDebugUI : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* DebugText;

	UFUNCTION()
	void UIUpdate(bool CanSeePlayer);
};
