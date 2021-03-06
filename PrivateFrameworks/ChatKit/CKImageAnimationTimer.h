//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface CKImageAnimationTimer : NSObject
{
    unsigned long long _frame;
    NSMutableSet *_observers;
    CADisplayLink *_displayLink;
}

+ (id)sharedTimer;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
- (void)updateDisplayLink;
- (void)animationTimerFired;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)addAnimationTimerObserver:(id)arg1;
- (unsigned long long)frame;
- (id)init;
- (void)dealloc;

@end

