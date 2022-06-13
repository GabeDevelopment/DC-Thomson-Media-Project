// Fill out your copyright notice in the Description page of Project Settings.


#include "FreePlay.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>
#include "Kismet/GameplayStatics.h"

void UFreePlay::NativeConstruct()
{
	Super::NativeConstruct();

	RLGLButton->OnClicked.AddUniqueDynamic(this, &UFreePlay::OnRLGLClicked);
	mainMenuButton->OnClicked.AddUniqueDynamic(this, &UFreePlay::OnMainMenuClicked);

	title->SetText(FText::FromString("Free Play Menu"));
	RLGLText->SetText(FText::FromString("Red Light Green Light"));
	mainMenuText->SetText(FText::FromString("Return To Menu"));
}

void UFreePlay::OnRLGLClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), "RedLightMap");
}

void UFreePlay::OnMainMenuClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), "MainMenu");
}