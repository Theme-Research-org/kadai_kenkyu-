// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FilePickerHelper.generated.h"

/**
 *
 */
UCLASS()
class THEME_RESEARCH_API UFilePickerHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "File Picker")
	static void OpenFilePicker();

};

#if PLATFORM_WINDOWS || PLATFORM_MAC
bool OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFiles);
#endif
