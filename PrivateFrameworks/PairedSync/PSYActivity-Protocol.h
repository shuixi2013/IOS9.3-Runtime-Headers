//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@class PSYSyncOptions;

@protocol PSYActivity <NSObject>
- (oneway void)abortSyncWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)beginSyncWithOptions:(PSYSyncOptions *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

