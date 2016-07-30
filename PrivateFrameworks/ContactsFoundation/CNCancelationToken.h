//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNCancelable-Protocol.h>

@class NSMutableArray, NSString;

@interface CNCancelationToken : NSObject <CNCancelable>
{
    _Bool _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

+ (id)tokenWrappingCancelable:(id)arg1;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;
- (void)callCancelationBlocks:(id)arg1;
- (_Bool)isCanceled;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
- (id)nts_cancel;
- (void)cancel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
