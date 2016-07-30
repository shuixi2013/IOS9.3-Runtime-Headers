//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUSearchResultsDelegate-Protocol.h>

@class NSString, PSIDatabase, PUNavigationController, PUPhotosGridViewControllerSpec, PUPingTimer, PUSearchResultDataSource, PUSearchResultsDataSource, PUSearchResultsViewController, UIViewController;
@protocol OS_dispatch_semaphore;

@interface PUPhotosSiriSearchPresenter : NSObject <PUSearchResultsDelegate>
{
    _Bool _presenting;
    _Bool _first;
    PUPhotosGridViewControllerSpec *_gridSpec;
    NSString *_utterance;
    UIViewController *_sCurrentVisibleController;
    PUSearchResultDataSource *_photoCollections;
    PUSearchResultsViewController *_searchResultsViewController;
    PUNavigationController *_searchResultsNav;
    NSObject<OS_dispatch_semaphore> *_siriSearchSemaphore;
    NSObject<OS_dispatch_semaphore> *_siriIntentBackgroundProcessingCompleteSemaphore;
    PUSearchResultsDataSource *__searchResultsDataSource;
    PSIDatabase *__searchIndex;
    PUPingTimer *__searchResultsPingTimer;
}

+ (void)syncSiriIntentDataSoon;
+ (void)_photolibraryDidChange:(id)arg1;
+ (void)searchWithSiriSearch:(id)arg1;
+ (void)showSiriForForeground;
+ (void)registerForSiriIntentsForViewController:(id)arg1;
@property(nonatomic) _Bool first; // @synthesize first=_first;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) PUPingTimer *_searchResultsPingTimer; // @synthesize _searchResultsPingTimer=__searchResultsPingTimer;
@property(retain, nonatomic) PSIDatabase *_searchIndex; // @synthesize _searchIndex=__searchIndex;
@property(retain, nonatomic) PUSearchResultsDataSource *_searchResultsDataSource; // @synthesize _searchResultsDataSource=__searchResultsDataSource;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *siriIntentBackgroundProcessingCompleteSemaphore; // @synthesize siriIntentBackgroundProcessingCompleteSemaphore=_siriIntentBackgroundProcessingCompleteSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *siriSearchSemaphore; // @synthesize siriSearchSemaphore=_siriSearchSemaphore;
@property(retain, nonatomic) PUNavigationController *searchResultsNav; // @synthesize searchResultsNav=_searchResultsNav;
@property(retain, nonatomic) PUSearchResultsViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
@property(retain, nonatomic) PUSearchResultDataSource *photoCollections; // @synthesize photoCollections=_photoCollections;
@property(retain, nonatomic) UIViewController *sCurrentVisibleController; // @synthesize sCurrentVisibleController=_sCurrentVisibleController;
@property(retain, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
- (void).cxx_destruct;
- (void)registerForIntents;
- (void)synchImportantThingsToSiri;
- (void)synchAlbumNamesToSiriForIntentNaturalLanguageAndSpeechAssist;
- (void)searchWithSiriInternal:(id)arg1;
- (void)_mergeSearchResults;
- (void)_pingTimerFire:(id)arg1;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1;
- (void)completeSearchQueryAndSearch:(id)arg1 intent:(id)arg2 dataSource:(id)arg3;
- (id)predicateForNearByWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)completeWithZeroSearchResults:(id)arg1 showUI:(_Bool)arg2;
- (void)searchWithSiriPlaceIMP:(id)arg1 dataSource:(id)arg2 searchTerm:(id)arg3 useFuzzyContains:(_Bool)arg4;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (id)topViewControllerFromRoot;
- (void)presentLast;
- (void)_pushMomentsGridForPhotosWithUUIDs:(id)arg1 intent:(id)arg2 title:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
