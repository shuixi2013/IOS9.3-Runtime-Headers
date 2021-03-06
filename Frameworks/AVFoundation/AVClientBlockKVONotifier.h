//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVKVONotifier-Protocol.h>

@class AVCallbackContextRegistry, NSString;

@interface AVClientBlockKVONotifier : NSObject <AVKVONotifier>
{
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    NSObject *_object;
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
}

- (void)cancelCallbacks;
- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)start;
- (void)finalize;
- (void)dealloc;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

