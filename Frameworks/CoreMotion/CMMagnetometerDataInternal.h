//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>

@interface CMMagnetometerDataInternal : NSObject <NSCopying>
{
    CDStruct_03942939 fMagneticField;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMagneticField:(CDStruct_03942939)arg1;
- (void)setMagneticField:(CDStruct_03942939)arg1;

@end
