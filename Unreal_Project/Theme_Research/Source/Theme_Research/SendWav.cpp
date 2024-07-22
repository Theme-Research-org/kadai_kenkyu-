// Fill out your copyright notice in the Description page of Project Settings.


#include "SendWav.h"
#include "HttpModule.h"
#include "HttpManager.h"
#include "Http.h"
#include "JsonUtilities.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

// Sets default values
ASendWav::ASendWav()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASendWav::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASendWav::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASendWav::SendWavFileToAWS(FString& ResponseContent, bool& bSuccess)
{
    // ������
    ResponseContent = "";
    bSuccess = false;

    // �v���W�F�N�g�̕ۑ��f�B���N�g�����擾
    FString SaveDirectory = FPaths::ProjectSavedDir();

    // �t�@�C���p�X���w��
    FString FilePath = SaveDirectory / TEXT("recording.wav");

    // �t�@�C���̓��e��ǂݍ���
    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *FilePath);
        return;
    }

    // HTTP���N�G�X�g���쐬
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL("https://brw84z1qzb.execute-api.ap-northeast-1.amazonaws.com/WhisperReq_Py");
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader("Content-Type", "application/octet-stream");

    // �t�@�C���f�[�^�����N�G�X�g�{�f�B�ɐݒ�
    HttpRequest->SetContent(FileData);

    // ���X�|���X������
    HttpRequest->OnProcessRequestComplete().BindLambda([&](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (bWasSuccessful && Response->GetResponseCode() == 200)
            {
                FString ResponseContent = Response->GetContentAsString();
                bSuccess = true;
                UE_LOG(LogTemp, Log, TEXT("Response: %s"), *ResponseContent);
            }
            else
            {
                bSuccess = false;
                UE_LOG(LogTemp, Error, TEXT("Request failed. Response Code: %d"), Response->GetResponseCode());
            }
        });

    // ���N�G�X�g�𑗐M
    HttpRequest->ProcessRequest();
}
