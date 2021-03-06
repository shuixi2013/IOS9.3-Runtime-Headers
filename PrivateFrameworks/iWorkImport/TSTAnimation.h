//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSTLayout;

__attribute__((visibility("hidden")))
@interface TSTAnimation : NSObject <NSCopying>
{
    TSTLayout *mLayout;
    int mKind;
    struct TSUColumnRowRect *mCellRanges;
    unsigned long long mCellRangeCount;
    unsigned long long mStageCount;
    unsigned long long mStage;
    _Bool mFinal;
    _Bool mByColumn;
    _Bool mByRow;
    _Bool mByCell;
    _Bool mByContent;
    _Bool mByCellRange;
    _Bool mByMissingCellRange;
    _Bool mReverse;
    _Bool mShowsTableChrome;
    _Bool mShowsOverlayLayers;
    _Bool mExpandBackgroundFill;
    _Bool mDrawsBlackAndWhite;
}

+ (_Bool)deliveryStyleSupportedForExport:(unsigned long long)arg1;
+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 tableProvider:(id)arg2;
+ (id)textureDeliveryStylesLocalized:(_Bool)arg1;
+ (unsigned long long)p_stageCountForProvider:(id)arg1 withAnimationKind:(int)arg2;
+ (unsigned long long)p_NumberOfColumnBuilds:(id)arg1;
+ (unsigned long long)p_NumberOfRowBuilds:(id)arg1;
+ (unsigned long long)p_NumberOfCellBuilds:(id)arg1;
+ (id)newAnimationWithLayout:(id)arg1 andCellRange:(struct TSUColumnRowRect)arg2;
+ (id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2;
@property _Bool drawsBlackAndWhite; // @synthesize drawsBlackAndWhite=mDrawsBlackAndWhite;
@property _Bool expandBackgroundFill; // @synthesize expandBackgroundFill=mExpandBackgroundFill;
@property _Bool showsOverlayLayers; // @synthesize showsOverlayLayers=mShowsOverlayLayers;
@property _Bool showsTableChrome; // @synthesize showsTableChrome=mShowsTableChrome;
@property(readonly) _Bool final; // @synthesize final=mFinal;
@property(readonly) unsigned long long stage; // @synthesize stage=mStage;
@property(readonly) unsigned long long stageCount; // @synthesize stageCount=mStageCount;
@property(nonatomic) TSTLayout *layout; // @synthesize layout=mLayout;
- (_Bool)isHidingContentOfCellID:(CDStruct_0441cfb5)arg1;
@property(readonly) _Bool drawStrokes;
@property(readonly) _Bool clipStrokes;
@property(readonly) _Bool drawCellContent;
@property(readonly) _Bool drawCellBackground;
@property(readonly) _Bool drawTableBackground;
@property(readonly) _Bool drawTableName;
@property(readonly) _Bool enabled;
- (void)clearCellRanges;
- (void)addCellRange:(struct TSUColumnRowRect)arg1;
@property(readonly) unsigned long long cellRangeCount;
- (struct TSUColumnRowRect)cellRangeAtIndex:(unsigned long long)arg1;
- (void)setStage:(unsigned long long)arg1 andFinal:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

