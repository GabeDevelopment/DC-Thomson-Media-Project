// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerSelect.generated.h"

/**
 *
 */

USTRUCT(BlueprintType)
struct FPlayers
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadwrite)
		FString playerName;
	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		int32 score;

	FPlayers()
	{

	}
};

UCLASS()
class DC_THOMSON_MEDIA_API UPlayerSelect : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* title;
	UPROPERTY(meta = (BindWidget))
		class UButton* onePlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* twoPlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* threePlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* fourPlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* fivePlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* sixPlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* onePlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* twoPlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* threePlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* fourPlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* fivePlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* sixPlayerText;
	UPROPERTY(meta = (BindWidget))
		class UButton* sevenPlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* eightPlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* ninePlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* tenPlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* elevenPlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* twelvePlayerButton;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* sevenPlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* eightPlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* ninePlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* tenPlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* elevenPlayerText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* twelvePlayerText;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* inputText;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* playerText;
	UFUNCTION()
		void onePlayerClicked();
	UFUNCTION()
		void twoPlayerClicked();
	UFUNCTION()
		void threePlayerClicked();
	UFUNCTION()
		void fourPlayerClicked();
	UFUNCTION()
		void fivePlayerClicked();
	UFUNCTION()
		void sixPlayerClicked();
	UFUNCTION()
		void sevenPlayerClicked();
	UFUNCTION()
		void eightPlayerClicked();
	UFUNCTION()
		void ninePlayerClicked();
	UFUNCTION()
		void tenPlayerClicked();
	UFUNCTION()
		void elevenPlayerClicked();
	UFUNCTION()
		void twelvePlayerClicked();
	//UFUNCTION()
	//	void assignPlayers(int playerCount);
	UFUNCTION()
		void clearPlayerCountButtons();
	UFUNCTION()
		void onTextInput(const FText& inText, ETextCommit::Type commitInfo);

	void NativeConstruct() override;

private:
	FPlayers players[12];
	int32 playerCount;
	int32 currentPlayers;
};
