//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject
{
    HKHealthStore *_healthStore;
    _Bool _showFakeData;
}

- (void).cxx_destruct;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end
