//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRNowPlayingInfoProtobuf : PBCodable <NSCopying>
{
    double _duration;
    double _elapsedTime;
    long long _radioStationIdentifier;
    double _timestamp;
    unsigned long long _uniqueIdentifier;
    NSString *_album;
    NSString *_artist;
    NSData *_artworkDataDigest;
    float _playbackRate;
    NSString *_radioStationHash;
    NSString *_radioStationName;
    int _repeatMode;
    int _shuffleMode;
    NSString *_title;
    _Bool _isAdvertisement;
    _Bool _isAlwaysLive;
    _Bool _isExplicitTrack;
    _Bool _isMusicApp;
    struct {
        unsigned int duration:1;
        unsigned int elapsedTime:1;
        unsigned int radioStationIdentifier:1;
        unsigned int timestamp:1;
        unsigned int uniqueIdentifier:1;
        unsigned int playbackRate:1;
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int isAdvertisement:1;
        unsigned int isAlwaysLive:1;
        unsigned int isExplicitTrack:1;
        unsigned int isMusicApp:1;
    } _has;
}

@property(nonatomic) _Bool isAdvertisement; // @synthesize isAdvertisement=_isAdvertisement;
@property(nonatomic) _Bool isAlwaysLive; // @synthesize isAlwaysLive=_isAlwaysLive;
@property(retain, nonatomic) NSData *artworkDataDigest; // @synthesize artworkDataDigest=_artworkDataDigest;
@property(retain, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property(retain, nonatomic) NSString *radioStationHash; // @synthesize radioStationHash=_radioStationHash;
@property(nonatomic) long long radioStationIdentifier; // @synthesize radioStationIdentifier=_radioStationIdentifier;
@property(nonatomic) _Bool isMusicApp; // @synthesize isMusicApp=_isMusicApp;
@property(nonatomic) _Bool isExplicitTrack; // @synthesize isExplicitTrack=_isExplicitTrack;
@property(nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *album; // @synthesize album=_album;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsAdvertisement;
@property(nonatomic) _Bool hasIsAlwaysLive;
@property(readonly, nonatomic) _Bool hasArtworkDataDigest;
@property(readonly, nonatomic) _Bool hasRadioStationName;
@property(readonly, nonatomic) _Bool hasRadioStationHash;
@property(nonatomic) _Bool hasRadioStationIdentifier;
@property(nonatomic) _Bool hasIsMusicApp;
@property(nonatomic) _Bool hasIsExplicitTrack;
@property(nonatomic) _Bool hasUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasShuffleMode;
@property(nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(nonatomic) _Bool hasRepeatMode;
@property(nonatomic) int repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) _Bool hasPlaybackRate;
@property(nonatomic) _Bool hasElapsedTime;
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasArtist;
@property(readonly, nonatomic) _Bool hasAlbum;
- (void)dealloc;

@end

