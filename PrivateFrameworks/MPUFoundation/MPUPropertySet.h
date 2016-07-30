//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/NSCopying-Protocol.h>
#import <MPUFoundation/NSMutableCopying-Protocol.h>

@class NSDictionary, NSSet;

@interface MPUPropertySet : NSObject <NSCopying, NSMutableCopying>
{
    NSSet *_properties;
    NSDictionary *_relationships;
}

+ (id)propertySetWithProperties:(id)arg1;
@property(readonly, nonatomic) NSDictionary *relationships; // @synthesize relationships=_relationships;
@property(readonly, nonatomic) NSSet *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)propertySetByCombiningWithPropertySet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)debugDescription;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;
- (id)init;

@end
