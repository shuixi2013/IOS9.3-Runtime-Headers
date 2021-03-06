//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, PUModelTileTransform, PUOneUpTilingLayout;

@protocol PUOneUpTilingLayoutDelegate <NSObject>

@optional
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 disableInitialZoomToFillForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowCommentsForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 canShowCommentsForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGPoint)layout:(PUOneUpTilingLayout *)arg1 scrollOffsetForItemAtIndexPath:(NSIndexPath *)arg2;
- (PUModelTileTransform *)layout:(PUOneUpTilingLayout *)arg1 modelTileTransformForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowLoadingIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowProgressIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowPlayButtonForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)layout:(PUOneUpTilingLayout *)arg1 badgeSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg2;
@end

