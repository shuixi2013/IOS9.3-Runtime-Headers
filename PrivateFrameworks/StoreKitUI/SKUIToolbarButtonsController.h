//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SKUIToolbarViewElement;

@interface SKUIToolbarButtonsController : NSObject
{
    NSMapTable *_buttonItemElements;
    SKUIToolbarViewElement *_toolbarElement;
}

- (void).cxx_destruct;
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_buttonAction:(id)arg1;
- (void)disconnectAllButtons;
- (id)addButtonItemWithButtonViewElement:(id)arg1;
- (id)initWithToolbarViewElement:(id)arg1;

@end

