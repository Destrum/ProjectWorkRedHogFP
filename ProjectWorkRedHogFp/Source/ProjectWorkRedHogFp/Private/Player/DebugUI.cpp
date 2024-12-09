// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/DebugUI.h"

#include "Components/TextBlock.h"

void UDebugUI::UIUpdate(bool CanSeePlayer)
{
	if (!DebugText) { return; }
	if (CanSeePlayer)
	{
		DebugText->SetText(FText::FromString("Current State: ChasingPlayer"));
	}
	else
	{
		DebugText->SetText(FText::FromString("Current State: Patrolling"));
	}
}
