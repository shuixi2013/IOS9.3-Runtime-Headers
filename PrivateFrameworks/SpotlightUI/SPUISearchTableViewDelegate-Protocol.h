//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class SPUISearchTableView;

@protocol SPUISearchTableViewDelegate <NSObject>
- (_Bool)spotlightIsInactiveAndRotating;
- (long long)maxUnexpandedRowsInSection:(long long)arg1;
- (void)searchTableViewExpansionDidToggleEnd:(SPUISearchTableView *)arg1;
- (void)searchTableViewExpansionDidToggleBegin:(SPUISearchTableView *)arg1;
@end

