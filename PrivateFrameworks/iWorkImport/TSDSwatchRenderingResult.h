//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDSwatchRenderingResult : NSObject
{
    struct CGImage *foreground;
    struct CGImage *background;
}

+ (id)renderingResultWithForeground:(struct CGImage *)arg1 background:(struct CGImage *)arg2;
@property(readonly, nonatomic) struct CGImage *background; // @synthesize background;
@property(readonly, nonatomic) struct CGImage *foreground; // @synthesize foreground;
- (void)dealloc;

@end
