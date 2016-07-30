//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface SLYahooUserInfoResponse : NSObject
{
    long long _statusCode;
    NSString *_displayName;
    NSString *_emailAddress;
    NSError *_error;
    NSString *_errorMessage;
}

@property(readonly) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end
