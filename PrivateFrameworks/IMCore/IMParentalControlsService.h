//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface IMParentalControlsService : NSObject
{
    _Bool _disableService;
    _Bool _forceWhiteList;
    NSSet *_whitelist;
    NSString *_name;
}

@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSSet *whitelist; // @synthesize whitelist=_whitelist;
@property _Bool forceWhiteList; // @synthesize forceWhiteList=_forceWhiteList;
@property _Bool disableService; // @synthesize disableService=_disableService;
- (void)dealloc;

@end
