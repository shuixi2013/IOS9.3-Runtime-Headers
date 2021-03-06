//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyDescription : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_key;
    SEL _readSelector;
    SEL _writeSelector;
    CDUnknownBlockType _valueForKeyTransform;
    _Bool _isNonnull;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isNonnull; // @synthesize isNonnull=_isNonnull;
@property(readonly, copy, nonatomic) CDUnknownBlockType valueForKeyTransform; // @synthesize valueForKeyTransform=_valueForKeyTransform;
@property(readonly, nonatomic) SEL writeSelector; // @synthesize writeSelector=_writeSelector;
@property(readonly, nonatomic) SEL readSelector; // @synthesize readSelector=_readSelector;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)stringForIndexingForContact:(id)arg1;
- (id)CNValueForContact:(id)arg1;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;
- (void)assertValueType:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (_Bool)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (_Bool)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (id)valueWithResetIdentifiers:(id)arg1;
- (id)equivalentLabelsForLabel:(id)arg1;
- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
@property(readonly, nonatomic) NSArray *equivalentLabelSets;
@property(readonly, nonatomic) _Bool isMultiValue;
@property(readonly, nonatomic) _Bool isSingleValue;
@property(readonly, nonatomic) _Bool isWritable;
@property(readonly, nonatomic) Class valueClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 readSelector:(SEL)arg2 writeSelector:(SEL)arg3;
- (void)copyFromABPerson:(void *)arg1 toContact:(id)arg2;
- (_Bool)setCNValue:(id)arg1 onABPerson:(void *)arg2 withSaveContext:(id)arg3 error:(id *)arg4;
- (void *)ABValueForABPerson:(void *)arg1;
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;
- (id)CNValueFromABValue:(void *)arg1;
- (void *)ABValueFromCNValue:(id)arg1;
- (_Bool)abPropertyID:(int *)arg1;

@end

