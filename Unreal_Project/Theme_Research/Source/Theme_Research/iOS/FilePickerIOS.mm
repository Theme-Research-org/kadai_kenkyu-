#import "FilePickerIOS.h"
#import "FilePickerHelper.h"
#import "Misc/Paths.h"
#import "HAL/UnrealMemory.h"

@implementation FilePickerIOS

+ (instancetype)sharedInstance {
    static FilePickerIOS *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}

- (void)showFilePicker {
    UIDocumentPickerViewController *documentPicker = [[UIDocumentPickerViewController alloc] initWithDocumentTypes:@[@"public.data"] inMode:UIDocumentPickerModeImport];
    documentPicker.delegate = self;
    UIViewController *rootViewController = [UIApplication sharedApplication].keyWindow.rootViewController;
    [rootViewController presentViewController:documentPicker animated:YES completion:nil];
}

- (void)documentPicker:(UIDocumentPickerViewController *)controller didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    NSURL *url = [urls firstObject];
    if (url) {
        NSString *filePath = [url path];
        const char *pathCStr = [filePath cStringUsingEncoding:NSUTF8StringEncoding];
        if (pathCStr) {
            nativeOnFilePicked(pathCStr);
        }
    }
}

@end

extern "C" void nativeOnFilePicked(const char *filePath) {
    FString PickedFilePath(UTF8_TO_TCHAR(filePath));
    UE_LOG(LogTemp, Log, TEXT("Picked file: %s"), *PickedFilePath);

    // Here you can do something with the picked file path, e.g., pass it to a blueprint function
}
