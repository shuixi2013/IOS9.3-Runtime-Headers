//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBFDeviceLockController;

@interface SBFPasscodeLockDisableAssertion : NSObject
{
    NSString *_identifier;
    int _type;
    SBFDeviceLockController *_controller;
    _Bool _invalidated;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (int)type;
- (id)description;
- (_Bool)isValid;
- (id)initWithIdentifier:(id)arg1 type:(int)arg2 withController:(id)arg3;

@end
