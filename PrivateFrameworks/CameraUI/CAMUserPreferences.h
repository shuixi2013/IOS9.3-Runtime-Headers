//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMCaptureConfiguration, CAMConflictingControlConfiguration;

@interface CAMUserPreferences : NSObject
{
    _Bool _didResetTorchMode;
    _Bool _shouldShowGridView;
    _Bool _shouldCaptureHDREV0;
    _Bool _lockAsShutterEnabled;
    _Bool _irisCaptureEnabled;
    _Bool _shouldDelayRemotePersistence;
    CAMCaptureConfiguration *_captureConfiguration;
    CAMConflictingControlConfiguration *_conflictingControlConfiguration;
    long long _videoConfiguration;
    long long _slomoConfiguration;
    long long _previewViewAspectMode;
    long long _overriddenBackCaptureInterval;
    long long _overriddenFrontCaptureInterval;
}

+ (id)_defaultCaptureConfiguration;
+ (id)preferences;
@property(readonly, nonatomic) long long overriddenFrontCaptureInterval; // @synthesize overriddenFrontCaptureInterval=_overriddenFrontCaptureInterval;
@property(readonly, nonatomic) long long overriddenBackCaptureInterval; // @synthesize overriddenBackCaptureInterval=_overriddenBackCaptureInterval;
@property(readonly, nonatomic) _Bool shouldDelayRemotePersistence; // @synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence;
@property(readonly, nonatomic, getter=isIrisCaptureEnabled) _Bool irisCaptureEnabled; // @synthesize irisCaptureEnabled=_irisCaptureEnabled;
@property(readonly, nonatomic, getter=isLockAsShutterEnabled) _Bool lockAsShutterEnabled; // @synthesize lockAsShutterEnabled=_lockAsShutterEnabled;
@property(nonatomic) long long previewViewAspectMode; // @synthesize previewViewAspectMode=_previewViewAspectMode;
@property(readonly, nonatomic) long long slomoConfiguration; // @synthesize slomoConfiguration=_slomoConfiguration;
@property(readonly, nonatomic) long long videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, nonatomic) _Bool shouldCaptureHDREV0; // @synthesize shouldCaptureHDREV0=_shouldCaptureHDREV0;
@property(readonly, nonatomic) _Bool shouldShowGridView; // @synthesize shouldShowGridView=_shouldShowGridView;
@property(retain, nonatomic) CAMConflictingControlConfiguration *conflictingControlConfiguration; // @synthesize conflictingControlConfiguration=_conflictingControlConfiguration;
@property(retain, nonatomic) CAMCaptureConfiguration *captureConfiguration; // @synthesize captureConfiguration=_captureConfiguration;
- (void)_setDidResetTorchMode:(_Bool)arg1;
@property(nonatomic) _Bool didResetTorchMode; // @synthesize didResetTorchMode=_didResetTorchMode;
- (void).cxx_destruct;
- (_Bool)shouldResetCaptureConfiguration;
- (void)writePreferences;
- (_Bool)readPreferencesWithLaunchOptions:(id)arg1;
- (void)readPreferences;

@end

