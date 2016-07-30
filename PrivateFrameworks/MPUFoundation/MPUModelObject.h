//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/NSCopying-Protocol.h>

@class MPUIdentiferSet, NSMutableSet;

@interface MPUModelObject : NSObject <NSCopying>
{
    NSMutableSet *_initializedProperties;
    _Bool _wasFullyInitialized;
    MPUIdentiferSet *_identifiers;
}

+ (void)initialize;
@property(readonly, copy, nonatomic) MPUIdentiferSet *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;
- (_Bool)_wasFullyInitialized;
- (id)_initializedProperties;
- (id)descriptionWithType:(unsigned long long)arg1;
- (void)appendIdentifiersToDescription:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
