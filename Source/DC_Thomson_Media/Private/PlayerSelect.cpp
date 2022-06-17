// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSelect.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>
#include <Components/EditableTextBox.h>
#include <Types/SlateEnums.h>
void UPlayerSelect::NativeConstruct()
{
	Super::NativeConstruct();
	inputText->OnTextCommitted.AddUniqueDynamic(this, &UPlayerSelect::onTextInput);
	inputText->SetIsEnabled(false);
	inputText->SetVisibility(ESlateVisibility::Collapsed);

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
	currentPlayers = 0;
	playerCount = 1;
	clearPlayerCountButtons();
	inputText->SetIsEnabled(true);
	inputText->SetVisibility(ESlateVisibility::Visible);
}

void UPlayerSelect::twoPlayerClicked()
{
	currentPlayers = 0;
	playerCount = 2;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::threePlayerClicked()
{
	currentPlayers = 0;
	playerCount = 3;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::fourPlayerClicked()
{
	currentPlayers = 0;
	playerCount = 4;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::fivePlayerClicked()
{
	currentPlayers = 0;
	playerCount = 5;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::sixPlayerClicked()
{
	currentPlayers = 0;
	playerCount = 6;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::sevenPlayerClicked()
{
	currentPlayers = 0;
	playerCount = 7;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::eightPlayerClicked()
{
	currentPlayers = 0;
	playerCount = 8;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::ninePlayerClicked()
{
	currentPlayers = 0;
	playerCount = 9;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::tenPlayerClicked()
{
	currentPlayers = 0;
	playerCount = 10;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::elevenPlayerClicked()
{
	currentPlayers = 0;
	playerCount = 11;
	clearPlayerCountButtons();
	//assignPlayers(playerCount);
}

void UPlayerSelect::twelvePlayerClicked()
{
	currentPlayers = 0;
	playerCount = 12;
	clearPlayerCountButtons();
	inputText->SetIsEnabled(true);
	inputText->SetVisibility(ESlateVisibility::Visible);
	//assignPlayers(playerCount);
}

//void UPlayerSelect::assignPlayers(int playerCount)
//{
//	inputText->SetIsEnabled(true);
//	inputText->SetVisibility(ESlateVisibility::Visible);
//	for (int32 i = 0; i < playerCount; i++)
//	{
//		inputText->OnTextCommitted.AddUniqueDynamic(this, &UPlayerSelect::onTextInput);
//		players[i].playerName = checkthis;
//		players[i].score = 0;
//	}
//	switch (playerCount)
//	{
//	case 1:
//		UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[0].playerName, players[0].score);
//		break;
//	case 2:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 3:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 4:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 5:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 6:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 7:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 8:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 9:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 10:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 11:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	case 12:
//		for (int32 i = 0; i < playerCount; i++)
//		{
//			UE_LOG(LogTemp, Warning, TEXT("%s Score: %d"), *players[i].playerName, players[i].score);
//		}
//		break;
//	}
//}

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

void UPlayerSelect::onTextInput(const FText& inText, ETextCommit::Type commitInfo)
{
	if (currentPlayers < playerCount)
	{
		if (commitInfo == ETextCommit::OnEnter)
		{
			players[currentPlayers].playerName = inText.ToString();
			players[currentPlayers].score = 0;
			currentPlayers++;
		}
	}
	if (currentPlayers == playerCount && commitInfo == ETextCommit::OnEnter)
	{
		for (int32 i = 0; i < playerCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("Player %d: Name: %s Score: %d"), i + 1, *players[i].playerName, players[i].score);
		}
	}
}