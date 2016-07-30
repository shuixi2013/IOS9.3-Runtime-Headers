//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

@class NSString, RadioTrack;

@interface MPAVItem (RURadioAVItemAdditions)
- (id)_plistKeyForMPMediaItemProperty:(id)arg1;
@property(readonly, nonatomic) _Bool supportsRadioTrackActions;
@property(readonly, nonatomic) RadioTrack *radioTrack;
@property(readonly, nonatomic) _Bool isRadioItem;
- (void)addDerivedStationForArtist:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *albumBuyButtonText;
@property(readonly, nonatomic) long long albumBuyButtonType;
@end
