//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayerUI/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlayerUI/MPUChronologicalProgressViewDelegate-Protocol.h>
#import <MediaPlayerUI/MPUMediaControlsTitlesViewDelegate-Protocol.h>
#import <MediaPlayerUI/MPUNowPlayingDelegate-Protocol.h>
#import <MediaPlayerUI/MPURemoteViewControllerPresentation-Protocol.h>
#import <MediaPlayerUI/MPUSystemMediaControlsViewDelegate-Protocol.h>
#import <MediaPlayerUI/MPUTransportControlMediaRemoteControllerDelegate-Protocol.h>
#import <MediaPlayerUI/MPUTransportControlsViewDataSource-Protocol.h>
#import <MediaPlayerUI/MPUTransportControlsViewDelegate-Protocol.h>
#import <MediaPlayerUI/MPUTransportControlsViewLayoutDelegate-Protocol.h>

@class MPAVRoutingController, MPUNowPlayingController, MPUSystemMediaControlsView, MPUTransportControlMediaRemoteController, NSArray, NSString, NSTimer, UIImageView, UIView;
@protocol MPUSystemMediaControlsDelegate;

@interface MPUSystemMediaControlsViewController : UIViewController <MPUNowPlayingDelegate, MPUTransportControlMediaRemoteControllerDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate, MPURemoteViewControllerPresentation, MPUChronologicalProgressViewDelegate, MPUMediaControlsTitlesViewDelegate, MPUSystemMediaControlsViewDelegate, MPAVRoutingControllerDelegate>
{
    MPUNowPlayingController *_nowPlayingController;
    MPAVRoutingController *_routingController;
    MPUSystemMediaControlsView *_mediaControlsView;
    UIImageView *_artworkImageView;
    MPUTransportControlMediaRemoteController *_transportControlMediaRemoteController;
    NSArray *_currentlySupportedCommands;
    NSTimer *_skipInformationRevealTimer;
    NSTimer *_scrubberCommitTimer;
    double _scrubbedTimeDestination;
    double _lastDurationFromUpdate;
    NSString *_audioCategoryForDisabledHUD;
    _Bool _lockscreenDisabledForScreenTurnOff;
    _Bool _wantsToLaunchNowPlayingApp;
    _Bool _nowPlayingIsRadioStation;
    NSArray *_notificationObservers;
    _Bool _persistentUpdatesEnabled;
    long long _style;
    id <MPUSystemMediaControlsDelegate> _delegate;
}

@property(nonatomic) _Bool persistentUpdatesEnabled; // @synthesize persistentUpdatesEnabled=_persistentUpdatesEnabled;
@property(nonatomic) __weak id <MPUSystemMediaControlsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)_shouldUseExtendedTransportControls;
- (id)_imageForTransportButtonWithControlType:(long long)arg1;
- (void)_launchFirstPartyMusicAppForShareCommand;
- (void)_launchCurrentNowPlayingApp;
- (void)_updateBuyButtonsWithNowPlayingInfo:(id)arg1;
- (_Bool)_canScrub;
- (_Bool)_mediaRemoteCommandIsSupportedAndEnabled:(unsigned int)arg1;
- (void)_updateSupportedCommands;
- (void)_updateTransportControlCount;
- (void)_revealSkipInformation;
- (void)_invalidateSkipInformationRevealTimer;
- (void)_scheduleSkipInformationRevealTimer;
- (void)_stopScrubberCommitTimer;
- (void)_commitCurrentScrubberValue;
- (void)_beginScrubberCommitTimer;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void)_buyButtonActionForSender:(id)arg1 command:(unsigned int)arg2;
- (void)_systemAppDidSkipTrackNotification:(id)arg1;
- (void)_supportedCommandsDidChangeNotification:(id)arg1;
- (void)_backlightLevelChangedNotification:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)mediaControlsTitlesViewWasTapped:(id)arg1;
- (void)progressViewDidEndScrubbing:(id)arg1;
- (void)progressViewDidBeginScrubbing:(id)arg1;
- (void)remoteViewControllerDidFinish;
- (double)transportControlsView:(id)arg1 transportButtonUnhighlightAnimationDurationForControlType:(long long)arg2;
- (struct CGSize)transportControlsView:(id)arg1 adjustedMaximumTransportButtonSizeWithProposedSize:(struct CGSize)arg2;
- (struct CGRect)transportControlsView:(id)arg1 adjustedFrameOfTransportButtonWithControlType:(long long)arg2 proposedFrame:(struct CGRect)arg3;
- (void)transportControlsView:(id)arg1 longPressEndOnControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 longPressBeginOnControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 tapOnControlType:(long long)arg2;
- (id)transportControlsView:(id)arg1 buttonForControlType:(long long)arg2;
- (void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned int)arg2 withOptions:(id)arg3 shouldLaunchApplication:(_Bool)arg4;
- (id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1;
- (void)mediaControlsViewDidConfirmBuyAlbumAction:(id)arg1;
- (void)mediaControlsViewDidCancelBuyTrackDownloadAction:(id)arg1;
- (void)mediaControlsViewDidConfirmBuyTrackAction:(id)arg1;
- (void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(_Bool)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
@property(readonly, nonatomic) UIView *artworkView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

