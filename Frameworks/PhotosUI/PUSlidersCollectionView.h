//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class PUSlidersCollectionViewLayout;

__attribute__((visibility("hidden")))
@interface PUSlidersCollectionView : UICollectionView
{
    PUSlidersCollectionViewLayout *_tableLikeLayout;
    double _rowHeight;
    long long _scrollDirection;
}

@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

