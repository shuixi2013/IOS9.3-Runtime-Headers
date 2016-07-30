//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CNRepeatingGradientSeparatorView, NSArray, NSDictionary, UIImageView, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentTextFieldCell : UITableViewCell
{
    NSArray *_splitFieldConstraints;
    NSArray *_oneFieldConstraints;
    _Bool _usesSplitTextFields;
    UITextField *_textFieldForChevron;
    UITextField *_textFieldLeft;
    UITextField *_textFieldRight;
    CNRepeatingGradientSeparatorView *_separator;
    UIImageView *_chevron;
    NSArray *_componentConstraints;
}

@property(retain, nonatomic) NSArray *componentConstraints; // @synthesize componentConstraints=_componentConstraints;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UITextField *textFieldRight; // @synthesize textFieldRight=_textFieldRight;
@property(retain, nonatomic) UITextField *textFieldLeft; // @synthesize textFieldLeft=_textFieldLeft;
@property(retain, nonatomic) UITextField *textFieldForChevron; // @synthesize textFieldForChevron=_textFieldForChevron;
@property(nonatomic) _Bool usesSplitTextFields; // @synthesize usesSplitTextFields=_usesSplitTextFields;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *textAttributes;
@property(readonly, nonatomic) NSArray *textFields;
- (void)updateConstraints;
- (id)_addTextField;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
