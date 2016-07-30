//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteSpec : NSObject
{
    int _type;
    struct __CFUUID *_tableID;
    struct __CFUUID *_conditionalStyleOwnerID;
    CDUnion_702ac9cb _info;
    _Bool _isInverse;
}

@property(nonatomic) _Bool isInverse; // @synthesize isInverse=_isInverse;
@property(readonly, nonatomic) struct __CFUUID *conditionalStyleOwnerID; // @synthesize conditionalStyleOwnerID=_conditionalStyleOwnerID;
@property(readonly, nonatomic) struct __CFUUID *tableID; // @synthesize tableID=_tableID;
@property(readonly, nonatomic) int rewriteType; // @synthesize rewriteType=_type;
- (void)saveToMessage:(struct FormulaRewriteSpecArchive *)arg1 archiver:(id)arg2;
- (id)initFromMessage:(const struct FormulaRewriteSpecArchive *)arg1;
- (vector_dadc1b26)expandedRowColumnUuids;
- (struct TSCERangeCoordinate)affectedRange;
- (void)clearTableIndexes;
- (void)reloadMergeIndexesForTable:(id)arg1;
- (void)didModifyTable:(id)arg1;
- (void)didModifySrcTable:(id)arg1 dstTable:(id)arg2;
- (void)willModifySrcTable:(id)arg1 dstTable:(id)arg2;
- (void)willModifyTable:(id)arg1;
- (CDStruct_0441cfb5)previousMergeAnchorForMergeRange:(struct TSUColumnRowRect)arg1 inTableID:(struct __CFUUID *)arg2 isUndo:(_Bool)arg3;
- (struct __CFUUID *)previousTableIDForUpdatedTableID:(struct __CFUUID *)arg1 updatedCellCoordinate:(CDStruct_0441cfb5)arg2;
- (struct __CFUUID *)updatedTableIDForOriginalTableID:(struct __CFUUID *)arg1 originalCellCoordinate:(CDStruct_0441cfb5)arg2;
- (CDStruct_0441cfb5)previousCellCoordinateForTableUID:(const UUIDData_5fbc143e *)arg1 updatedCellCoordinate:(CDStruct_0441cfb5)arg2;
- (CDStruct_0441cfb5)previousCellCoordinateForTableID:(struct __CFUUID *)arg1 updatedCellCoordinate:(CDStruct_0441cfb5)arg2;
- (CDStruct_0441cfb5)updatedCellCoordinateForTableUID:(const UUIDData_5fbc143e *)arg1 originalCellCoordinate:(CDStruct_0441cfb5)arg2;
- (CDStruct_0441cfb5)updatedCellCoordinateForTableID:(struct __CFUUID *)arg1 originalCellCoordinate:(CDStruct_0441cfb5)arg2;
- (UUIDData_5fbc143e)affectedConditionalStyleOwnerUID;
- (struct __CFUUID *)affectedConditionalStyleOwnerID;
- (unordered_set_c04cc813)affectedOwnerUIDs;
- (UUIDData_5fbc143e)affectedOwnerUID;
- (struct __CFUUID *)affectedOwnerID;
- (id)description;
- (CDUnion_702ac9cb)rewriteInfo;
@property(readonly, nonatomic) UUIDData_5fbc143e conditionalStyleOwnerUID;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID;
- (void)dealloc;
- (id)initForTableIDReassignment:(const struct TSUUuidMap *)arg1;
- (id)initForUndoMergeCellsWithTableID:(struct __CFUUID *)arg1 columnUids:(const vector_dadc1b26 *)arg2 rowUids:(const vector_dadc1b26 *)arg3;
- (id)initForMergeCellsWithTableID:(struct __CFUUID *)arg1 columnUids:(const vector_dadc1b26 *)arg2 rowUids:(const vector_dadc1b26 *)arg3;
- (id)initForMovingRegionWithSrcTableID:(struct __CFUUID *)arg1 srcColumnUids:(const vector_dadc1b26 *)arg2 srcRowUids:(const vector_dadc1b26 *)arg3 dstTableID:(struct __CFUUID *)arg4 dstColumnUids:(const vector_dadc1b26 *)arg5 dstRowUids:(const vector_dadc1b26 *)arg6;
- (id)initForSortWithTableID:(struct __CFUUID *)arg1 rowUids:(const vector_dadc1b26 *)arg2;
- (id)initForMovingRowsOrColumnsInTable:(struct __CFUUID *)arg1 rowColumnUuids:(const vector_dadc1b26 *)arg2 areRows:(_Bool)arg3;
- (id)initForInsertingRowsOrColumnsIntoTable:(struct __CFUUID *)arg1 rowColumnUuids:(const vector_dadc1b26 *)arg2 areRows:(_Bool)arg3;
- (id)initForRemoveRowsOrColumnsFromTable:(struct __CFUUID *)arg1 rowColumnUuids:(const vector_dadc1b26 *)arg2 areRows:(_Bool)arg3;
- (id)initWithTransposeTable:(struct __CFUUID *)arg1 withNumberOfFooterRows:(unsigned short)arg2;
- (id)initWithOwnerInsertion:(struct __CFUUID *)arg1;
- (id)initWithOwnerDeletion:(struct __CFUUID *)arg1;

@end
