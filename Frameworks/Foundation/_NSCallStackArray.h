//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface _NSCallStackArray : NSArray
{
    void **_frames;
    unsigned long long _cnt;
    unsigned long long _ignore;
    char **_pcstrs;
    _Bool _wantSyms;
}

+ (id)arrayWithFrames:(void **)arg1 count:(unsigned long long)arg2 symbols:(_Bool)arg3;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)finalize;
- (void)dealloc;

@end

