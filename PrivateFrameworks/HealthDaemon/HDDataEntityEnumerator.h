//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HKObjectType, NSArray, NSNumber, _HKFilter;
@protocol HDHealthDaemon;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor
{
    _Bool _useLeftJoin;
    HKObjectType *_objectType;
    _HKFilter *_filter;
    NSNumber *_sourceIdentifier;
    CDUnknownBlockType _authorizationFilter;
    NSNumber *_anchor;
    NSNumber *_deletedObjectsAnchor;
    NSArray *_sortDescriptors;
    id <HDHealthDaemon> _healthDaemon;
}

@property(nonatomic) _Bool useLeftJoin; // @synthesize useLeftJoin=_useLeftJoin;
@property(readonly, nonatomic) id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSNumber *deletedObjectsAnchor; // @synthesize deletedObjectsAnchor=_deletedObjectsAnchor;
@property(retain, nonatomic) NSNumber *anchor; // @synthesize anchor=_anchor;
@property(copy, nonatomic) CDUnknownBlockType authorizationFilter; // @synthesize authorizationFilter=_authorizationFilter;
@property(retain, nonatomic) NSNumber *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
- (void).cxx_destruct;
- (id)_joinClauseForProperties:(id)arg1;
- (_Bool)_enumerateObjectsOnDatabase:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)_setColumnNamesAndSortOrderingsOnDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateIncludingDeletedObjects:(_Bool)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)enumerateWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectType:(id)arg1 entityClass:(Class)arg2 healthDaemon:(id)arg3;
- (id)initWithEntityClass:(Class)arg1 healthDaemon:(id)arg2;

@end

