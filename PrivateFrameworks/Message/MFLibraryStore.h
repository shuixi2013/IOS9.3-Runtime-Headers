//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFMailMessageStore.h>

@class MFMessageCriterion, MFMessageLibrary, NSDate;

@interface MFLibraryStore : MFMailMessageStore
{
    MFMessageLibrary *_library;
    NSDate *_earliestReceivedDate;
    MFMessageCriterion *_criterion;
    unsigned long long _serverMessageCount;
    unsigned long long _fetchWindow;
}

+ (_Bool)storeAtPathIsWritable:(id)arg1;
+ (_Bool)createEmptyStoreForPath:(id)arg1;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)storeWithMailbox:(id)arg1;
+ (id)storeWithCriterion:(id)arg1;
+ (unsigned int)defaultLoadOptions;
@property(retain, nonatomic) NSDate *earliestReceivedDate; // @synthesize earliestReceivedDate=_earliestReceivedDate;
- (_Bool)hasCompleteDataForMimePart:(id)arg1;
- (void)_queueMessagesWereCompacted:(id)arg1;
- (void)_queueMessagesWillBeCompacted:(id)arg1;
- (void)_queueMessageFlagsChanged:(id)arg1;
- (void)_queueMessagesAdded:(id)arg1;
- (_Bool)hasMessageForAccount:(id)arg1;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;
- (void)purgeMessages:(id)arg1;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)newObjectCache;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (unsigned long long)unreadCount;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (id)URLString;
- (id)criterion;
- (void)_setNeedsAutosave;
- (void)updateUserInfoToLatestValues;
- (void)updateMetadata;
- (void)writeUpdatedMessageDataToDisk;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (void)compactMessages:(id)arg1;
- (void)doCompact;
- (_Bool)canCompact;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (_Bool)allowsAppend;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(_Bool)arg2;
- (unsigned long long)indexOfMessage:(id)arg1;
- (void)deleteBodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 isComplete:(_Bool *)arg2 isPartial:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 usePartDatas:(_Bool)arg5 didDownload:(_Bool *)arg6;
- (id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned int)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;
- (_Bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 withConsumer:(id)arg4 downloadIfNecessary:(_Bool)arg5 didDownload:(_Bool *)arg6;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;
- (_Bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 consumer:(id)arg4;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 didDownload:(_Bool *)arg4;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;
- (_Bool)bodyFetchRequiresNetworkActivity;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (void)dealloc;
- (void)handleMessagesWillBeCompacted:(id)arg1;
- (void)handleMessagesCompacted:(id)arg1;
- (id)_memberMessagesWithCompactionNotification:(id)arg1;
- (void)handleMessageFlagsChanged:(id)arg1;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (id)filterMessagesByMembership:(id)arg1;
- (unsigned long long)fetchWindow;
- (unsigned long long)growFetchWindow;
- (_Bool)shouldGrowFetchWindow;
- (void)invalidateFetchWindow;
- (unsigned long long)_calculateFetchWindowWithAdditionalMultiple:(_Bool)arg1;
- (unsigned long long)_fetchWindowMinimum;
- (unsigned long long)_fetchWindowMultiple;
- (_Bool)_isSingleCoreDevice;
- (void)willFetchMessages;
- (id)dateOfNewestNonSearchResultMessage;
- (id)dateOfOldestNonIndexedNonSearchResultMessage;
- (id)serverSearchResults;
- (long long)oldestKnownConversation;
- (struct __CFDictionary *)copySendersByLibraryIDForConversation:(long long)arg1 limit:(long long)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)mutableCopyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfMessagesInRange:(struct _NSRange)arg1 options:(unsigned int)arg2;
- (id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1;
- (id)copyOfMessageInfosMatchingCriterion:(id)arg1;
- (id)copyOfMessageInfos;
- (id)copyOfMessagesInRange:(struct _NSRange)arg1 options:(unsigned int)arg2 generation:(unsigned long long *)arg3;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2;
- (unsigned long long)allNonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;
- (unsigned long long)nonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;
- (unsigned long long)totalCount;
- (void)openSynchronously;
- (void)libraryFinishedSendingMessages;
- (void)_addInvocationToQueue:(id)arg1;
- (_Bool)shouldCancel;
- (void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(_Bool)arg2;
- (void)_updateMailboxUnreadCount;
- (id)mailbox;
- (id)library;
- (void)setLibrary:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;
- (id)initWithCriterion:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(_Bool)arg3;

@end
