//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation
{
    _Bool _isFetchAllRecordZonesOperation;
    _Bool _ignorePCSFailures;
    CDUnknownBlockType _recordZoneFetchedProgressBlock;
    NSArray *_recordZoneIDs;
    NSObject<OS_dispatch_group> *_zoneFetchGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *zoneFetchGroup; // @synthesize zoneFetchGroup=_zoneFetchGroup;
@property(nonatomic) _Bool ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property(nonatomic) _Bool isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchedProgressBlock; // @synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
