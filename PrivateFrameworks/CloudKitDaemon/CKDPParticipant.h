//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPContactInformation, CKDPIdentifier, CKDPProtectionInfo;

__attribute__((visibility("hidden")))
@interface CKDPParticipant : PBCodable <NSCopying>
{
    long long _acceptTimestamp;
    CKDPContactInformation *_contactInformation;
    CKDPIdentifier *_inviterId;
    CKDPIdentifier *_participantId;
    int _participantType;
    int _permission;
    CKDPProtectionInfo *_publicKey;
    int _state;
    CKDPIdentifier *_userId;
    _Bool _createdOutOfProcess;
    struct {
        unsigned int acceptTimestamp:1;
        unsigned int participantType:1;
        unsigned int permission:1;
        unsigned int state:1;
        unsigned int createdOutOfProcess:1;
    } _has;
}

@property(nonatomic) long long acceptTimestamp; // @synthesize acceptTimestamp=_acceptTimestamp;
@property(retain, nonatomic) CKDPProtectionInfo *publicKey; // @synthesize publicKey=_publicKey;
@property(nonatomic) _Bool createdOutOfProcess; // @synthesize createdOutOfProcess=_createdOutOfProcess;
@property(retain, nonatomic) CKDPIdentifier *inviterId; // @synthesize inviterId=_inviterId;
@property(retain, nonatomic) CKDPContactInformation *contactInformation; // @synthesize contactInformation=_contactInformation;
@property(retain, nonatomic) CKDPIdentifier *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) CKDPIdentifier *participantId; // @synthesize participantId=_participantId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAcceptTimestamp;
@property(readonly, nonatomic) _Bool hasPublicKey;
@property(nonatomic) _Bool hasCreatedOutOfProcess;
@property(readonly, nonatomic) _Bool hasInviterId;
@property(nonatomic) _Bool hasPermission;
@property(nonatomic) int permission; // @synthesize permission=_permission;
@property(nonatomic) _Bool hasParticipantType;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool hasContactInformation;
@property(readonly, nonatomic) _Bool hasUserId;
@property(readonly, nonatomic) _Bool hasParticipantId;

@end

