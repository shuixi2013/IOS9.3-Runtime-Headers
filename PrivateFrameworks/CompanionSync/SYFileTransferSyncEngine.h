//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/SYSyncEngine.h>

#import <CompanionSync/IDSServiceDelegate-Protocol.h>

@class IDSService, NSDictionary, NSMutableArray, NSMutableIndexSet, NSObject, NSString, NSURL, SYDevice, SYStartSyncSession, _SYInputStreamer, _SYOutputStreamer;
@protocol OS_dispatch_queue;

@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate>
{
    _Bool _inSession;
    _Bool _sessionCanceled;
    SYStartSyncSession *_sessionStartMessage;
    NSURL *_outputFileURL;
    _SYOutputStreamer *_outputStream;
    NSURL *_inputFileURL;
    _SYInputStreamer *_inputStream;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsQueue;
    SYDevice *_activeDevice;
    SYDevice *_sessionDevice;
    NSMutableIndexSet *_messageRows;
    NSMutableArray *_deferredIncomingSessions;
    NSDictionary *_customIDSOptions;
}

@property(copy, nonatomic) NSDictionary *customIDSOptions; // @synthesize customIDSOptions=_customIDSOptions;
- (void).cxx_destruct;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3;
- (void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3;
- (void)_handleIncomingStreamDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_consumeRemainingStreamDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldTreatAsSessionEnd:(id)arg1;
- (void)_recordLastSeqNo:(id)arg1;
- (void)_readNextProtobuf:(CDUnknownBlockType)arg1;
- (id)_assumeOwnershipOfURL:(id)arg1 error:(id *)arg2;
- (id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (id)_fileTransferHeader;
- (id)idsOptions:(id)arg1;
- (void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)_cancelSession;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (_Bool)buffersSessions;
- (_Bool)isInSession;
- (void)endSession;
- (void)beginSession;
- (void)suspend;
- (_Bool)resume:(id *)arg1;
- (id)initWithService:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
