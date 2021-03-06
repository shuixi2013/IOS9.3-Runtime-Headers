//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataMigration/DMXPCConnection.h>

#import <DataMigration/DMMigratorServiceProtocol-Protocol.h>

@class NSString;

@interface DMConnection : DMXPCConnection <DMMigratorServiceProtocol>
{
    NSString *_lastPlugin;
}

@property(readonly, nonatomic) NSString *lastPlugin; // @synthesize lastPlugin=_lastPlugin;
- (void).cxx_destruct;
- (void)handleMessage:(id)arg1;
- (void)forceMigrationOnNextRebootWithCompletion:(CDUnknownBlockType)arg1;
- (void)testMigrationUIWithProgress:(_Bool)arg1 forceInvert:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeVisibility:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)orderedPluginIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)migrateCheckingNecessity:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isMigrationNeeded:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

