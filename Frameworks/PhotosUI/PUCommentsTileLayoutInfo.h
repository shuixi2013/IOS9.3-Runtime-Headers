//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileLayoutInfo.h>

__attribute__((visibility("hidden")))
@interface PUCommentsTileLayoutInfo : PUTileLayoutInfo
{
    _Bool _isShowing;
    double _contentBaseline;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) double contentBaseline; // @synthesize contentBaseline=_contentBaseline;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)clone;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 insets:(struct UIEdgeInsets)arg8 contentBaseline:(double)arg9 isShowing:(_Bool)arg10;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;

@end

