// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HSKScene.generated.h"

class UHSKDialogueDataAsset;

/**
 * 
 */
UCLASS()
class HSK_API UHSKScene : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UHSKDialogueDataAsset*> DialogueLines;
};
