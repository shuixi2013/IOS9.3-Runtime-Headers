//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRegularExpression;

__attribute__((visibility("hidden")))
@interface TSCERegexMatcher : NSObject
{
    NSRegularExpression *mRegex;
}

+ (id)regexMatcherWithStringMatch:(id)arg1;
- (void)dealloc;
- (_Bool)matches:(id)arg1;
- (id)initWithStringToMatch:(id)arg1;

@end

