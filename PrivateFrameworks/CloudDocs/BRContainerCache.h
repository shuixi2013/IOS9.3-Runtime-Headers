//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol BRContainerHelper, NSObject, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRContainerCache : NSObject
{
    id <BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    _Bool _didFetchAllContainers;
    struct br_pacer_t *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id <NSObject> _containerStatusObserver;
}

+ (id)containerCache;
- (id)_allContainersByIDNoCopy;
- (void)_invalidate;
- (void)_containerListDidChange;
- (void)unsubscribeToContainerStatusUpdate;
- (void)subscribeToContainerStatusUpdate;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (id)allContainersByID;
- (id)documentContainers;
- (id)allContainers;
- (void)dealloc;
- (id)initWithHelper:(id)arg1;

@end
