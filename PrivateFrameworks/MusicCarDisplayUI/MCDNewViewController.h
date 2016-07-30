//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

#import <MusicCarDisplayUI/MCDTimeoutViewDelegate-Protocol.h>
#import <MusicCarDisplayUI/UITableViewDelegate-Protocol.h>

@class MCDContentItemTableViewController, MusicStoreBrowseResponse, NSIndexPath, NSString, NSTimer, UIActivityIndicatorView, UIView;

@interface MCDNewViewController : MCD_OLD_TableViewController <UITableViewDelegate, MCDTimeoutViewDelegate>
{
    _Bool _contentLoaded;
    UIView *_MCD_tableView;
    UIView *_placeholderView;
    long long _modelRevisionID;
    UIActivityIndicatorView *_activityIndicator;
    MusicStoreBrowseResponse *_contentResponse;
    NSIndexPath *_selectedIndexPath;
    MCDContentItemTableViewController *_viewController;
    NSTimer *_loadingTimer;
}

@property(retain, nonatomic) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(retain, nonatomic) MCDContentItemTableViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool contentLoaded; // @synthesize contentLoaded=_contentLoaded;
@property(retain, nonatomic) MusicStoreBrowseResponse *contentResponse; // @synthesize contentResponse=_contentResponse;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) long long modelRevisionID; // @synthesize modelRevisionID=_modelRevisionID;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIView *MCD_tableView; // @synthesize MCD_tableView=_MCD_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)timeoutViewDidPressRetryButton:(id)arg1;
- (void)_limitedUIDidChange;
- (void)_loadContent;
- (void)_setCurrentTableView;
- (void)_showLoadingScreen;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateViewForNetworkType:(long long)arg1;
- (_Bool)_isNetworkTypeAllowed:(long long)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
