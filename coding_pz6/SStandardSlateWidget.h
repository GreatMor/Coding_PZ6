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
	
	SLATE_ARGUMENT(TWeakObjectPtr<class AStandardHUD>, OwnerHUDArg);

	SLATE_END_ARGS()

		
		void Construct(const FArguments& InArgs);

private:

	
	TWeakObjectPtr<class AStandardHUD> OwnerHUD;

};
