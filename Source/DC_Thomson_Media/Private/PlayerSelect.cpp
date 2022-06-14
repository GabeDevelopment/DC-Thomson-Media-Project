// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSelect.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>
#include <Components/EditableTextBox.h>
#include <iostream>
void UPlayerSelect::NativeConstruct()
{
	Super::NativeConstruct();
	UE_LOG(LogTemp, Warning, TEXT("Player"));

	onePlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::onePlayerClicked);
	twoPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::twoPlayerClicked);
	threePlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::threePlayerClicked);
	fourPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::fourPlayerClicked);
	fivePlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::fivePlayerClicked);
	sixPlayerButton->OnClicked.AddUniqueDynamic(this, &UPlayerSelect::sixPlayerClicked);

	title->SetText(FText::FromString("Player Select"));
	onePlayerText->SetText(FText::FromString("1"));
	twoPlayerText->SetText(FText::FromString("2"));
	threePlayerText->SetText(FText::FromString("3"));
	fourPlayerText->SetText(FText::FromString("4"));
	fivePlayerText->SetText(FText::FromString("5"));
	sixPlayerText->SetText(FText::FromString("6"));
}

void UPlayerSelect::onePlayerClicked()
{
	int playerCount = 1;
	assignPlayers(playerCount);
}

void UPlayerSelect::twoPlayerClicked()
{
	int playerCount = 2;
	assignPlayers(playerCount);
}

void UPlayerSelect::threePlayerClicked()
{
	int playerCount = 3;
	assignPlayers(playerCount);
}

void UPlayerSelect::fourPlayerClicked()
{
	int playerCount = 4;
	assignPlayers(playerCount);
}

void UPlayerSelect::fivePlayerClicked()
{
	int playerCount = 5;
	assignPlayers(playerCount);
}

void UPlayerSelect::sixPlayerClicked()
{
	int playerCount = 6;
	assignPlayers(playerCount);
}

void UPlayerSelect::assignPlayers(int playerCount)
{
	for (int i = 0; i < playerCount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player %i"), i);
	}
	switch (playerCount)
	{
	case 1:
		UE_LOG(LogTemp, Warning, TEXT("One Player"));
		break;
	case 2:
		UE_LOG(LogTemp, Warning, TEXT("Two Players"));
		break;
	case 3:
		UE_LOG(LogTemp, Warning, TEXT("Three Players"));
		break;
	case 4:
		UE_LOG(LogTemp, Warning, TEXT("Four Players"));
		break;
	case 5:
		UE_LOG(LogTemp, Warning, TEXT("Five Players"));
		break;
	case 6:
		UE_LOG(LogTemp, Warning, TEXT("Six Players"));
		break;
	}
}