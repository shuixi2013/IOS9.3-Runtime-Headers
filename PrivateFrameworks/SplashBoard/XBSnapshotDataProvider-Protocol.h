//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SplashBoard/NSObject-Protocol.h>

@class NSData, UIImage, XBSnapshotDataProviderContext;

@protocol XBSnapshotDataProvider <NSObject>
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context;

@optional
- (UIImage *)fetchImage;
- (NSData *)fetchImageData:(out struct CGAffineTransform *)arg1;
@end

