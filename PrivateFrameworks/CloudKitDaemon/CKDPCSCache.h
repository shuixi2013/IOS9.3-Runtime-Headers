//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSCache : NSObject
{
    CDUnknownBlockType _fetchPCSItemForCacheBlock;
    NSMutableDictionary *_itemIDToPCSCacheItem;
    NSObject<OS_dispatch_queue> *_itemPCSFetchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *itemPCSFetchQueue; // @synthesize itemPCSFetchQueue=_itemPCSFetchQueue;
@property(retain, nonatomic) NSMutableDictionary *itemIDToPCSCacheItem; // @synthesize itemIDToPCSCacheItem=_itemIDToPCSCacheItem;
@property(copy, nonatomic) CDUnknownBlockType fetchPCSItemForCacheBlock; // @synthesize fetchPCSItemForCacheBlock=_fetchPCSItemForCacheBlock;
- (void).cxx_destruct;
- (void)clearCache;
- (void)fetchPCSForItemWithID:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)pcsDataFetched:(id)arg1 forItemWithID:(id)arg2 error:(id)arg3;
- (void)setPCSData:(id)arg1 forItemWithID:(id)arg2;
- (void)setPCSData:(id)arg1 forItemsPassingTest:(CDUnknownBlockType)arg2;
- (void)_lockedSetPCSData:(id)arg1 forItemWithID:(id)arg2;
- (id)init;
- (void)_initCache;

@end
