// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Templates/SharedPointer.h"


/**
 * 
 */
class CODING_PZ6_API SStandardSlateWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SStandardSlateWidget)
	{}
	// ++ We add a new argument called OwnerHUDArg
	SLATE_ARGUMENT(TWeakObjectPtr<class AStandardHUD>, OwnerHUDArg);

	SLATE_END_ARGS()

		// Constructs this widget with InArgs. Needed for every widget. Builds this widget and any of it's children
		void Construct(const FArguments& InArgs);

private:

	// ++ Pointer to our parent HUD. To make sure HUD's lifetime is controlled elsewhere, use "weak" ptr.
	// ++ HUD has a "strong" pointer to Widget, circular ownership would prevent/break self-destruction of hud/widget (cause a memory leak).
	TWeakObjectPtr<class AStandardHUD> OwnerHUD;

};
