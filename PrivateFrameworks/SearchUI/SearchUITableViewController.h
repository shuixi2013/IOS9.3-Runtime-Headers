//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SearchUI/SearchUICardViewController-Protocol.h>

@class NSString;
@protocol SearchUIViewControllerDelegate;

@interface SearchUITableViewController : UITableViewController <SearchUICardViewController>
{
    id <SearchUIViewControllerDelegate> _searchUIViewControllerDelegate;
    id <SearchUIViewControllerDelegate> _searchUICardViewControllerDelegate;
    unsigned long long _style;
}

@property unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <SearchUIViewControllerDelegate> searchUICardViewControllerDelegate; // @synthesize searchUICardViewControllerDelegate=_searchUICardViewControllerDelegate;
@property(nonatomic) __weak id <SearchUIViewControllerDelegate> searchUIViewControllerDelegate; // @synthesize searchUIViewControllerDelegate=_searchUIViewControllerDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)initWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
