//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

@protocol BRCFileCoordinationWriting
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
- (void)writeUnderCoordinationFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2 canDelete:(_Bool)arg3;
@end

