//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity
{
}

+ (id)booleanEntityWithValue:(_Bool)arg1;
+ (id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)booleanEntity;
@property(nonatomic) _Bool value;
@property(copy, nonatomic) NSNumber *previousValue;
- (id)initWithValue:(_Bool)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
