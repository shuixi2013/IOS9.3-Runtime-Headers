//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUCommentsTableDataController, UITableView, UIViewController;

@protocol PUCommentsTableDataControllerDelegate <NSObject>
- (void)commentsTableDataController:(PUCommentsTableDataController *)arg1 presentViewController:(UIViewController *)arg2;
- (void)commentsTableDataController:(PUCommentsTableDataController *)arg1 tableViewDidScroll:(UITableView *)arg2;
- (void)commentsTableDataController:(PUCommentsTableDataController *)arg1 didChangeEditing:(_Bool)arg2;
- (_Bool)commentsTableDataControllerShouldBeginEditing:(PUCommentsTableDataController *)arg1;
@end
