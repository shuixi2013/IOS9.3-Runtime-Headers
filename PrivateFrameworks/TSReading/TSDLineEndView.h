//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TSDLineEnd;

@interface TSDLineEndView : UIView
{
    TSDLineEnd *mLineEnd;
    _Bool mOnRight;
}

+ (id)viewWithLineEnd:(id)arg1 onRight:(_Bool)arg2;
@property(nonatomic) _Bool onRight; // @synthesize onRight=mOnRight;
@property(retain, nonatomic) TSDLineEnd *lineEnd; // @synthesize lineEnd=mLineEnd;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

