//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SALocation.h>

@class NSNumber, NSString, SAPersonAttribute;

@interface SAFmfLocation : SALocation
{
    NSString *_emailAddress;
}

+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)location;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSNumber *locationDate;
@property(retain, nonatomic) SAPersonAttribute *friend;
@property(retain, nonatomic) NSNumber *distance;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
