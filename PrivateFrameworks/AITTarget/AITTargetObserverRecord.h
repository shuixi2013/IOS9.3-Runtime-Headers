//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AITTargetObserverRecord : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    id _observer;
}

+ (id)recordForObserver:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) id observer; // @synthesize observer=_observer;
- (void)dealloc;

@end

