//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AddressBookUI/UIActionSheetDelegate-Protocol.h>

@class ABPersonViewControllerHelper, NSString;

@interface ABPersonViewController_DeletionDelegate : NSObject <UIActionSheetDelegate>
{
    ABPersonViewControllerHelper *_controller;
}

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithPersonViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
