//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSString;

@protocol RPDaemonProtocol <NSObject>
- (oneway void)clientDidResignActiveWithBundleID:(NSString *)arg1;
- (oneway void)clientDidBecomeActiveWithBundleID:(NSString *)arg1;
- (oneway void)discardRecordingWithHandler:(void (^)(void))arg1;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)pauseRecording;
- (oneway void)stopRecordingWithHandler:(void (^)(NSURL *, NSError *))arg1;
- (oneway void)startRecordingWindowLayerContextID:(unsigned int)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 withHandler:(void (^)(NSError *, _Bool))arg4;
@end

