//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class NSString;

@interface MDLVertexAttribute : NSObject <NSCopying>
{
    NSString *_name;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
    unsigned long long _format;
    // Error parsing type: , name: _initializationValue
}

// Error parsing type for property initializationValue:
// Property attributes: T,N,V_initializationValue

@property(nonatomic) unsigned long long bufferIndex; // @synthesize bufferIndex=_bufferIndex;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 format:(unsigned long long)arg2 offset:(unsigned long long)arg3 bufferIndex:(unsigned long long)arg4;
- (id)init;

@end

