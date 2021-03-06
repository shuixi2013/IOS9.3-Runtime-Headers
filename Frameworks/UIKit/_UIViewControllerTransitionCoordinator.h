//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerTransitionCoordinator-Protocol.h>

@class NSMutableArray, NSString, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>
{
    _UIViewControllerTransitionContext *__mainContext;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
}

@property(retain, nonatomic, setter=_setInteractiveChangeHandlers:) NSMutableArray *_interactiveChangeHandlers; // @synthesize _interactiveChangeHandlers=__interactiveChangeHandlers;
@property(retain, nonatomic, setter=_setAlongsideCompletions:) NSMutableArray *_alongsideCompletions; // @synthesize _alongsideCompletions=__alongsideCompletions;
@property(retain, nonatomic, setter=_setAlongsideAnimationViews:) NSMutableArray *_alongsideAnimationViews; // @synthesize _alongsideAnimationViews=__alongsideAnimationViews;
@property(retain, nonatomic, setter=_setAlongsideAnimations:) NSMutableArray *_alongsideAnimations; // @synthesize _alongsideAnimations=__alongsideAnimations;
@property(nonatomic, setter=_setMainContext:) _UIViewControllerTransitionContext *_mainContext; // @synthesize _mainContext=__mainContext;
- (void).cxx_destruct;
- (void)handlerToInvokeOnInteractivityChanges:(CDUnknownBlockType)arg1;
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_animateAlongsideTransitionInView:(id)arg1 systemCompletion:(_Bool)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(CDUnknownBlockType)arg2;
- (id)_alongsideCompletions:(_Bool)arg1;
- (id)_alongsideAnimations:(_Bool)arg1;
- (id)_interactiveChangeHandlers:(_Bool)arg1;
- (struct CGAffineTransform)targetTransform;
- (struct CGAffineTransform)affineTransform;
- (_Bool)isRotating;
- (id)containerView;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (double)transitionDuration;
- (long long)completionCurve;
- (double)completionVelocity;
- (double)percentComplete;
- (_Bool)isCompleting;
- (_Bool)isCancelled;
- (_Bool)isInteractive;
- (_Bool)initiallyInteractive;
- (long long)presentationStyle;
- (_Bool)isAnimated;
- (id)initWithMainContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

