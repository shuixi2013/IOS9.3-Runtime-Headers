//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertControllerVisualStyle.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle
{
}

- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (long long)permittedActionLayoutDirection;
- (struct UIEdgeInsets)actionImageMarginForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (double)minimumActionHeight;
- (id)preferredActionFont;
- (id)regularActionFont;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (double)backgroundCornerRadius;
- (struct UIEdgeInsets)contentInsets;
- (double)maximumWidth;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginAboveMessageLabelFirstBaseline;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)titleLabelColor;
- (id)titleLabelFont;

@end
