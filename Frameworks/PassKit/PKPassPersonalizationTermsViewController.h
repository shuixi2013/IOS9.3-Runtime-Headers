//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UITextView;
@protocol PKPassPersonalizationTermsViewControllerDelegate;

@interface PKPassPersonalizationTermsViewController : UIViewController
{
    UITextView *_textView;
    NSString *_termsAndConditions;
    id <PKPassPersonalizationTermsViewControllerDelegate> _delegate;
}

@property(nonatomic) id <PKPassPersonalizationTermsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
- (void)_acceptButtonPressed:(id)arg1;
- (void)_declineButtonPressed:(id)arg1;
- (void)_applyTermsAndConditions;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithTermsAndConditions:(id)arg1;

@end
