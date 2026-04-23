#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <SafariServices/SafariServices.h>
#import <UIKit/UIKit.h>
#import <roothide.h>

#import "../NotificationKeys.h"
#import "../PreferenceKeys.h"

@interface EnekoRootListController : PSListController <SFSafariViewControllerDelegate>
@end

@interface NSTask : NSObject
@property (copy) NSArray *arguments;
@property (copy) NSString *launchPath;
- (void)launch;
@end
