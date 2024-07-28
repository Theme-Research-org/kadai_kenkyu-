// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class THEME_RESEARCH_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = Default)
	void SendWavFileToAWS(FString& ResponseContent, bool& bSuccess);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	int VarPublicNum = 10;

};
