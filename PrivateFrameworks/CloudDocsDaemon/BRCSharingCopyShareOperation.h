//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKRecordID, CKShareID, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    CKShareID *_shareID;
    CKRecordID *_recordIDNeedingFetch;
}

@property(retain, nonatomic) CKRecordID *recordIDNeedingFetch; // @synthesize recordIDNeedingFetch=_recordIDNeedingFetch;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (void)main;
- (void)performAfterFetchingShares:(CDUnknownBlockType)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (unsigned long long)startActivity;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

