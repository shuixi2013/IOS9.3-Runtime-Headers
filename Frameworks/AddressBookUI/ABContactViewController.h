//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactContentViewController.h>

@class ABContactHeaderView, ABContactView;
@protocol ABContactViewControllerDelegate;

@interface ABContactViewController : CNContactContentViewController
{
}

- (id)cardGroupForProperty:(id)arg1;
- (void)applyStyleProvider:(id)arg1;

// Remaining properties
@property(nonatomic) id <ABContactViewControllerDelegate> contactDelegate; // @dynamic contactDelegate;
@property(readonly, nonatomic) ABContactHeaderView *contactHeaderView; // @dynamic contactHeaderView;
@property(readonly, nonatomic) ABContactView *contactView; // @dynamic contactView;

@end

