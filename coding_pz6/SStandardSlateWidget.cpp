// Fill out your copyright notice in the Description page of Project Settings.


#include "SStandardSlateWidget.h"
#include "Runtime/Slate/Public/Widgets/Text/STextBlock.h"
#include "Runtime/SlateCore/Public/Widgets/SOverlay.h"

#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION


#define LOCTEXT_NAMESPACE "SStandardSlateWidget"

void SStandardSlateWidget::Construct(const FArguments& InArgs)
{
	
	OwnerHUD = InArgs._OwnerHUDArg;


	ChildSlot
		.VAlign(VAlign_Fill)
		.HAlign(HAlign_Fill)
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Center)
		[
			
			SNew(STextBlock)
			.ShadowColorAndOpacity(FLinearColor::Black)
		.ColorAndOpacity(FLinearColor::Red)
		.ShadowOffset(FIntPoint(-1, 1))
		.Font(FSlateFontInfo("Veranda", 16))
		
		.Text(LOCTEXT("HelloSlateText", "Hello, Slate!"))
		]
		];

}


#undef LOCTEXT_NAMESPACE

END_SLATE_FUNCTION_BUILD_OPTIMIZATION