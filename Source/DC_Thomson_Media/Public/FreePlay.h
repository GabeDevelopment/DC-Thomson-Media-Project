// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FreePlay.generated.h"

/**
 *
 */
UCLASS()
class DC_THOMSON_MEDIA_API UFreePlay : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* title;
	UPROPERTY(meta = (BindWidget))
		class UButton* RLGLButton;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RLGLText;
	UPROPERTY(meta = (BindWidget))
		class UButton* mainMenuButton;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* mainMenuText;
	UFUNCTION()
		void OnRLGLClicked();
	UFUNCTION()
		void OnMainMenuClicked();

	void NativeConstruct() override;
};