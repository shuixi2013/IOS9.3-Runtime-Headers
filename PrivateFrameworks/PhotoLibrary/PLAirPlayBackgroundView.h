//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/PLPlayingExternallyBackgroundView.h>

@class NSString;

@interface PLAirPlayBackgroundView : PLPlayingExternallyBackgroundView
{
    NSString *_deviceName;
}

@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)setIsMovie:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 deviceName:(id)arg2;

@end
