//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TSCH3DShaderStatement <NSObject>
- (void)setGeneratedForType:(struct TSCH3DShaderType)arg1;
- (NSString *)string;
- (struct TSCH3DShaderType)linkageType;
- (_Bool)isLinked;
- (NSArray *)resolve;
@end

