//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol SPUISearchPluginWrapperInterface
@property(nonatomic) _Bool needsFakeStatusBarForModalPresentation;
@property(nonatomic, getter=isDisplayLayoutElementActive) _Bool displayLayoutElementActive;
@property(nonatomic) _Bool needsStatusBarLayoutLayer;
- (void)searchViewControllerWillTriggerLaunch;
- (void)requestGestureResetAnimated:(_Bool)arg1;
- (double)_accessibilityActivationAnimationStartDelay;
@end
