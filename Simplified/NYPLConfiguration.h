// This class does NOT provide configuration for the following files:
// credits.css

@import UIKit;

@interface NYPLConfiguration : NSObject

+ (id)new NS_UNAVAILABLE;
- (id)init NS_UNAVAILABLE;

+ (BOOL) heapEnabled;

+ (BOOL) bugsnagEnabled;

+ (NSString *)heapID;

+ (NSString *)bugsnagID;

+ (BOOL)cardCreationEnabled;

+ (NSURL *)circulationURL;

// This can be overriden by setting |customMainFeedURL| in NYPLSettings.
+ (NSURL *)mainFeedURL;

+ (NSURL *)loanURL;

+ (NSURL *)registrationURL;

+ (NSURL *)minimumVersionURL;

+ (UIColor *)mainColor;

+ (UIColor *)accentColor;

+ (UIColor *)backgroundColor;

+ (UIColor *)backgroundDarkColor;

+ (UIColor *)backgroundSepiaColor;

+ (NSString *)systemFontName;

+ (NSString *)boldSystemFontName;

+ (UIColor *)backgroundMediaOverlayHighlightColor;

+ (UIColor *)backgroundMediaOverlayHighlightDarkColor;

+ (UIColor *)backgroundMediaOverlayHighlightSepiaColor;

@end
