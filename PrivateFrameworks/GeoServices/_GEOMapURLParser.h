//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOUserSessionEntity, NSString, NSURL;

@interface _GEOMapURLParser : NSObject
{
    NSURL *_url;
    int _mapType;
    int _transportType;
    int _trackingMode;
    _Bool _exactPositionSpecified;
    CDStruct_2c43369c _centerCoordinate;
    CDStruct_951efa70 _span;
    float _zoomLevel;
    NSString *_addressString;
    NSString *_directionsSourceAddressString;
    NSString *_directionsDestinationAddressString;
    NSString *_searchQuery;
    CDStruct_2c43369c _searchCoordinate;
    struct {
        CDStruct_2c43369c center;
        CDStruct_951efa70 span;
    } _searchRegion;
    int _searchProviderID;
    unsigned long long _searchUID;
    NSString *_contentProvider;
    NSString *_contentProviderID;
    NSString *_abRecordID;
    NSString *_abAddressID;
    GEOUserSessionEntity *_userSessionEntity;
    double _altitude;
    double _rotation;
    double _tilt;
    double _roll;
}

+ (_Bool)isValidMapsURLForAppendingSharedSessionID:(id)arg1;
+ (_Bool)isValidMapsCategoryURL:(id)arg1;
+ (_Bool)isValidMapURL:(id)arg1;
@property(readonly) double roll; // @synthesize roll=_roll;
@property(readonly) double tilt; // @synthesize tilt=_tilt;
@property(readonly) double rotation; // @synthesize rotation=_rotation;
@property(readonly) double altitude; // @synthesize altitude=_altitude;
@property(readonly) GEOUserSessionEntity *userSessionEntity; // @synthesize userSessionEntity=_userSessionEntity;
@property(readonly) NSString *abAddressID; // @synthesize abAddressID=_abAddressID;
@property(readonly) NSString *abRecordID; // @synthesize abRecordID=_abRecordID;
@property(readonly) NSString *contentProviderID; // @synthesize contentProviderID=_contentProviderID;
@property(readonly) NSString *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(readonly) unsigned long long searchUID; // @synthesize searchUID=_searchUID;
@property(readonly) int searchProviderID; // @synthesize searchProviderID=_searchProviderID;
@property(readonly) CDStruct_90e2a262 searchRegion; // @synthesize searchRegion=_searchRegion;
@property(readonly) CDStruct_c3b9c2ee searchCoordinate; // @synthesize searchCoordinate=_searchCoordinate;
@property(readonly) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly) NSString *directionsDestinationAddressString; // @synthesize directionsDestinationAddressString=_directionsDestinationAddressString;
@property(readonly) NSString *directionsSourceAddressString; // @synthesize directionsSourceAddressString=_directionsSourceAddressString;
@property(readonly) NSString *addressString; // @synthesize addressString=_addressString;
@property(readonly) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly) CDStruct_c3b9c2ee span; // @synthesize span=_span;
@property(readonly) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(readonly) _Bool exactPositionSpecified; // @synthesize exactPositionSpecified=_exactPositionSpecified;
@property(readonly) int trackingMode; // @synthesize trackingMode=_trackingMode;
@property(readonly) int transportType; // @synthesize transportType=_transportType;
@property(readonly) int mapType; // @synthesize mapType=_mapType;
- (_Bool)parseIncludingCustomParameters:(_Bool)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
