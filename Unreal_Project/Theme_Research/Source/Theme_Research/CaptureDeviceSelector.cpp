// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureDeviceSelector.h"
#include "AudioCapture.h"
#include "AudioCaptureCore.h"
#include "AudioCaptureDeviceInterface.h"

// Sets default values
ACaptureDeviceSelector::ACaptureDeviceSelector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AudioCapture = CreateDefaultSubobject<UAudioCapture>(TEXT("AudioCapture"));
}

// Called when the game starts or when spawned
void ACaptureDeviceSelector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACaptureDeviceSelector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACaptureDeviceSelector::StartCapture()
{
    if (AudioCapture)
    {
        AudioCapture->StartCapturingAudio();
    }
}

void ACaptureDeviceSelector::StopCapture()
{
    if (AudioCapture)
    {
        AudioCapture->StopCapturingAudio();
    }
}

TArray<FString> ACaptureDeviceSelector::GetAudioCaptureDevices()
{
    TArray<FString> DeviceNames;
    TArray<FAudioCaptureDeviceInfo> DeviceInfos;

    FAudioCaptureModule* AudioCaptureModule = &FAudioCaptureModule::Get();
    AudioCaptureModule->GetCaptureDevicesAvailable(DeviceInfos);

    for (const FAudioCaptureDeviceInfo& DeviceInfo : DeviceInfos)
    {
        DeviceNames.Add(DeviceInfo.DeviceName);
    }

    return DeviceNames;
}

void ACaptureDeviceSelector::SetAudioCaptureDevice(int32 DeviceIndex)
{
    SelectedDeviceIndex = DeviceIndex;
    TArray<FAudioCaptureDeviceInfo> DeviceInfos;

    FAudioCaptureModule* AudioCaptureModule = &FAudioCaptureModule::Get();
    AudioCaptureModule->GetCaptureDevicesAvailable(DeviceInfos);

    if (DeviceInfos.IsValidIndex(DeviceIndex))
    {
        AudioCapture->SetCaptureDevice(DeviceInfos[DeviceIndex].DeviceId);
    }
}
