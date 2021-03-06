//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSFastEnumeration-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSFastEnumeration>
{
    NSMutableArray *_records;
    NSMutableDictionary *_additionalRecords;
    NSMutableDictionary *_localResources;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)summaryDescription;
- (id)extractDeletesFromBatchDeletedRecordIdentifiers:(id *)arg1 trashedRecordIdentifiers:(id *)arg2;
- (void)_setRecords:(id)arg1;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)_addAdditionalRecord:(id)arg1;
- (id)_additionalRecords;
- (void)_setAdditionalRecords:(id)arg1;
- (id)additionalRecordWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *records;
- (void)addRecordsFromBatch:(id)arg1;
- (void)addRecord:(id)arg1;
- (id)_initWithRecords:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (id)init;
- (id)cplFullDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)extractInitialDownloadBatch:(id *)arg1 shouldConsiderRecordFilter:(CDUnknownBlockType)arg2;
- (void)sortBatch;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4;

@end

