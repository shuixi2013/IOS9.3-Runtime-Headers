//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFont.h>

@interface UIFont (IC)
+ (long long)stepsBetweenContentSizeCategory:(id)arg1 andCategory:(id)arg2;
+ (id)contentSizeCategories;
+ (double)preferredFontSizeWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3 maxSize:(double)arg4;
+ (struct UIFont *)preferredSystemFontWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3;
+ (double)fontSizeForSubheaderImport;
+ (double)fontSizeForHeaderImport;
+ (struct UIFont *)preferredFontForBodyTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)preferredFontForHeadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)preferredFontForTitleTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)attachmentBrowserTitleFont;
+ (struct UIFont *)listViewTitleFont;
+ (double)lineHeightForAttachmentTitleText:(long long)arg1;
+ (double)spacingForAttachmentTitleText:(long long)arg1;
+ (id)preferredFontForAttachmentText:(long long)arg1;
+ (id)preferredFontForFixedWidthText;
+ (id)preferredFontForDateText;
+ (id)preferredFontForBodyText;
+ (id)preferredFontForSubheadingText;
+ (id)preferredFontForHeadingText;
+ (id)preferredFontForTitleText;
- (id)fontWithTabularNumbers;
@end
