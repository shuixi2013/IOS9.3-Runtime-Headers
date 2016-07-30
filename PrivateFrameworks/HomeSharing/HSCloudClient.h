//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeSharing/HSCloudAvailability-Protocol.h>

@class HSConnectionConfiguration, NSString, NSXPCConnection;

@interface HSCloudClient : NSObject <HSCloudAvailability>
{
    _Bool _active;
    HSConnectionConfiguration *_configuration;
    NSXPCConnection *_nsxpcConnection;
    unsigned long long _daemonConfiguration;
    long long _preferredVideoQuality;
    CDUnknownBlockType _updateInProgressChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType updateInProgressChangedHandler; // @synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler;
- (void).cxx_destruct;
- (void)_serverUpdateInProgressDidChange;
- (void)_serverDidLaunch;
- (void)_sendConfigurationToDaemon;
- (id)connection;
- (_Bool)canShowCloudVideo;
- (_Bool)canShowCloudMusic;
- (_Bool)canShowCloudDownloadButtons;
- (_Bool)shouldProhibitActionsForCurrentNetworkConditions;
- (_Bool)isCellularDataRestricted;
- (_Bool)hasProperNetworkConditionsToPlayMedia;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateKeepLocalRulesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateArtistHeroImages;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)uploadCloudPlaylistProperties;
- (void)uploadCloudItemProperties;
- (void)uploadItemProperties;
- (void)setItemProperties:(id)arg1 forSagaID:(long long)arg2;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (_Bool)canSetItemProperty:(id)arg1;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)resignActive;
- (void)resetConfiguration:(id)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadGeniusItemsForSagaID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(unsigned long long)arg1;
- (void)deprioritizeArtistHeroImageForPersistentID:(unsigned long long)arg1;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(unsigned long long)arg1;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(unsigned long long)arg1;
- (void)deprioritizeContainerArtworkForSagaID:(long long)arg1;
- (void)deprioritizeItemArtworkForSagaID:(long long)arg1;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;
- (void)importAlbumArtistHeroImageForPersistentID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importArtistHeroImageForPersistentID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importSubscriptionContainerArtworkForPersistentID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importSubscriptionItemArtworkForPersistentID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importContainerArtworkForSagaID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForSagaID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)isExpiredWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)isAuthenticatedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deauthenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSagaLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoAppsLibraryForFamilyMemberStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unhideAllPurchasedApps:(CDUnknownBlockType)arg1;
- (void)setHidden:(_Bool)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateJaliscoLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeJaliscoLibraryWithCompletionHander:(CDUnknownBlockType)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)becomeActive;
- (void)authenticateAndStartInitialImport:(_Bool)arg1 mergeWithCloudLibrary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateAndStartInitialImport:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadArtworkForPlaylistWithPersistentID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)canSetPlaylistProperty:(id)arg1;
- (void)sdk_createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)cloudAddToPlaylistBehavior;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
