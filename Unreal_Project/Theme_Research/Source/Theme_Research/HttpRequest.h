// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Http.h"

/**
 * 
 */
class THEME_RESEARCH_API HttpRequest
{
public:
	HttpRequest();
	~HttpRequest();
	void OnRequest(const FString Url, const FString Verb);

private:
	static void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool ConnectionSuccessfully);
};
