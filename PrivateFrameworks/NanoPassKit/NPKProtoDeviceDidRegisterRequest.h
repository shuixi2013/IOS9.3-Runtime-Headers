//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying>
{
    NSMutableArray *_brokerRegionPushTopics;
    NSMutableArray *_tsmRegionPushTopics;
    NSMutableArray *_tsmRegionURLs;
}

@property(retain, nonatomic) NSMutableArray *brokerRegionPushTopics; // @synthesize brokerRegionPushTopics=_brokerRegionPushTopics;
@property(retain, nonatomic) NSMutableArray *tsmRegionURLs; // @synthesize tsmRegionURLs=_tsmRegionURLs;
@property(retain, nonatomic) NSMutableArray *tsmRegionPushTopics; // @synthesize tsmRegionPushTopics=_tsmRegionPushTopics;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)brokerRegionPushTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)brokerRegionPushTopicsCount;
- (void)addBrokerRegionPushTopics:(id)arg1;
- (void)clearBrokerRegionPushTopics;
- (id)tsmRegionURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tsmRegionURLsCount;
- (void)addTsmRegionURLs:(id)arg1;
- (void)clearTsmRegionURLs;
- (id)tsmRegionPushTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tsmRegionPushTopicsCount;
- (void)addTsmRegionPushTopics:(id)arg1;
- (void)clearTsmRegionPushTopics;

@end

