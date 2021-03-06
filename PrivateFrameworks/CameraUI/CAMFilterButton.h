//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface CAMFilterButton : UIButton
{
    UIImageView *__circlesImageView;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (id)filterButton;
@property(readonly, nonatomic) UIImageView *_circlesImageView; // @synthesize _circlesImageView=__circlesImageView;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
- (void).cxx_destruct;
- (id)_filterOnImage;
- (id)_filterImage;
@property(nonatomic, getter=isOn) _Bool on;
- (double)_selectedIndicatorAlpha;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMFilterButtonInitialization;

@end

