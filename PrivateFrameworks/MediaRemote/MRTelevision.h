//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MRTelevisionClientConnectionDelegate-Protocol.h>

@class MRDeviceInfo, MRTelevisionClientConnection, MSVDistributedNotificationObserver, NSData, NSInputStream, NSLock, NSMutableDictionary, NSNetService, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRTelevision : NSObject <MRTelevisionClientConnectionDelegate>
{
    NSNetService *_netService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct _MROrigin *_customOrigin;
    void *_playbackQueue;
    _Bool _isCoalescingClientStateUpdatesConfigMessages;
    NSLock *_callbacksLock;
    _Bool _wantsNowPlayingNotifications;
    _Bool _wantsNowPlayingArtworkNotifications;
    _Bool _wantsVolumeNotifications;
    unsigned int _connectionState;
    unsigned int _gameControllerInputMode;
    NSNetService *_service;
    MRDeviceInfo *_deviceInfo;
    NSString *_authToken;
    MRTelevisionClientConnection *_connection;
    NSData *_nowPlayingArtwork;
    NSMutableDictionary *_nowPlayingInfo;
    MSVDistributedNotificationObserver *_volumeControlNotificationObserver;
    CDUnknownBlockType _connectionStateCallback;
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;
    CDUnknownBlockType _gameControllerClientInputModeCallback;
    NSObject<OS_dispatch_queue> *_gameControllerInputModeCallbackQueue;
    CDUnknownBlockType _recordingStateCallback;
    NSObject<OS_dispatch_queue> *_recordingStateCallbackQueue;
    CDUnknownBlockType _textInputCallback;
    NSObject<OS_dispatch_queue> *_textInputCallbackQueue;
}

+ (id)_deviceInfoFromTXTRecordData:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *textInputCallbackQueue; // @synthesize textInputCallbackQueue=_textInputCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType textInputCallback; // @synthesize textInputCallback=_textInputCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordingStateCallbackQueue; // @synthesize recordingStateCallbackQueue=_recordingStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType recordingStateCallback; // @synthesize recordingStateCallback=_recordingStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerInputModeCallbackQueue; // @synthesize gameControllerInputModeCallbackQueue=_gameControllerInputModeCallbackQueue;
@property(nonatomic) unsigned int gameControllerInputMode; // @synthesize gameControllerInputMode=_gameControllerInputMode;
@property(copy, nonatomic) CDUnknownBlockType gameControllerClientInputModeCallback; // @synthesize gameControllerClientInputModeCallback=_gameControllerClientInputModeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(readonly, nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) MSVDistributedNotificationObserver *volumeControlNotificationObserver; // @synthesize volumeControlNotificationObserver=_volumeControlNotificationObserver;
@property(retain, nonatomic) NSMutableDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(copy, nonatomic) NSData *nowPlayingArtwork; // @synthesize nowPlayingArtwork=_nowPlayingArtwork;
@property(retain, nonatomic) MRTelevisionClientConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool wantsVolumeNotifications; // @synthesize wantsVolumeNotifications=_wantsVolumeNotifications;
@property(nonatomic) _Bool wantsNowPlayingArtworkNotifications; // @synthesize wantsNowPlayingArtworkNotifications=_wantsNowPlayingArtworkNotifications;
@property(nonatomic) _Bool wantsNowPlayingNotifications; // @synthesize wantsNowPlayingNotifications=_wantsNowPlayingNotifications;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) NSNetService *service; // @synthesize service=_service;
- (void)_handleKeyboardMessage:(id)arg1;
- (void)_handleSetVolumeControlAvailabilityMessage:(id)arg1;
- (void)_handleSetArtworkMessage:(id)arg1;
- (void)_handleContentItemsChangedNotificationMessage:(id)arg1;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_handleSetStateMessage:(id)arg1;
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_callClientRecordingStateCallback;
- (void)_callClientGameControllerInputModeCallback;
- (void)_callClientConnectionStateCallback:(id)arg1;
- (void)_sendTextInputMessageWithActionType:(unsigned long long)arg1 text:(id)arg2;
- (void)_registerPlaybackQueueCallback;
- (void)_updateNowPlayingInfo;
- (void)_addArtwork:(id)arg1 toNowPlayingInfo:(id)arg2;
- (void)_scheduleClientStateUpdatesConfigMessage;
- (void)_setupCustomOriginWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_loadDeviceInfo;
- (id)_authenticateWithKey:(id)arg1;
- (id)_setupCustomOrigin;
- (id)_errorForCurrentState;
- (id)_initializeConnection;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)processVoiceInputAudioDataForDeviceID:(unsigned int)arg1 withBuffer:(id)arg2 time:(CDStruct_ace97b7a)arg3 gain:(float)arg4;
- (void)registerVoiceInputDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendGameControllerEvent:(const CDStruct_9f528be3 *)arg1 controllerID:(unsigned long long)arg2;
- (void)unregisterGameController:(unsigned long long)arg1;
- (void)registerGameControllerWithProfile:(int)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearActiveTextEditingSessionData;
- (void)deleteBackwardInActiveTextEditingSession;
- (void)setTextOnActiveTextEditingSessionWithText:(id)arg1;
- (void)insertTextIntoActiveTextEditingSessionWithText:(id)arg1;
- (void)getTextEditingSessionWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent)arg1 toVirtualDeviceWithID:(unsigned long long)arg2;
- (void)registerTouchDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disconnect;
- (void)connectUsingAuthenticationKey:(id)arg1;
- (void)setVoiceRecordingStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setTextEditingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setGameControllerInputModeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setVoiceRecordingState:(unsigned int)arg1;
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;
@property(nonatomic) void *playbackQueue;
@property(nonatomic) struct _MROrigin *customOrigin;
- (_Bool)isConnected;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *hostName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithNetService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

