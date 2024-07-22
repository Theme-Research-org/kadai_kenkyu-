// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SendWav.generated.h"

UCLASS()
class THEME_RESEARCH_API ASendWav : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASendWav();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "MyCustom")
	void SendWavFileToAWS(FString& ResponseContent, bool& bSuccess);
};
