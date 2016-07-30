//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUGridZoomLevelInfo.h>

#import <PhotosUI/PUSectionedGridLayoutDelegate-Protocol.h>

@class NSMutableDictionary, NSString, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUYearsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate>
{
    PHFetchResult *_yearsFetchResult;
    NSMutableDictionary *_resultsForCollectionList;
}

- (void).cxx_destruct;
- (void)willShowMagnifiedViewController:(id)arg1;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)modelDidChange:(id)arg1;
- (_Bool)supportsIncrementalChangeNotifications;
- (double)cellAspectRatioHint;
- (long long)imageDeliveryMode;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (long long)cellFillMode;
- (void)updateLayoutMetricsForWidth:(double)arg1;
- (struct CGSize)thumbnailImageSize;
- (long long)maxRowsPerSection;
- (id)sectionHeaderElementKind;
- (id)renderedStripsElementKind;
- (id)newCollectionViewLayout;
- (struct __CFString *)aggregateLevelKey;
- (id)displayTitle;
- (id)momentsInCollectionList:(id)arg1;
- (id)_yearsFetchResult;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
