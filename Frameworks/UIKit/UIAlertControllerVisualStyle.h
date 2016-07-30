//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIAlertControllerDescriptor, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyle : NSObject
{
    UIAlertControllerDescriptor *_descriptor;
    UITraitCollection *_traitCollection;
}

@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) UIAlertControllerDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
- (_Bool)_shouldReverseActions;
- (double)_scaledMarginAboveDetailMessageFirstBaseline;
- (double)_scaledMarginBelowLastLabelLastBaseline;
- (double)_scaledMarginBelowMessageLabelLastBaseline;
- (double)_scaledMarginAboveMessageLabelFirstBaseline;
- (double)_scaledMarginBelowTitleLabelLastBaseline;
- (double)_scaledMarginAboveTitleLabelFirstBaseline;
- (struct UIEdgeInsets)collectionViewContentInsets;
- (struct UIEdgeInsets)collectionViewGradientMaskInsets;
- (_Bool)shouldPreserveRespondersAcrossWindows;
- (_Bool)shouldOccludeDuringPresentation;
- (struct CATransform3D)highlightedActionTransformForActionSize:(struct CGSize)arg1;
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (_Bool)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (id)dimmingViewForAlertController:(id)arg1;
- (double)textFieldHorizontalMargin;
- (id)motionEffects;
- (struct UIEdgeInsets)textFieldCollectionViewContentInset;
- (struct CGSize)collectionViewOutsetSize;
- (_Bool)actionContentInheritsTextColor;
- (_Bool)actionLabelsMayUseMarqueeWhenFocused;
- (_Bool)actionLabelsMayAdjustFontsToFit;
- (double)sectionDelimitingSeparatorDimension;
- (_Bool)hideActionSeparators;
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (long long)permittedActionLayoutDirection;
- (struct UIEdgeInsets)actionImageMarginForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (double)minimumActionHeight;
- (id)backgroundViewForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (id)actionContentColorForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (id)defaultActionFont;
- (id)descriptiveFontForAction:(id)arg1 inAlertController:(id)arg2;
- (id)preferredActionFont;
- (id)regularActionFont;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (id)backgroundView;
- (double)backgroundCornerRadius;
- (void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3;
- (struct UIEdgeInsets)contentInsets;
- (double)maximumHeightForDisplayOnScreen:(id)arg1;
- (double)maximumWidthForTitleAndMessageContentView;
- (double)actionHorizontalContentMargin;
- (double)actionWidthForMinimumActionWidth:(double)arg1;
- (double)maximumWidth;
- (double)minimumWidth;
- (id)tintColorForAlertController:(id)arg1;
- (double)marginBelowLastLabelLastBaseline;
- (long long)maximumNumberOfLinesInMessageLabel;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)_marginAboveDetailMessageFirstBaseline;
- (id)_detailMessageFont;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (_Bool)isEqual:(id)arg1;

@end
