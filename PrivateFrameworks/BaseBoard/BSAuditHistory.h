//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface BSAuditHistory : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    NSMutableArray *_items;
}

@property(readonly, retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)addItemWithFormat:(id)arg1;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) _Bool hasItems;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

