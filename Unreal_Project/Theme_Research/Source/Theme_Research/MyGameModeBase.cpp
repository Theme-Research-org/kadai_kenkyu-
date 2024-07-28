// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "HttpModule.h"
#include "HttpManager.h"
#include "Http.h"
#include "JsonUtilities.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"

void AMyGameModeBase::BeginPlay()
{
    Super::BeginPlay();
}

void AMyGameModeBase::SendWavFileToAWS(FString& ResponseContent, bool& bSuccess)
{
    ResponseContent = "";
    bSuccess = false;

    FString SaveDirectory = FPaths::ProjectSavedDir();
    FString FilePath = SaveDirectory / TEXT("recording.wav");

    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *FilePath);
        return;
    }

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL("https://brw84z1qzb.execute-api.ap-northeast-1.amazonaws.com/WhisperReq_Py");
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader("Content-Type", "application/octet-stream");

    HttpRequest->SetContent(FileData);

    HttpRequest->OnProcessRequestComplete().BindLambda([&](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (bWasSuccessful && Response->GetResponseCode() == 200)
            {
                ResponseContent = Response->GetContentAsString();
                bSuccess = true;
                UE_LOG(LogTemp, Log, TEXT("Response: %s"), *ResponseContent);
            }
            else
            {
                bSuccess = false;
                UE_LOG(LogTemp, Error, TEXT("Request failed. Response Code: %d"), Response->GetResponseCode());
            }
        });

    HttpRequest->ProcessRequest();
}
