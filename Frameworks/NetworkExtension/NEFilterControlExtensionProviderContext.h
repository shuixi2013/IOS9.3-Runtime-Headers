//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderContext.h>

#import <NetworkExtension/NEFilterControlExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterControlExtensionProviderProtocol-Protocol.h>

@class NSString;

@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol>
{
    _Bool _observing;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property _Bool observing; // @synthesize observing=_observing;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)provideRemediationMap:(id)arg1;
- (void)notifyRulesChanged;
- (void)handleNewFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopWithReason:(int)arg1;
- (void)dispose;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

