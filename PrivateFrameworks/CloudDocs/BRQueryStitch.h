//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSURL;

__attribute__((visibility("hidden")))
@interface BRQueryStitch : NSObject
{
    NSArray *_contexts;
    NSNumber *_objid;
    BOOL _kind;
    NSURL *_fromURL;
    NSURL *_url;
}

@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSURL *fromURL; // @synthesize fromURL=_fromURL;
- (void)dealloc;
- (void)done;
- (void)_deletionDone;
- (void)_renameDone;
- (void)_creationDone;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)setQueries:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;

@end
