//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPutTask.h>

@class NSString;
@protocol CalDAVPutCalendarItemTaskDelegate;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask
{
    NSString *_previousScheduleTag;
}

@property(retain, nonatomic) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;
- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)description;

// Remaining properties
@property(nonatomic) id <CalDAVPutCalendarItemTaskDelegate> delegate; // @dynamic delegate;

@end

