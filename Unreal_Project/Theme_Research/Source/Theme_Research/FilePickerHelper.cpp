// Fill out your copyright notice in the Description page of Project Settings.


#include "FilePickerHelper.h"

#if PLATFORM_WINDOWS || PLATFORM_MAC
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#endif

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif

#if PLATFORM_IOS
#import "IOS/IOSAppDelegate.h"
#import "IOS/IOSView.h"
#import "FilePickerIOS.h"
#endif

void UFilePickerHelper::OpenFilePicker()
{
#if PLATFORM_WINDOWS || PLATFORM_MAC
    TArray<FString> SelectedFiles;
    bool bFileOpened = OpenFileDialog(TEXT("Select a File"), FPaths::ProjectDir(), TEXT("All Files (*.*)|*.*"), SelectedFiles);

    if (bFileOpened)
    {
        for (const FString& File : SelectedFiles)
        {
            UE_LOG(LogTemp, Log, TEXT("Selected File: %s"), *File);
        }
    }
#elif PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        jclass Class = FAndroidApplication::FindJavaClass("com/YourCompany/Theme_Research/FilePickerActivity");
        if (Class)
        {
            // �R���X�g���N�^���擾
            jmethodID Constructor = Env->GetMethodID(Class, "<init>", "()V");
            if (Constructor)
            {
                // �C���X�^���X���쐬
                jobject Instance = Env->NewObject(Class, Constructor);
                if (Instance)
                {
                    // ��ÓI���\�b�h��ID���擾
                    jmethodID Method = Env->GetMethodID(Class, "pickFile", "()V");
                    if (Method)
                    {
                        // �C���X�^���X���\�b�h���Ăяo��
                        Env->CallVoidMethod(Instance, Method);
                    }

                    // �C���X�^���X�̎Q�Ƃ����
                    Env->DeleteLocalRef(Instance);
}
        }
    }
}
#elif PLATFORM_IOS
    [[FilePickerIOS sharedInstance]showFilePicker];
#endif
}

#if PLATFORM_WINDOWS || PLATFORM_MAC
bool OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFiles)
{
    IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
    if (!DesktopPlatform) return false;

    void* ParentWindowHandle = nullptr;

    return DesktopPlatform->OpenFileDialog(
        ParentWindowHandle,
        DialogTitle,
        DefaultPath,
        TEXT(""),
        FileTypes,
        EFileDialogFlags::None,
        OutFiles
    );
}
#endif

#if PLATFORM_ANDROID
extern "C"
JNIEXPORT void JNICALL
Java_com_YourCompany_Theme_Research_GameActivity_nativeOnFilePicked(JNIEnv* Env, jobject Thiz, jstring Path)
{
    const char* NativeString = Env->GetStringUTFChars(Path, 0);
    FString PickedFilePath = FString(NativeString);
    Env->ReleaseStringUTFChars(Path, NativeString);

    // Do something with the picked file path
    UE_LOG(LogTemp, Log, TEXT("Picked file: %s"), *PickedFilePath);
}
#endif

#if PLATFORM_IOS
extern "C" void nativeOnFilePicked(const char* filePath) {
    FString PickedFilePath(UTF8_TO_TCHAR(filePath));
    UE_LOG(LogTemp, Log, TEXT("Picked file: %s"), *PickedFilePath);

    // Here you can do something with the picked file path, e.g., pass it to a blueprint function
}
#endif
