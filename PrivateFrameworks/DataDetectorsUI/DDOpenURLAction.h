//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

@class LSAppLink;

__attribute__((visibility("hidden")))
@interface DDOpenURLAction : DDAction
{
    LSAppLink *_appLink;
    _Bool _appLinkInitDone;
}

- (void)perform;
- (id)localizedName;
- (id)companionAction;
- (id)appLink;
- (void)dealloc;
- (_Bool)useAppLink;

@end

