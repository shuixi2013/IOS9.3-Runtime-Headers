//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/_PLClientTransaction.h>

@class NSCountedSet;

@interface _PLServerTransaction : _PLClientTransaction
{
    NSCountedSet *_enqueuedChangeScopes;
}

- (void)completeTransactionScope:(id)arg1;
- (void)completeTransaction;
- (void)abortTransaction;
- (id)changeScopes;
- (void)addChangeScopes:(id)arg1;
- (void)_enqueueChangeScopes:(id)arg1;
- (_Bool)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)dealloc;
- (id)init;

@end
