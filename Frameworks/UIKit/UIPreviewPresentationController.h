//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <UIKit/UIForcePresentationController-Protocol.h>
#import <UIKit/UIInteractionProgressObserver-Protocol.h>
#import <UIKit/_UIPlatterMenuDynamicsControllerDelegate-Protocol.h>
#import <UIKit/_UIPreviewActionSheetViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIGestureRecognizer, UIImageView, UIInteractionProgress, UIPreviewAction, UIPreviewForceInteractionProgress, UIScrollView, UITapGestureRecognizer, UIView, UIVisualEffectView, _UIPlatterMenuDynamicsController, _UIPlatterPanningVelocityIntegrator, _UIPreviewActionSheetView, _UIPreviewPresentationAnimator, _UIPreviewPresentationContainerView, _UIPreviewPresentationEffectView, _UIPreviewQuickActionView;
@protocol _UIForcePresentationControllerDelegate;

@interface UIPreviewPresentationController : UIPresentationController <UIInteractionProgressObserver, _UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate, UIForcePresentationController>
{
    _Bool _sourceViewSnapshotAndScaleTransformSuppressed;
    _Bool _didSendBeginEvent;
    _Bool _leadingQuickActionViewSelected;
    _Bool _trailingQuickActionViewSelected;
    _Bool _isAnimatingActionSheet;
    _Bool _hasAskedForDismissalInternally;
    _Bool _hasAskedForCommitInternally;
    _Bool _preDismissAnimationsInflight;
    _Bool _panningGestureRecognizerInProgress;
    _Bool _breathing;
    UIGestureRecognizer *_panningGestureRecognizer;
    CDUnknownBlockType _presentationPhaseCompletionBlock;
    id <_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
    UIInteractionProgress *_interactionProgressForPresentation;
    unsigned long long _currentPresentationPhase;
    UIView *_actionSheetContainerView;
    UIScrollView *_containerScrollView;
    _UIPreviewActionSheetView *_previewActionSheet;
    UIPreviewForceInteractionProgress *_interactionProgressForCommit;
    UIPreviewForceInteractionProgress *_interactionProgressForBreathing;
    _UIPreviewPresentationContainerView *_presentationContainerView;
    UIVisualEffectView *_presentationBackgroundView;
    _UIPreviewPresentationEffectView *_revealContainerView;
    UIView *_highlightedPreviewCellSnapshotView;
    UIView *_initialPreviewCellSnapshotView;
    UIView *_updatedPreviewCellSnapshotView;
    NSArray *_previewActionItems;
    UIPreviewAction *_leadingPreviewAction;
    UIPreviewAction *_trailingPreviewAction;
    _UIPreviewQuickActionView *_leadingQuickActionView;
    _UIPreviewQuickActionView *_trailingQuickActionView;
    NSLayoutConstraint *_leadingQuickActionViewEdgeConstraint;
    NSLayoutConstraint *_trailingQuickActionViewEdgeConstraint;
    UIImageView *_actionSheetAvailableImageView;
    NSLayoutConstraint *_containerScrollViewXConstraint;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
    UIGestureRecognizer *_modalPreviewActionsPanningGestureRecognizer;
    _UIPlatterMenuDynamicsController *_platterMenuController;
    _UIPlatterPanningVelocityIntegrator *_revealPanningVelocityIntegrator;
    _UIPreviewPresentationAnimator *_unhighlightPreviewCellSnapshotViewAnimator;
}

