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
	// HTTPリクエストオブジェクト作成
	const FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	// HTTPリクエスト完了時に実行する関数のポインタをセット
	Request->OnProcessRequestComplete().BindStatic(&HttpRequest::OnResponseReceived);

	// HTTPリクエストのURLをセット
	Request->SetURL(Url);
	// HTTPリクエストのメソッドをセット
	Request->SetVerb(Verb);

	// HTTPリクエスト実行
	Request->ProcessRequest();
}

void HttpRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool ConnectionSuccessfully)
{
	// JSONオブジェクト格納用変数初期化
	TSharedPtr<FJsonObject> ResponseObj = MakeShareable(new FJsonObject());
	// 文字列からJSONを読み込むためのReader初期化
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	// 文字列からJSONオブジェクトへデシリアライズ
	if (FJsonSerializer::Deserialize(Reader, ResponseObj))
	{
		// UEでログ出力（APIから受け取った文字列そのまま）
		UE_LOG(LogTemp, Display, TEXT("Response %s"), *Response->GetContentAsString());
		// UEでログ出力（JSONからnameキーの文字列のみ出力）
		UE_LOG(LogTemp, Display, TEXT("Name %s"), *ResponseObj->GetStringField("name"));
	}
}
