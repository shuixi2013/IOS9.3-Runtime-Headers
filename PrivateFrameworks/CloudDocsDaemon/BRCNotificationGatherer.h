//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCNotificationPipe;

__attribute__((visibility("hidden")))
@interface BRCNotificationGatherer : NSObject
{
    BRCNotificationPipe *_pipe;
    CDUnknownBlockType _gatherReply;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)done;
- (_Bool)continueGatheringWithBatchSize:(long long)arg1;
- (id)initWithNotificationPipe:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;

@end
