//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, UIImage;

@interface CKAnimatedImage : NSObject
{
    UIImage *_image;
    NSArray *_durations;
}

+ (id)animatedImageWithContentsOfCPBitmapURL:(id)arg1;
@property(copy, nonatomic) NSArray *durations; // @synthesize durations=_durations;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)_initWithImage:(id)arg1 durations:(id)arg2;
- (_Bool)writeToCPBitmapURL:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithImages:(id)arg1 durations:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)frames;

@end

