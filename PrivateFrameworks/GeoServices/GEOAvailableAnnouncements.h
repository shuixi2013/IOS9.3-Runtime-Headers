//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying>
{
    NSMutableArray *_announcements;
    NSString *_languageCode;
}

@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSMutableArray *announcements; // @synthesize announcements=_announcements;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLanguageCode;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsCount;
- (void)addAnnouncement:(id)arg1;
- (void)clearAnnouncements;
- (void)dealloc;

@end

