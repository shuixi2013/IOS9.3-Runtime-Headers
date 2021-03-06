//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKMedicalIDEditorMultilineStringCell.h>

@class NSString, UIButton, UIImage, UIView;

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell
{
    UIView *_nameBottomSeparator;
    UIButton *_editPhotoButton;
    UIButton *_editPhotoLabelButton;
}

+ (_Bool)showsLabelAndValue;
@property(readonly, nonatomic) UIButton *editPhotoLabelButton; // @synthesize editPhotoLabelButton=_editPhotoLabelButton;
@property(readonly, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
@property(retain, nonatomic) UIImage *photo;
@property(retain, nonatomic) NSString *name;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

