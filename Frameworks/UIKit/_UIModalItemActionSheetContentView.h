//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIModalItemContentView.h>

@class UITableView, _UIBackdropView;

@interface _UIModalItemActionSheetContentView : _UIModalItemContentView
{
    UITableView *_otherButtonTableView;
    UITableView *_cancelTableView;
    _UIBackdropView *_effectView;
}

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layout;
- (void)_moveAllSubviewsToEffectContentView;
- (double)numberOfOtherButtonTitles;
- (void)_prepareViewIfNeeded;
- (void)_createOtherButtonTableView;
- (void)dealloc;

@end
