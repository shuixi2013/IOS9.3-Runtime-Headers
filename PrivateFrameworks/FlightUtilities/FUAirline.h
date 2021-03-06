//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying>
{
    NSString *_IATACode;
    NSString *_FAACode;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_URL;
}

@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(retain) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *FAACode; // @synthesize FAACode=_FAACode;
@property(retain) NSString *IATACode; // @synthesize IATACode=_IATACode;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

