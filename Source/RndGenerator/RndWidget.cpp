// Fill out your copyright notice in the Description page of Project Settings.


#include "RndWidget.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>

void URndWidget::OnGenerateButtonClicked()
{
	GenerateRandom();
}

void URndWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// call the generate random once in the constructor to set value to text
	GenerateRandom();
	// Add on clicked functionality
	GenerateButton->OnClicked.AddUniqueDynamic(this, &URndWidget::OnGenerateButtonClicked);
}

void URndWidget::GenerateRandom()
{
	int32 RandomNumber = FMath::RandRange(0, 100);
	RandomNumberLabel->SetText(FText::AsNumber(RandomNumber));
}

