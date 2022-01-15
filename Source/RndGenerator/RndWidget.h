// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RndWidget.generated.h"

/**
 * 
 */
UCLASS()
class RNDGENERATOR_API URndWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	void GenerateRandom(); // fn to generate rnd no:s

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLabel;
	UPROPERTY(meta = (BindWidget))
		class UButton* GenerateButton;
	UFUNCTION()
		void OnGenerateButtonClicked();

	void NativeConstruct() override;
};
