//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SGRealtimeEvent, SGRecordId;

@protocol _SGSuggestionsServiceEventsConfirmRejectProtocol
- (void)rejectEventByRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)rejectEventByRecordId:(SGRecordId *)arg1 error:(id *)arg2;
- (void)confirmEventByRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)confirmEventByRecordId:(SGRecordId *)arg1 error:(id *)arg2;
- (void)rejectEvent:(SGRealtimeEvent *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)rejectEvent:(SGRealtimeEvent *)arg1 error:(id *)arg2;
- (void)confirmEvent:(SGRealtimeEvent *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)confirmEvent:(SGRealtimeEvent *)arg1 error:(id *)arg2;
@end

