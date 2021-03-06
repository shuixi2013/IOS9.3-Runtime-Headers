//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/TUCall.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface TUProxyCall : TUCall <NSSecureCoding>
{
    _Bool _hostedOnCurrentDevice;
    _Bool _conferenced;
    _Bool _outgoing;
    _Bool _voicemail;
    _Bool _isVideo;
    _Bool _isSendingAudio;
    _Bool _blocked;
    _Bool _emergencyCall;
    _Bool _wiFiCall;
    _Bool _shouldPlayHoldMusic;
    _Bool _needsManualInCallSounds;
    _Bool _managesAudioInterruptions;
    _Bool _uplinkMuted;
    int _callStatus;
    int _callIdentifier;
    int _service;
    int _callRelaySupport;
    NSString *_callUUID;
    double _startTime;
    NSString *_callHistoryIdentifier;
    NSString *_destinationID;
    NSString *_callerNameFromNetwork;
    NSDictionary *_endedReasonUserInfo;
    NSString *_endedReasonString;
    NSString *_endedErrorString;
    NSData *_localFrequency;
    NSData *_remoteFrequency;
    NSNumber *_totalDataUsed;
}

+ (_Bool)supportsSecureCoding;
+ (id)proxyCallWithCall:(id)arg1;
@property(retain, nonatomic) NSNumber *totalDataUsed; // @synthesize totalDataUsed=_totalDataUsed;
@property(retain, nonatomic) NSData *remoteFrequency; // @synthesize remoteFrequency=_remoteFrequency;
@property(retain, nonatomic) NSData *localFrequency; // @synthesize localFrequency=_localFrequency;
@property(nonatomic) int callRelaySupport; // @synthesize callRelaySupport=_callRelaySupport;
- (_Bool)isUplinkMuted;
@property(copy, nonatomic) NSString *endedErrorString; // @synthesize endedErrorString=_endedErrorString;
@property(copy, nonatomic) NSString *endedReasonString; // @synthesize endedReasonString=_endedReasonString;
@property(copy, nonatomic) NSDictionary *endedReasonUserInfo; // @synthesize endedReasonUserInfo=_endedReasonUserInfo;
@property(nonatomic) _Bool managesAudioInterruptions; // @synthesize managesAudioInterruptions=_managesAudioInterruptions;
@property(nonatomic) _Bool needsManualInCallSounds; // @synthesize needsManualInCallSounds=_needsManualInCallSounds;
@property(nonatomic) _Bool shouldPlayHoldMusic; // @synthesize shouldPlayHoldMusic=_shouldPlayHoldMusic;
@property(nonatomic, getter=isWiFiCall) _Bool wiFiCall; // @synthesize wiFiCall=_wiFiCall;
@property(nonatomic, getter=isEmergencyCall) _Bool emergencyCall; // @synthesize emergencyCall=_emergencyCall;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
- (_Bool)isSendingAudio;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(nonatomic, getter=isVoicemail) _Bool voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(nonatomic) int service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(nonatomic) int callIdentifier; // @synthesize callIdentifier=_callIdentifier;
@property(copy, nonatomic) NSString *callHistoryIdentifier; // @synthesize callHistoryIdentifier=_callHistoryIdentifier;
@property(nonatomic, getter=isConferenced) _Bool conferenced; // @synthesize conferenced=_conferenced;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic, getter=isHostedOnCurrentDevice) _Bool hostedOnCurrentDevice; // @synthesize hostedOnCurrentDevice=_hostedOnCurrentDevice;
@property(nonatomic) int callStatus; // @synthesize callStatus=_callStatus;
@property(copy, nonatomic) NSString *callUUID; // @synthesize callUUID=_callUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendHardPauseDigits;
- (void)sendConversationData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)supportsConversationMessaging;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)updateProxyCallWithDaemon;
- (void)setUplinkMuted:(_Bool)arg1;
- (void)setIsSendingAudio:(_Bool)arg1;
- (void)setTransitionStatus:(int)arg1;
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;
- (void)setShouldSuppressRingtone:(_Bool)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)setWantsHoldMusic:(_Bool)arg1;
- (void)setDownlinkMuted:(_Bool)arg1;
- (_Bool)isDownlinkMuted;
- (void)answerWithSourceIdentifier:(id)arg1 wantsHoldMusic:(_Bool)arg2;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)unhold;
- (void)hold;
- (void)leaveConference;
- (void)joinConference;
- (int)supportedModelType;
- (void)updateWithCall:(id)arg1;

@end

