//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@interface PLToolbar : UIToolbar
{
    unsigned int _backgroundHidden:1;
    unsigned int _backgroundAlwaysVisible:1;
    UIToolbar *_persistentToolbar;
}

@property(nonatomic, getter=isBackgroundAlwaysVisible) _Bool backgroundAlwaysVisible;
@property(nonatomic, getter=isBackgroundHidden) _Bool backgroundHidden;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

