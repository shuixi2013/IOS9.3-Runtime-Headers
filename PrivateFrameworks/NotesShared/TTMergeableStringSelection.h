//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/TTMergeableStringIDTracker-Protocol.h>

@class NSString;

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker>
{
    vector_8c432507 _selectionRanges;
    unsigned long long _selectionAffinity;
}

@property(nonatomic) unsigned long long selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)serialize;
- (void)saveToArchive:(struct Selection *)arg1;
- (id)initWithArchive:(const struct Selection *)arg1;
- (id)initWithData:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (vector_8c432507 *)selectionRanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
