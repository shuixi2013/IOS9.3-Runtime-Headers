//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUHorizontalTiledCollectionViewLayout.h>

@class NSIndexPath, NSMutableDictionary;
@protocol PUPhotosSharingCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingCollectionViewLayout : PUHorizontalTiledCollectionViewLayout
{
    NSMutableDictionary *_cachedItemSublayouts;
    unsigned long long _sharingBadgesCorner;
    NSIndexPath *_zoomingCellIndexPath;
    struct UIOffset _sharingBadgesOffset;
}

@property(retain, nonatomic) NSIndexPath *zoomingCellIndexPath; // @synthesize zoomingCellIndexPath=_zoomingCellIndexPath;
@property(nonatomic) unsigned long long sharingBadgesCorner; // @synthesize sharingBadgesCorner=_sharingBadgesCorner;
@property(nonatomic) struct UIOffset sharingBadgesOffset; // @synthesize sharingBadgesOffset=_sharingBadgesOffset;
- (void).cxx_destruct;
- (void)_didFinishLayoutTransitionAnimations:(_Bool)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (void)invalidateCachedLayout;
- (id)_sublayoutForItemLayoutAttributes:(id)arg1;
- (struct CGRect)_floatingBadgeContainerFrameForBadgeContainerFrame:(struct CGRect)arg1 itemFrame:(struct CGRect)arg2 visibleItemFrame:(struct CGRect)arg3;

// Remaining properties
@property(nonatomic) __weak id <PUPhotosSharingCollectionViewLayoutDelegate> delegate; // @dynamic delegate;

@end

