//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (BRCSerializationAdditions)
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(_Bool)arg3;
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(_Bool)arg4;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2;
- (void)serializeSystemFields:(id)arg1;
- (_Bool)deserializeVersion:(id *)arg1 fakeStatInfo:(id *)arg2 error:(id *)arg3;
- (_Bool)deserializeStatInfo:(id *)arg1 itemID:(id)arg2 error:(id *)arg3;
- (_Bool)deserializeSharingOptions:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)deserializeAliasInfo:(id *)arg1 error:(id *)arg2;
- (_Bool)_deserializeFilename:(id *)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (_Bool)_deserializeValue:(id *)arg1 forKey:(id)arg2 expectClass:(Class)arg3 allowNil:(_Bool)arg4 errorDescription:(id *)arg5;
@end

