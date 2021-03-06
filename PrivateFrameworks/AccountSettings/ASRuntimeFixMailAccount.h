//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountSettings/ASRuntimeFixProtocol-Protocol.h>

@class NSSet, NSString;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol>
{
    _Bool _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}

- (id)supportedAccountTypes;
- (void)accountsHaveBeenSaved:(_Bool)arg1;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)_cleanupAccountClass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

