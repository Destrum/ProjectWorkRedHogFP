// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/DebugUI.h"

#include "Components/TextBlock.h"

void UDebugUI::UIUpdate(bool CanSeePlayer)
{
	if (!DebugText) { return; }
	if (CanSeePlayer) // in base al bool passato scrive se il mostro sta cercando il player o e' in patrolling
	{
		DebugText->SetText(FText::FromString("Current State: ChasingPlayer"));
	}
	else
	{
		DebugText->SetText(FText::FromString("Current State: Patrolling"));
	}
}
