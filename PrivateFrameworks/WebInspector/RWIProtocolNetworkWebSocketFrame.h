//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *payloadData;
@property(nonatomic) _Bool mask;
@property(nonatomic) double opcode;
- (id)initWithOpcode:(double)arg1 mask:(_Bool)arg2 payloadData:(id)arg3;

@end