+ (id)_visualEffectForPresentationPhase:(unsigned long long)arg1 traitCollection:(id)arg2;
+ (_Bool)_shouldApplyVisualEffectsToPresentingView;
@property(readonly, nonatomic, getter=isBreathing) _Bool breathing; // @synthesize breathing=_breathing;
@property(retain, nonatomic) _UIPreviewPresentationAnimator *unhighlightPreviewCellSnapshotViewAnimator; // @synthesize unhighlightPreviewCellSnapshotViewAnimator=_unhighlightPreviewCellSnapshotViewAnimator;
@property(nonatomic) _Bool panningGestureRecognizerInProgress; // @synthesize panningGestureRecognizerInProgress=_panningGestureRecognizerInProgress;
@property(nonatomic) _Bool preDismissAnimationsInflight; // @synthesize preDismissAnimationsInflight=_preDismissAnimationsInflight;
@property(nonatomic) _Bool hasAskedForCommitInternally; // @synthesize hasAskedForCommitInternally=_hasAskedForCommitInternally;
@property(nonatomic) _Bool hasAskedForDismissalInternally; // @synthesize hasAskedForDismissalInternally=_hasAskedForDismissalInternally;
@property(retain, nonatomic) _UIPlatterPanningVelocityIntegrator *revealPanningVelocityIntegrator; // @synthesize revealPanningVelocityIntegrator=_revealPanningVelocityIntegrator;
@property(retain, nonatomic) _UIPlatterMenuDynamicsController *platterMenuController; // @synthesize platterMenuController=_platterMenuController;
@property(nonatomic) _Bool isAnimatingActionSheet; // @synthesize isAnimatingActionSheet=_isAnimatingActionSheet;
@property(retain, nonatomic) UIGestureRecognizer *modalPreviewActionsPanningGestureRecognizer; // @synthesize modalPreviewActionsPanningGestureRecognizer=_modalPreviewActionsPanningGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapToDismissGestureRecognizer; // @synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *containerScrollViewXConstraint; // @synthesize containerScrollViewXConstraint=_containerScrollViewXConstraint;
@property(nonatomic) _Bool trailingQuickActionViewSelected; // @synthesize trailingQuickActionViewSelected=_trailingQuickActionViewSelected;
@property(nonatomic) _Bool leadingQuickActionViewSelected; // @synthesize leadingQuickActionViewSelected=_leadingQuickActionViewSelected;
@property(retain, nonatomic) UIImageView *actionSheetAvailableImageView; // @synthesize actionSheetAvailableImageView=_actionSheetAvailableImageView;
@property(retain, nonatomic) NSLayoutConstraint *trailingQuickActionViewEdgeConstraint; // @synthesize trailingQuickActionViewEdgeConstraint=_trailingQuickActionViewEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingQuickActionViewEdgeConstraint; // @synthesize leadingQuickActionViewEdgeConstraint=_leadingQuickActionViewEdgeConstraint;
@property(retain, nonatomic) _UIPreviewQuickActionView *trailingQuickActionView; // @synthesize trailingQuickActionView=_trailingQuickActionView;
@property(retain, nonatomic) _UIPreviewQuickActionView *leadingQuickActionView; // @synthesize leadingQuickActionView=_leadingQuickActionView;
@property(copy, nonatomic) UIPreviewAction *trailingPreviewAction; // @synthesize trailingPreviewAction=_trailingPreviewAction;
@property(copy, nonatomic) UIPreviewAction *leadingPreviewAction; // @synthesize leadingPreviewAction=_leadingPreviewAction;
@property(copy, nonatomic) NSArray *previewActionItems; // @synthesize previewActionItems=_previewActionItems;
@property(retain, nonatomic) UIView *updatedPreviewCellSnapshotView; // @synthesize updatedPreviewCellSnapshotView=_updatedPreviewCellSnapshotView;
@property(retain, nonatomic) UIView *initialPreviewCellSnapshotView; // @synthesize initialPreviewCellSnapshotView=_initialPreviewCellSnapshotView;
@property(retain, nonatomic) UIView *highlightedPreviewCellSnapshotView; // @synthesize highlightedPreviewCellSnapshotView=_highlightedPreviewCellSnapshotView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *revealContainerView; // @synthesize revealContainerView=_revealContainerView;
@property(retain, nonatomic) UIVisualEffectView *presentationBackgroundView; // @synthesize presentationBackgroundView=_presentationBackgroundView;
@property(retain, nonatomic) _UIPreviewPresentationContainerView *presentationContainerView; // @synthesize presentationContainerView=_presentationContainerView;
@property(retain, nonatomic) UIPreviewForceInteractionProgress *interactionProgressForBreathing; // @synthesize interactionProgressForBreathing=_interactionProgressForBreathing;
@property(retain, nonatomic) UIPreviewForceInteractionProgress *interactionProgressForCommit; // @synthesize interactionProgressForCommit=_interactionProgressForCommit;
@property(retain, nonatomic) _UIPreviewActionSheetView *previewActionSheet; // @synthesize previewActionSheet=_previewActionSheet;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(retain, nonatomic) UIView *actionSheetContainerView; // @synthesize actionSheetContainerView=_actionSheetContainerView;
@property(nonatomic) unsigned long long currentPresentationPhase; // @synthesize currentPresentationPhase=_currentPresentationPhase;
@property(retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // @synthesize interactionProgressForPresentation=_interactionProgressForPresentation;
@property(nonatomic) _Bool didSendBeginEvent; // @synthesize didSendBeginEvent=_didSendBeginEvent;
@property(nonatomic) __weak id <_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; // @synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate;
@property(nonatomic) _Bool _sourceViewSnapshotAndScaleTransformSuppressed; // @synthesize _sourceViewSnapshotAndScaleTransformSuppressed;
@property(copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock; // @synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock;
@property(retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer; // @synthesize panningGestureRecognizer=_panningGestureRecognizer;
- (void).cxx_destruct;
- (_Bool)_shouldSavePresentedViewControllerForStateRestoration;
@property(readonly, nonatomic) UIView *_revealContainerView;
- (_Bool)previewActionSheetCanSelectItem:(id)arg1;
- (void)setupAdditionalModalGestureRecognizers;
- (void)_setupInteractionProgressForBreathing;
- (void)updateSwipeActionsIfApplicable;
- (void)_panningGestureRecognizerDidFire:(id)arg1;
- (void)_dismissForHandledActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissForSelectionQuickActionAnimated;
- (void)_restorePlatterToInitialStatePositionAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_restorePlatterToInitialStatePositionAnimated;
- (_Bool)_platterIsInInitialPosition;
- (_Bool)_platterIsInInitialPositionMostly;
- (void)_configureActionSheetChromeViews;
- (_Bool)_platterIsSelectingPreviewActions;
- (void)_dismissPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGPoint)_presentedActionSheetCenterForActionSheet:(id)arg1;
- (struct CGPoint)_dismissedActionSheetCenterForActionSheet:(id)arg1;
- (id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)arg1;
- (_Bool)_hasPreviewActions;
- (_Bool)_hasSelectedQuickAction;
- (_Bool)_hasPreviewQuickActions;
- (void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
- (double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1;
- (double)_quickActionSelectionOffset;
- (void)_hideQuickActions;
- (void)_dismissPresentation;
- (void)_invokeCommitHandlerFromInteractionProgress;
- (void)_configureDynamicsController;
- (void)_tapToDismissPreviewWithActionsDidFire:(id)arg1;
- (struct CGPoint)centerForMenuDismissedForActionSheet:(id)arg1;
- (struct CGPoint)centerForMenuPresentedForActionSheet:(id)arg1;
- (struct CGPoint)centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1;
- (struct CGPoint)initialCenterForTrailingSwipeActionView;
- (id)trailingSwipeActionView;
- (struct CGPoint)initialCenterForLeadingSwipeActionView;
- (id)leadingSwipeActionView;
- (double)_leadingQuickActionOffsetForCenterPosition:(struct CGPoint)arg1 swipeView:(id)arg2;
- (double)_trailingQuickActionOffsetForCenterPosition:(struct CGPoint)arg1 swipeView:(id)arg2;
- (void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(struct CGPoint)arg3;
- (void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (struct CGPoint)centerForMenuDismissed;
- (struct CGPoint)centerForMenuPresented;
- (struct CGPoint)centerForPlatterWithMenuViewDismissed;
- (struct CGPoint)centerForPlatterWithMenuViewPresented;
- (struct CGRect)platterContainerBounds;
- (id)platterView;
- (struct CGRect)platterBounds;
- (double)platterContainerCenterY;
- (double)platterContainerCenterX;
- (id)_preferredVisualEffectForPreviewPresentationPhase:(unsigned long long)arg1;
- (struct CGRect)_preferredSourceViewRect;
- (void)_stopUnhighlightPreviewCellSnapshotViewAnimationIfNeeded;
- (void)_unhighlightPreviewCellSnapshotViewsIfNeeded;
- (void)_updateRevealContainerView:(id)arg1 forTableViewCell:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)_updateRevealContainerViewForSourceRect:(struct CGRect)arg1;
- (void)_triggerQuickActionHandlerIfNeeded;
- (_Bool)_canCommitPresentation;
- (_Bool)_canDismissPresentation;
- (void)_willCommitPresentation;
- (void)_layoutForPreviewInteractionProgress:(double)arg1;
- (void)_preparePresentationContainerViewForPreviewInteraction;
- (void)_dismissTransitionDidComplete:(_Bool)arg1;
- (void)_layoutForDismissTransition;
- (void)_previewTransitionDidComplete:(_Bool)arg1;
- (void)_layoutForPreviewTransition;
- (void)_preparePresentationContainerViewForPreviewTransition;
- (void)_revealTransitionDidComplete:(_Bool)arg1;
- (void)_layoutForRevealUnhighlightTransition:(double)arg1;
- (void)_layoutForRevealTransition;
- (void)_configureInitialActionSheetViewIfNeeded;
- (void)_updateBreathingTransformWithProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_endBreathing;
- (void)_beginBreathing;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)_animatorForContainmentTransition;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (_Bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (_Bool)_shouldChangeStatusBarViewController;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)shouldPresentInFullscreen;
- (_Bool)shouldRemovePresentersView;
@property(nonatomic) double presentationViewCornerRadius; // @dynamic presentationViewCornerRadius;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

