//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SKUIBarRatingView : UIView
{
    long long _barRatingStyle;
    long long _numberOfBars;
    float _ratingValue;
}

@property(nonatomic) float ratingValue; // @synthesize ratingValue=_ratingValue;
@property(nonatomic) long long numberOfBars; // @synthesize numberOfBars=_numberOfBars;
@property(nonatomic) long long barRatingStyle; // @synthesize barRatingStyle=_barRatingStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
