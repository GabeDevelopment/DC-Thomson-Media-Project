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
	FName playerName;
	UPROPERTY(EditAnywhere, BlueprintReadwrite)
	int32 score;

	FPlayers()
	{

	}

	FPlayers(FName name, int32 inScore)
	{
		playerName = name;
		score = inScore;
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
		class UEditableTextBox* inputText;
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
		void assignPlayers(int playerCount);
	//UFUNCTION()
	//	void onTextInput();

	void NativeConstruct() override;

private:
	TArray<FPlayers> players;
};
