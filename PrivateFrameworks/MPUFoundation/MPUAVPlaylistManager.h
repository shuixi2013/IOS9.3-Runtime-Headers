//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVPlaylistManager.h>

#import <MPUFoundation/MPUQueueBehaviorManaging-Protocol.h>

@class MPAVItem, MPMutableBidirectionalDictionary, MPQueueFeeder, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, _MPUAVItemSourceContext;

@interface MPUAVPlaylistManager : MPAVPlaylistManager <MPUQueueBehaviorManaging>
{
    _Bool _ignoreNextIndexChanges;
    _Bool _disableSoftQueueFaulting;
    unsigned long long _maximumModifiedPlaylistIterationIndex;
    unsigned long long _minimumPlaylistIndex;
    unsigned long long _maximumPlaylistIndex;
    NSMutableIndexSet *_failedSoftQueueIndexes;
    MPMutableBidirectionalDictionary *_identifiersToIndexes;
    _Bool _disableQueueModifications;
    MPQueueFeeder *_softQueueFeeder;
    NSMutableArray *_hardQueueSourceContexts;
    MPAVItem *_lastPlayedSoftQueueItem;
    long long _nextCurrentIndex;
    long long _hardQueueInsertionIndex;
    long long _repeatStartIndex;
    _MPUAVItemSourceContext *_repeatPlaylistIdentifer;
    NSMutableDictionary *_iterationIndexToQueueModifications;
}

@property(retain, nonatomic) NSMutableDictionary *iterationIndexToQueueModifications; // @synthesize iterationIndexToQueueModifications=_iterationIndexToQueueModifications;
@property(copy, nonatomic) _MPUAVItemSourceContext *repeatPlaylistIdentifer; // @synthesize repeatPlaylistIdentifer=_repeatPlaylistIdentifer;
@property(nonatomic) long long repeatStartIndex; // @synthesize repeatStartIndex=_repeatStartIndex;
@property(nonatomic) long long hardQueueInsertionIndex; // @synthesize hardQueueInsertionIndex=_hardQueueInsertionIndex;
@property(nonatomic) long long nextCurrentIndex; // @synthesize nextCurrentIndex=_nextCurrentIndex;
@property(retain, nonatomic) MPAVItem *lastPlayedSoftQueueItem; // @synthesize lastPlayedSoftQueueItem=_lastPlayedSoftQueueItem;
@property(retain, nonatomic) NSMutableArray *hardQueueSourceContexts; // @synthesize hardQueueSourceContexts=_hardQueueSourceContexts;
@property(nonatomic) _Bool disableQueueModifications; // @synthesize disableQueueModifications=_disableQueueModifications;
@property(retain, nonatomic) MPQueueFeeder *softQueueFeeder; // @synthesize softQueueFeeder=_softQueueFeeder;
- (void).cxx_destruct;
- (id)identifierAtIndex:(unsigned long long)arg1 queueFeeder:(id)arg2;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1 queueFeeder:(id)arg2;
- (id)_softQueueSourceContextForIndex:(long long)arg1;
- (struct _NSRange)_softQueuePlaylistIndexRangeIncludingCurrentItem:(_Bool)arg1;
- (long long)_softQueueIndexForIndex:(long long)arg1;
- (id)_sourceContextForPlaylistIndex:(unsigned long long)arg1;
- (id)_removeSoftQueueSourceContextAtIndex:(long long)arg1;
- (id)_queueFeeder:(id)arg1 itemForIdentifier:(id)arg2;
- (id)_playlistIterationForQueueFeeder:(id)arg1 firstItemPlaylistIndex:(unsigned long long)arg2 iterationIndex:(unsigned long long)arg3;
- (id)_metadataItemForSourceContext:(id)arg1;
- (id)_itemForSourceContext:(id)arg1;
- (_Bool)_itemIsSoftQueueItem:(id)arg1;
- (_Bool)_itemIsHardQueueItem:(id)arg1;
- (void)_insertSoftQueueSourceContext:(id)arg1 atIndex:(long long)arg2;
- (struct _NSRange)_hardQueuePlaylistIndexRangeIncludingCurrentItem:(_Bool)arg1;
- (long long)_hardQueueIndexForIndex:(long long)arg1;
- (void)_handleConfiguredQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (void)_findPlaylistIterationForPlaybackIndex:(unsigned long long)arg1 createIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool userCanChangeShuffleAndRepeatType;
- (_Bool)preventsHardQueueModificationsForItem:(id)arg1;
@property(readonly, nonatomic) _Bool canSkipToPreviousItem;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3;
- (unsigned long long)playlistItemCount;
- (long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(_Bool)arg3;
- (void)setRepeatMode:(long long)arg1;
- (_Bool)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(_Bool)arg3;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (long long)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexOfItemIdentifier:(id)arg1;
- (long long)playlistIndexOfItem:(id)arg1;
- (id)playlistFeederForPlaylistIndex:(long long)arg1;
- (id)playlistFeeder;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)metadataItemForPlaylistIndex:(long long)arg1;
- (id)itemForPlaylistIndex:(long long)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (unsigned long long)displayCountForItem:(id)arg1;
- (unsigned long long)displayIndexForItem:(id)arg1;
- (long long)currentIndex;
@property(readonly, nonatomic) struct _NSRange softQueuePlaylistIndexRange;
- (void)removeItemAtPlaybackIndex:(long long)arg1;
- (void)moveItemAtPlaybackIndex:(long long)arg1 toPlaybackIndex:(long long)arg2 intoHardQueue:(_Bool)arg3;
@property(readonly, nonatomic) struct _NSRange hardQueuePlaylistIndexRange;
- (void)clearSoftQueue;
- (void)clearHardQueue;
- (void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowsUserVisibleUpcomingItems;
@property(readonly, nonatomic) _Bool canSeek;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long playbackMode;
@property(readonly) Class superclass;

@end

