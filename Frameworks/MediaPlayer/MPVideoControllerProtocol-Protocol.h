//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPControllerProtocol-Protocol.h>

@class MPVideoView, NSArray, NSSet, UIColor, UIImage, UIView, _UIHostedWindow;
@protocol MPVideoOverlay;

@protocol MPVideoControllerProtocol <MPControllerProtocol>
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp;
@property(nonatomic) unsigned long long visibleParts;
@property(readonly, retain, nonatomic) MPVideoView *videoView;
@property(readonly, retain, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property(readonly, nonatomic) _Bool viewControllerWillRequestExit;
@property(nonatomic) _Bool TVOutEnabled;
@property(nonatomic) unsigned long long scaleMode;
@property(retain, nonatomic) UIImage *posterImage;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(nonatomic) unsigned long long itemTypeOverride;
@property(nonatomic) _Bool inlinePlaybackUsesTVOut;
@property(readonly, nonatomic) unsigned int hostedWindowContextID;
@property(readonly, nonatomic) _UIHostedWindow *hostedWindow;
@property(nonatomic) _Bool displayPlaybackErrorAlerts;
@property(nonatomic) unsigned long long disabledParts;
@property(nonatomic) _Bool disableControlsAutohide;
@property(nonatomic) _Bool disableAutoRotation;
@property(nonatomic) unsigned long long desiredParts;
@property(nonatomic) _Bool controlsOverlayVisible;
@property(nonatomic) _Bool canShowControlsOverlay;
@property(readonly, nonatomic) _Bool canChangeScaleMode;
@property(nonatomic) _Bool canAnimateControlsOverlay;
@property(retain, nonatomic) UIColor *backstopColor;
@property(readonly, nonatomic) UIView *backgroundView;
@property(nonatomic) _Bool attemptAutoPlayWhenControlsHidden;
@property(nonatomic) int artworkImageStyle;
@property(nonatomic) _Bool alwaysAllowHidingControlsOverlay;
@property(nonatomic) _Bool allowsWirelessPlayback;
@property(nonatomic) _Bool allowsDetailScrubbing;
- (void)setOwnsStatusBar:(_Bool)arg1;
- (void)showAlternateTracksController:(NSSet *)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setUseHostedWindowWhenFullscreen:(_Bool)arg1;
- (void)setScaleModeOverride:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2 force:(_Bool)arg3;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setControlsNeedLayout;
- (void)setClosedCaptions:(NSArray *)arg1;
- (void)prepareToDisplayVideo;
- (void)exitFullscreen;
- (void)displayVideoView;
- (_Bool)canHideOverlay:(_Bool)arg1;
@end

