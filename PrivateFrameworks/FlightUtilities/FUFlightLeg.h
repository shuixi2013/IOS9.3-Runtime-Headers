//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSCopying-Protocol.h>

@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSCopying>
{
    long long _status;
    FUFlightStep *_departure;
    FUFlightStep *_arrival;
    double _heading;
    double _speed;
    double _altitude;
    NSString *_aircraftcode;
    CDStruct_2c43369c _location;
}

@property(retain) NSString *aircraftcode; // @synthesize aircraftcode=_aircraftcode;
@property CDStruct_2c43369c location; // @synthesize location=_location;
@property double altitude; // @synthesize altitude=_altitude;
@property double speed; // @synthesize speed=_speed;
@property double heading; // @synthesize heading=_heading;
@property(retain) FUFlightStep *arrival; // @synthesize arrival=_arrival;
@property(retain) FUFlightStep *departure; // @synthesize departure=_departure;
@property long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) double duration;

@end
