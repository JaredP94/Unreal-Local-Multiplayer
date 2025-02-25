// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerRow.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPUZZLEMP_API UServerRow : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ServerName;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Host;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Players;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Ping;

	UPROPERTY(BlueprintReadOnly)
	bool Selected = false;

	void Setup(class UMainMenu* InMainMenu, uint32 InIndex);

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* RowButton;

	UFUNCTION()
	void OnClicked();

	UPROPERTY()
	class UMainMenu* MainMenuParent;

	uint32 Index;
};
