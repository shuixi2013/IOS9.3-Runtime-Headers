//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotoLibrary/UITableViewDataSource-Protocol.h>
#import <PhotoLibrary/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView, UIView;

@interface PLSlideshowAirPlayRoutesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_containerView;
    UITableView *_table;
    NSArray *_airplayRoutes;
    unsigned long long _selectedRouteIndex;
}

@property(nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)dealloc;
- (void)loadView;
- (id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

