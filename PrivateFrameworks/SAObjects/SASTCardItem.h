//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIColor, SAUIDecoratedText;

@interface SASTCardItem : AceObject <SASTTemplateItem>
{
}

+ (id)cardItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)cardItem;
@property(retain, nonatomic) SAUIColor *titleTextColor;
@property(retain, nonatomic) SAUIColor *titleBackgroundColor;
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(retain, nonatomic) SAUIColor *labelTextColor;
@property(retain, nonatomic) SAUIDecoratedText *label;
@property(retain, nonatomic) SAUIDecoratedText *footnote;
@property(retain, nonatomic) SAUIColor *backgroundColor;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

