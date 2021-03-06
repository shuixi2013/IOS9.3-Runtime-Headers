//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/NCDataSource-Protocol.h>
#import <NotificationCenter/NCSnippetDataSourceObserver-Protocol.h>
#import <NotificationCenter/_NCSnippetDataSource-Protocol.h>

@class BBSectionInfo, NSString, _NCConcreteDataSource;
@protocol _NCSnippetDataSourceManager;

@interface NCSnippetDataSource : NSObject <NCSnippetDataSourceObserver, _NCSnippetDataSource, NCDataSource>
{
    _NCConcreteDataSource *_concreteDataSource;
    NSString *_dataSourceIdentifier;
    NSString *_parentDataSourceIdentifier;
    long long _snippetDataSourceCategory;
    id <_NCSnippetDataSourceManager> _snippetDataSourceManager;
    BBSectionInfo *_representedSectionInfo;
}

@property(retain, nonatomic) BBSectionInfo *representedSectionInfo; // @synthesize representedSectionInfo=_representedSectionInfo;
@property(nonatomic) id <_NCSnippetDataSourceManager> snippetDataSourceManager; // @synthesize snippetDataSourceManager=_snippetDataSourceManager;
@property(readonly, nonatomic) long long snippetDataSourceCategory; // @synthesize snippetDataSourceCategory=_snippetDataSourceCategory;
@property(readonly, nonatomic) NSString *parentDataSourceIdentifier; // @synthesize parentDataSourceIdentifier=_parentDataSourceIdentifier;
@property(readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
@property(readonly, copy) NSString *description;
- (void)snippetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2;
- (void)removeSnippetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSnippetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCategory:(long long)arg1 identifier:(id)arg2 parentDataSourceIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

