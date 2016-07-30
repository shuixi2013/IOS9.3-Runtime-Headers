//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IDSLocalPairingRequestTimer : NSObject
{
    NSMutableDictionary *_requestContextMap;
    struct _opaque_pthread_mutex_t _requestContextMapLock;
}

- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;
- (id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;
- (void)_criticalInvokeTimeoutBlockForRequestID:(id)arg1;
- (void)_handleSystemTimerFired:(id)arg1;
- (id)_criticalFindRequestContextWithResponseHandler:(id)arg1;
- (id)scheduleTimeoutWithResponseHandler:(id)arg1 timeoutInterval:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;
- (void)_accessRequestContextMapInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;

@end
