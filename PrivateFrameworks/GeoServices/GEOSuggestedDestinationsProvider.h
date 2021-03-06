//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface GEOSuggestedDestinationsProvider : NSObject
{
    NSArray *_suggestions;
    CDUnknownBlockType _updateHandler;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void)stopMonitoringSuggestions;
- (void)startMonitoringSuggestionsWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)updateSuggestions:(id)arg1;
- (void)dealloc;

@end

