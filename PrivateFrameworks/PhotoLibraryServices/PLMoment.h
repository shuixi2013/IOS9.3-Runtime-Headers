//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLAssetContainer-Protocol.h>
#import <PhotoLibraryServices/PLMomentData_Private-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSObject, NSOrderedSet, NSString, PLManagedAsset, PLMomentLibrary, PLMomentList, PLMomentNameInfo;
@protocol NSCopying;

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private>
{
    PLMomentNameInfo *_cachedNameInfo;
    _Bool _loadedNameInfo;
    _Bool isRegisteredForChanges;
    _Bool didRegisteredWithUserInterfaceContext;
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)allMomentsInLibrary:(id)arg1;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(_Bool)arg2 error:(id *)arg3;
+ (id)predicateForAssetsIncludedInMoments;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id *)arg2;
@property(nonatomic) _Bool didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property(nonatomic) _Bool isRegisteredForChanges; // @synthesize isRegisteredForChanges;
@property(retain, nonatomic) NSArray *userTitles;
- (void)removeAssetData:(id)arg1;
- (void)replaceAssetDataAtIndex:(unsigned long long)arg1 withAssetData:(id)arg2;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
- (void)removeAssets:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)removeAssetsObject:(id)arg1;
- (void)addAssetsObject:(id)arg1;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromAssetsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (void)didTurnIntoFault;
- (id)mutableAssets;
- (void)willSave;
- (_Bool)validateForUpdate:(id *)arg1;
- (_Bool)validateForInsert:(id *)arg1;
- (_Bool)_validateForInsertOrUpdate:(id *)arg1;
- (void)delete;
- (id)diagnosticInformation;
- (_Bool)supportsDiagnosticInformation;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
- (void)invalidateNameInfo;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (void)_updateCachedNameInfoIfNeeded;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
- (void)unregisterForChanges;
- (void)registerForChanges;
@property(retain, nonatomic) CLLocation *approximateLocation;
- (void)dealloc;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (struct CGImage *)posterImage;
- (id)groupURL;
- (_Bool)isCloudSharedAlbum;

// Remaining properties
@property(retain, nonatomic) NSData *approximateLocationData; // @dynamic approximateLocationData;
@property(retain, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(nonatomic) int cachedCount; // @dynamic cachedCount;
@property(nonatomic) int cachedPhotosCount; // @dynamic cachedPhotosCount;
@property(nonatomic) int cachedVideosCount; // @dynamic cachedVideosCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) short generationType; // @dynamic generationType;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) PLMomentList *megaMomentList; // @dynamic megaMomentList;
@property(retain, nonatomic) PLMomentLibrary *momentLibrary; // @dynamic momentLibrary;
@property(retain, nonatomic) NSDate *representativeDate; // @dynamic representativeDate;
@property(retain, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;
@property(nonatomic) _Bool reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *title2; // @dynamic title2;
@property(retain, nonatomic) NSString *title3; // @dynamic title3;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) PLMomentList *yearMomentList; // @dynamic yearMomentList;

@end

