//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSMessageToDelete : NSObject
{
    unsigned int _dataProtectionClass;
    NSString *_guid;
    NSString *_alternateGUID;
}

@property(retain, setter=setAlternateGUID:) NSString *alternateGUID; // @synthesize alternateGUID=_alternateGUID;
@property(retain, setter=setGUID:) NSString *guid; // @synthesize guid=_guid;
@property unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
- (void)dealloc;

@end

