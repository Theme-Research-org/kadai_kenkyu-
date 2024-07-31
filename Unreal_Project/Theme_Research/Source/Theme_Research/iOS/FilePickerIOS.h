#import <UIKit/UIKit.h>

@interface FilePickerIOS : NSObject <UIDocumentPickerDelegate>
+ (instancetype)sharedInstance;
- (void)showFilePicker;
@end
