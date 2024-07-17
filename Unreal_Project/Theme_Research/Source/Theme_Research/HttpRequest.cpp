// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpRequest.h"
#include "Json.h"

HttpRequest::HttpRequest()
{
}

HttpRequest::~HttpRequest()
{
}

void HttpRequest::OnRequest(const FString Url, const FString Verb)
{
	// HTTP���N�G�X�g�I�u�W�F�N�g�쐬
	const FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	// HTTP���N�G�X�g�������Ɏ��s����֐��̃|�C���^���Z�b�g
	Request->OnProcessRequestComplete().BindStatic(&HttpRequest::OnResponseReceived);

	// HTTP���N�G�X�g��URL���Z�b�g
	Request->SetURL(Url);
	// HTTP���N�G�X�g�̃��\�b�h���Z�b�g
	Request->SetVerb(Verb);

	// HTTP���N�G�X�g���s
	Request->ProcessRequest();
}

void HttpRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool ConnectionSuccessfully)
{
	// JSON�I�u�W�F�N�g�i�[�p�ϐ�������
	TSharedPtr<FJsonObject> ResponseObj = MakeShareable(new FJsonObject());
	// �����񂩂�JSON��ǂݍ��ނ��߂�Reader������
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	// �����񂩂�JSON�I�u�W�F�N�g�փf�V���A���C�Y
	if (FJsonSerializer::Deserialize(Reader, ResponseObj))
	{
		// UE�Ń��O�o�́iAPI����󂯎���������񂻂̂܂܁j
		UE_LOG(LogTemp, Display, TEXT("Response %s"), *Response->GetContentAsString());
		// UE�Ń��O�o�́iJSON����name�L�[�̕�����̂ݏo�́j
		UE_LOG(LogTemp, Display, TEXT("Name %s"), *ResponseObj->GetStringField("name"));
	}
}
