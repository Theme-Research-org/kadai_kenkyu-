// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestCompleted, FString, ResponseContent, bool, bSuccess);

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
	void SendWavFileToAWS(const FOnRequestCompleted& OnCompleted);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	int VarPublicNum = 10;

};
