//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TUICFInterface : NSObject
{
}

+ (void)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(_Bool)arg3;
+ (_Bool)serviceIdentifierIsRelay:(id)arg1;
+ (int)serviceForServiceIdentifier:(id)arg1;
+ (struct __CFString *)serviceIdentifierForService:(int)arg1 isRelay:(_Bool)arg2;

@end
