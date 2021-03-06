//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton;
@protocol SPUISearchContactButtonsViewDelegate;

@interface SPUISearchContactButtonsView : UIView
{
    id <SPUISearchContactButtonsViewDelegate> _delegate;
    UIButton *_videoButton;
    UIButton *_messageButton;
    UIButton *_phoneButton;
    NSLayoutConstraint *_constraintBetweenVideoAndMessageButtons;
    NSLayoutConstraint *_constraintBetweenMessageAndPhoneButtons;
    unsigned long long _currentButtonTypes;
}

@property unsigned long long currentButtonTypes; // @synthesize currentButtonTypes=_currentButtonTypes;
@property(retain) NSLayoutConstraint *constraintBetweenMessageAndPhoneButtons; // @synthesize constraintBetweenMessageAndPhoneButtons=_constraintBetweenMessageAndPhoneButtons;
@property(retain) NSLayoutConstraint *constraintBetweenVideoAndMessageButtons; // @synthesize constraintBetweenVideoAndMessageButtons=_constraintBetweenVideoAndMessageButtons;
@property(retain) UIButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain) UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain) UIButton *videoButton; // @synthesize videoButton=_videoButton;
@property id <SPUISearchContactButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithButtonTypes:(unsigned long long)arg1;
- (void)buttonPressed:(id)arg1;
- (id)contactButtonWithImageName:(id)arg1 type:(unsigned long long)arg2;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

