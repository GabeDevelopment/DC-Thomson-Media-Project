// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RNGWidget.generated.h"

/**
 *
 */
UCLASS()
class DC_THOMSON_MEDIA_API URNGWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	void GenerateRandom();

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLabel;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLabel1;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLabel2;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLabel3;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLabel4;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLabel5;

	UPROPERTY(meta = (BindWidget))
		class UButton* GenerateButton;
	UFUNCTION()
		void OnGenerateButtonClicked();


	void NativeConstruct() override;
};
