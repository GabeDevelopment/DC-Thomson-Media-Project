// Fill out your copyright notice in the Description page of Project Settings.


#include "RNGWidget.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>

void URNGWidget::NativeConstruct()
{
	Super::NativeConstruct();

	GenerateRandom();

	GenerateButton->OnClicked.AddUniqueDynamic(this, &URNGWidget::OnGenerateButtonClicked);
}

void URNGWidget::GenerateRandom()
{
	TArray<FText> StrArr;
	StrArr.Empty();
	StrArr.Add(FText::FromString("Amy"));
	StrArr.Add(FText::FromString("Andy"));
	StrArr.Add(FText::FromString("Dale"));
	StrArr.Add(FText::FromString("Filippo"));
	StrArr.Add(FText::FromString("Nathan"));
	StrArr.Add(FText::FromString("Sam"));

	for (int i = 0; i < 5; ++i)
	{
		int Index = FMath::RandRange(0, 5);
		if (i != Index)
		{
			StrArr.Swap(i, Index);
		}
	}
	
	RandomNumberLabel->SetText(StrArr[0]);
	RandomNumberLabel1->SetText(StrArr[1]);
	RandomNumberLabel2->SetText(StrArr[2]);
	RandomNumberLabel3->SetText(StrArr[3]);
	RandomNumberLabel4->SetText(StrArr[4]);
	RandomNumberLabel5->SetText(StrArr[5]);

}

void URNGWidget::OnGenerateButtonClicked()
{
	GenerateRandom();
}