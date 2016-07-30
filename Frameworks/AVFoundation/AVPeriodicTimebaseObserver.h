//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVTimebaseObserver.h>

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver
{
    CDStruct_1b6d18a9 _intervalRequested;
    CDStruct_1b6d18a9 _lastIntervalUsed;
    CDStruct_1b6d18a9 _lastPeriodicFireTime;
    CDStruct_1b6d18a9 _lastNonperiodicFireTime;
    CDStruct_1b6d18a9 _lastStopTime;
    unsigned int _sequenceNum;
    CDUnknownBlockType _block;
}

- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)_effectiveRateChanged;
- (void)_fireBlockForTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 interval:(CDStruct_1b6d18a9)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end
