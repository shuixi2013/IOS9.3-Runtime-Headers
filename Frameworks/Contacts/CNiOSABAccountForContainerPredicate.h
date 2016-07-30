//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNiOSAccountPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAccountForContainerPredicate : CNPredicate <CNiOSAccountPredicate>
{
    NSString *_containerIdentifier;
}

@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (struct __CFArray *)cn_copyAccountsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
