//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVPlayerItem, MPAVItem, NSURL;

@interface MPMovie : NSObject
{
    MPAVItem *_item;
    NSURL *_url;
    long long _movieSourceType;
    double _startPlaybackTime;
    double _endPlaybackTime;
    _Bool _explicitlySetMovieSourceType;
    _Bool _movieIsUnplayable;
    double _lastKnownDuration;
    struct CGSize _lastKnownNaturalSize;
    unsigned long long _lastKnownType;
}

+ (id)movieWithPlayerItem:(id)arg1 error:(id *)arg2;
+ (id)movieWithAsset:(id)arg1 error:(id *)arg2;
+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_determineMediaType;
- (id)_MPArrayQueueItem;
- (void)_typeAvailableNotification:(id)arg1;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_durationAvailableNotification:(id)arg1;
@property(nonatomic) double endPlaybackTime;
@property(nonatomic) double startPlaybackTime;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
@property(nonatomic) long long movieSourceType;
@property(readonly, nonatomic) unsigned long long movieMediaTypes;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) AVPlayerItem *playerItem;
@property(readonly, nonatomic) AVAsset *asset;
- (void)dealloc;
- (void)_sharedInit;
- (id)_initWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_initWithPlayerItem:(id)arg1 error:(id *)arg2;
- (id)_initWithAsset:(id)arg1 error:(id *)arg2;

@end

