//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntlPreferences/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol IPNamePreferenceInfoProvider <NSObject>
+ (NSDictionary *)canonicalKeyToValueIdentifierToNumericValueMap;
+ (NSDictionary *)valueIdentifierToValueMapFromCanonicalKey:(NSString *)arg1;
+ (NSDictionary *)valueToValueIdentifierMapFromCanonicalKey:(NSString *)arg1;
+ (NSDictionary *)canonicalNameToNativeKeyName;
+ (NSDictionary *)nativeKeyNameToCanonicalKeyName;
+ (NSString *)domain;
@end
