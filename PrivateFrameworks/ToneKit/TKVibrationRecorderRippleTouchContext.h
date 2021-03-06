//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TKVibrationRecorderRippleTouchContext : NSObject
{
    double _creationTimestamp;
    struct CGPoint _location;
}

@property(nonatomic, setter=_setLocation:) struct CGPoint _location; // @synthesize _location;
@property(nonatomic, setter=_setCreationTimestamp:) double _creationTimestamp; // @synthesize _creationTimestamp;
- (void)reset;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(struct CGPoint)arg2;
- (double)timeIntervalSinceCreation;
@property(readonly, nonatomic) struct CGPoint location;
- (id)init;

@end

