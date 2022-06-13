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
	TArray<FText> players;
	FText name;
	for (int i = 0; i < playerCount; i++)
	{
		inputText->SetIsEnabled(true);
		name = inputText->GetText();
		UE_LOG(LogTemp, Warning, TEXT("I just started running"));
	}
}

void UPlayerSelect::twoPlayerClicked()
{
	int playerCount = 1;
	for (int i = 0; i < playerCount; i++)
	{

	}
}

void UPlayerSelect::threePlayerClicked()
{
	int playerCount = 1;
	for (int i = 0; i < playerCount; i++)
	{

	}
}

void UPlayerSelect::fourPlayerClicked()
{
	int playerCount = 1;
	for (int i = 0; i < playerCount; i++)
	{

	}
}

void UPlayerSelect::fivePlayerClicked()
{
	int playerCount = 1;
	for (int i = 0; i < playerCount; i++)
	{

	}
}

void UPlayerSelect::sixPlayerClicked()
{
	int playerCount = 1;
	for (int i = 0; i < playerCount; i++)
	{

	}
}