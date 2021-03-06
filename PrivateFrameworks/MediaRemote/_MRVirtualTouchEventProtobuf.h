//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRVirtualTouchEventProtobuf : PBCodable <NSCopying>
{
    double _x;
    double _y;
    int _phase;
    struct {
        unsigned int x:1;
        unsigned int y:1;
        unsigned int phase:1;
    } _has;
}

@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPhase;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(nonatomic) _Bool hasY;
@property(nonatomic) _Bool hasX;

@end

