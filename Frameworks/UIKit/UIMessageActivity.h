//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity
{
    _Bool _sourceIsManaged;
    MFMessageComposeViewController *_messageComposeViewController;
}

+ (long long)activityCategory;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityType;
- (void)dealloc;

@end
