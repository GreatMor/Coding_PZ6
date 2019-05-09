// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SStandardSlateWidget.h"
#include "Slate.h"
#include "StandardHUD.generated.h"

/**
 * 
 */
UCLASS()
class CODING_PZ6_API AStandardHUD : public AHUD
{
	GENERATED_BODY()

	void BrginPlay();
	TSharedPtr<SStandardSlateWidget> MyUIWidget;	
	
};
