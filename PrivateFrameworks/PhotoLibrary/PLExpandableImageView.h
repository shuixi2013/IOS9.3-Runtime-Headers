//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/PLExpandableView.h>

@class NSString, PLImageView, PLManagedAsset, PLVideoView;

@interface PLExpandableImageView : PLExpandableView
{
    PLImageView *_imageView;
    int _imageID;
    struct CGSize _originalSize;
    double _originalWidth;
    double _originalAngle;
    struct CGPoint _anchorPoint;
    double _imageRotationAngle;
    double _pinchWidth;
    double _pinchAngle;
    double _pinchScale;
    struct CGRect _initialExpandingFrame;
    struct CGRect _originalBounds;
    float _currentAngle;
    struct CGSize _centerOffset;
    PLManagedAsset *_photo;
    struct {
        unsigned int isRotating:1;
        unsigned int didTrack:1;
        unsigned int updateFrame:1;
        unsigned int didLayout:1;
        unsigned int alwaysDoLayout:1;
        unsigned int didComputeCenterOffset:1;
        unsigned int imageIsFullScreen:1;
    } _exImageFlags;
}

+ (double)imageBorderWidth;
@property(retain, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
- (void)renderSnapshotInContext:(struct CGContext *)arg1;
- (void)setTextBadgeString:(id)arg1;
- (_Bool)isBeingManipulated;
- (double)transitionProgress;
- (void)setTransitionProgress:(double)arg1;
- (_Bool)isShadowEnabled;
- (void)setShadowEnabled:(_Bool)arg1;
- (double)imageRotationAngle;
@property(retain, nonatomic) PLVideoView *videoView;
- (struct CGRect)frameOfImage;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)imageView;
- (void)setShowsPlaceholder:(_Bool)arg1;
@property(readonly, nonatomic) _Bool showsPlaceholder;
@property(copy, nonatomic) NSString *name;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize)arg2 orientation:(long long)arg3;
- (void)setPosterImage:(id)arg1 regionOfInterest:(struct CGRect)arg2;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 isFullscreen:(_Bool)arg2;
@property(nonatomic, getter=isBorderAndAccessoriesVisible) _Bool borderAndAccessoriesVisible;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)_contentView;
- (void)finishTransition;
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (void)setTransformAndCenterForFrame:(struct CGRect)arg1;
- (struct CGSize)_newSizeFromSize:(struct CGSize)arg1;
- (float)continueTrackingPinch:(id)arg1;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint)arg1 rightPoint:(struct CGPoint)arg2;
- (void)_updateBorderAndAccessoriesAlpha;
- (float)_borderAlphaForExpansionFraction:(float)arg1;
- (void)setSize:(struct CGSize)arg1 angle:(float)arg2;
- (void)beginTrackingPinch:(id)arg1;
- (void)_setOriginalSize:(struct CGSize)arg1;
- (void)stateDidChangeFrom:(int)arg1;
- (struct CGRect)_snappedExpandedFrame;
- (float)_expansionFraction;
- (float)_expandedScale;
- (float)_currentScale;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 frameStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 frameStyle:(int)arg2 withBorder:(_Bool)arg3;

@end

