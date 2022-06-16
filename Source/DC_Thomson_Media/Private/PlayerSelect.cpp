// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSelect.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>
#include <Components/EditableTextBox.h>
void UPlayerSelect::NativeConstruct()
{
	Super::NativeConstruct();
	inputText->SetIsEnabled(false);

	onePlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::onePlayerClicked);
	twoPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::twoPlayerClicked);
	threePlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::threePlayerClicked);
	fourPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::fourPlayerClicked);
	fivePlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::fivePlayerClicked);
	sixPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::sixPlayerClicked);
	sevenPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::sevenPlayerClicked);
	eightPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::eightPlayerClicked);
	ninePlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::ninePlayerClicked);
	tenPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::tenPlayerClicked);
	elevenPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::elevenPlayerClicked);
	twelvePlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::twelvePlayerClicked);

	title->SetText(FText::FromString("Player Select"));
	onePlayerText->SetText(FText::FromString("1"));
	twoPlayerText->SetText(FText::FromString("2"));
	threePlayerText->SetText(FText::FromString("3"));
	fourPlayerText->SetText(FText::FromString("4"));
	fivePlayerText->SetText(FText::FromString("5"));
	sixPlayerText->SetText(FText::FromString("6"));
	sevenPlayerText->SetText(FText::FromString("7"));
	eightPlayerText->SetText(FText::FromString("8"));
	ninePlayerText->SetText(FText::FromString("9"));
	tenPlayerText->SetText(FText::FromString("10"));
	elevenPlayerText->SetText(FText::FromString("11"));
	twelvePlayerText->SetText(FText::FromString("12"));
}

void UPlayerSelect::onePlayerClicked()
{
	int playerCount = 1;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
	//inputText->OnTextCommitted.AddUnique(this, &UPlayerSelect::onTextInput);
}

void UPlayerSelect::twoPlayerClicked()
{
	int playerCount = 2;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::threePlayerClicked()
{
	int playerCount = 3;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::fourPlayerClicked()
{
	int playerCount = 4;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::fivePlayerClicked()
{
	int playerCount = 5;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::sixPlayerClicked()
{
	int playerCount = 6;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::sevenPlayerClicked()
{
	int playerCount = 7;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::eightPlayerClicked()
{
	int playerCount = 8;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::ninePlayerClicked()
{
	int playerCount = 9;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::tenPlayerClicked()
{
	int playerCount = 10;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::elevenPlayerClicked()
{
	int playerCount = 11;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::twelvePlayerClicked()
{
	int playerCount = 12;
	clearPlayerCountButtons();
	assignPlayers(playerCount);
}

void UPlayerSelect::assignPlayers(int playerCount)
{

	inputText->SetIsEnabled(true);
	for (int32 i = 0; i < playerCount; i++)
	{
		players[i].playerName = "Player ";
		players[i].playerName.AppendInt(i);
		players[i].score = 0;
	}
	switch (playerCount)
	{
	case 1:
		UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[0].playerName, players[0].score);
		break;
	case 2:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 3:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 4:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 5:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 6:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 7:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 8:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 9:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 10:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 11:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	case 12:
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
		}
		break;
	}
}

void UPlayerSelect::clearPlayerCountButtons()
{
	onePlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	twoPlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	threePlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	fourPlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	fivePlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	sixPlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	sevenPlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	eightPlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	ninePlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	tenPlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	elevenPlayerButton->SetVisibility(ESlateVisibility::Collapsed);
	twelvePlayerButton->SetVisibility(ESlateVisibility::Collapsed);
}

//void UPlayerSelect::onTextInput()
//{
//
//}