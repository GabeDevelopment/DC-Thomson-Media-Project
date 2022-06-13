// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

/**
 *
 */
UCLASS()
class DC_THOMSON_MEDIA_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* title;
	UPROPERTY(meta = (BindWidget))
		class UButton* start;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* startText;
	UPROPERTY(meta = (BindWidget))
		class UButton* freePlay;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* freePlayText;
	UPROPERTY(meta = (BindWidget))
		class UButton* options;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* optionsText;
	UPROPERTY(meta = (BindWidget))
		class UButton* exit;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* exitText;
	UFUNCTION()
		void OnStartClicked();
	UFUNCTION()
		void OnFreePlayClicked();

	void NativeConstruct() override;
};
