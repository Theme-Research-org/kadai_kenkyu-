// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CaptureDeviceSelector.generated.h"

UCLASS()
class THEME_RESEARCH_API ACaptureDeviceSelector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACaptureDeviceSelector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void StartCapture();

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void StopCapture();

    UFUNCTION(BlueprintCallable, Category = "Audio")
    TArray<FString> GetAudioCaptureDevices();

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void SetAudioCaptureDevice(int32 DeviceIndex);

private:
    class UAudioCapture* AudioCapture;
    int32 SelectedDeviceIndex;

};
