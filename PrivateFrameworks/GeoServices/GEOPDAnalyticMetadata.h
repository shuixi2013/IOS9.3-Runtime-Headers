//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionId;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    NSString *_osVersion;
    NSString *_productName;
    int _requestSource;
    unsigned int _sequenceNumber;
    NSMutableArray *_serviceTags;
    _Bool _isFromApi;
    _Bool _isInternalInstall;
    _Bool _isInternalTool;
    struct {
        unsigned int sessionId:1;
        unsigned int requestSource:1;
        unsigned int sequenceNumber:1;
        unsigned int isFromApi:1;
        unsigned int isInternalInstall:1;
        unsigned int isInternalTool:1;
    } _has;
}

@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(nonatomic) _Bool isFromApi; // @synthesize isFromApi=_isFromApi;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) CDStruct_612aec5b sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isInternalInstall; // @synthesize isInternalInstall=_isInternalInstall;
@property(nonatomic) _Bool isInternalTool; // @synthesize isInternalTool=_isInternalTool;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProductName;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(nonatomic) _Bool hasIsFromApi;
@property(nonatomic) _Bool hasRequestSource;
@property(nonatomic) int requestSource; // @synthesize requestSource=_requestSource;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasIsInternalInstall;
@property(nonatomic) _Bool hasIsInternalTool;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(readonly, nonatomic) _Bool hasHardwareModel;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

@end
