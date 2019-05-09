// Fill out your copyright notice in the Description page of Project Settings.


#include "SStandardSlateWidget.h"
#include "Runtime/Slate/Public/Widgets/Text/STextBlock.h"
#include "Runtime/SlateCore/Public/Widgets/SOverlay.h"

#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

// ++ This is needed in order to use the localization macro LOCTEXT
#define LOCTEXT_NAMESPACE "SStandardSlateWidget"

void SStandardSlateWidget::Construct(const FArguments& InArgs)
{
	// Asign the argument to our local variable
	// name will be _OwnerHUDArg instead of OwnerHUDArg, see comments about SLATE_ARGUMENT before
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
			// Inside lies a text block with these settings
			SNew(STextBlock)
			.ShadowColorAndOpacity(FLinearColor::Black)
		.ColorAndOpacity(FLinearColor::Red)
		.ShadowOffset(FIntPoint(-1, 1))
		.Font(FSlateFontInfo("Veranda", 16))
		// localized text to be translated with a generic name HelloSlateText
		.Text(LOCTEXT("HelloSlateText", "Hello, Slate!"))
		]
		];

}

// ++ We need to undefine this namespace after we finish creating the Slate widget
#undef LOCTEXT_NAMESPACE

END_SLATE_FUNCTION_BUILD_OPTIMIZATION