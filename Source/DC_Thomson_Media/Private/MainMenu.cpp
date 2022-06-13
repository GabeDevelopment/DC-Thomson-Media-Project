// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>
#include "Kismet/GameplayStatics.h"

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	start->OnClicked.AddUniqueDynamic(this, &UMainMenu::OnStartClicked);

	title->SetText(FText::FromString("Main Menu"));
	startText->SetText(FText::FromString("Start"));
	freePlayText->SetText(FText::FromString("Free Play"));
	optionsText->SetText(FText::FromString("Options"));
	exitText->SetText(FText::FromString("Exit"));
}

void UMainMenu::OnStartClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), "RedLightMap");
}