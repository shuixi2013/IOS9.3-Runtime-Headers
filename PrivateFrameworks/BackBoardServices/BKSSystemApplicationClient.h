//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSBaseXPCClient.h>

@class NSObject;
@protocol BKSSystemApplicationClientDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BKSSystemApplicationClient : BSBaseXPCClient
{
    NSObject<OS_dispatch_queue> *_callOutQueue;
    _Bool _pendingCheckIn;
    _Bool _sentConnect;
    NSObject<OS_dispatch_semaphore> *_checkinSemaphore;
    id <BKSSystemApplicationClientDelegate> _delegate;
}

@property(nonatomic) id <BKSSystemApplicationClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4 waitDuration:(unsigned long long)arg5;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2;
- (void)_queue_handleWatchdogPing:(id)arg1;
- (void)_connect;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasResumed;
- (void)queue_handleMessage:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)finishBooting;
- (_Bool)ping;
- (void)restart;
- (void)checkIn;
- (void)connect;
- (void)dealloc;
- (id)initWithCalloutQueue:(id)arg1;

@end

