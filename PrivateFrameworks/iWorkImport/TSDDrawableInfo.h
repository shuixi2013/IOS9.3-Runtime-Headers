//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDChangeableInfo-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKSearchable-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>

@class NSObject, NSString, NSURL, TSDDefaultPartitioner, TSDDrawableComment, TSDExteriorTextWrap, TSDInfoGeometry, TSPLazyReference, TSSPropertySetChangeDetails;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TSDDrawableInfo : TSPObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable>
{
    TSDInfoGeometry *mGeometry;
    NSObject<TSDContainerInfo> *mParentInfo;
    TSPLazyReference *mParentInfoReference;
    _Bool mLocked;
    _Bool mAspectRatioLocked;
    TSSPropertySetChangeDetails *mChanges;
    TSDExteriorTextWrap *mExteriorTextWrap;
    TSPObject<TSDOwningAttachment> *mOwningAttachment;
    TSDDefaultPartitioner *mDefaultPartitioner;
    NSURL *mHyperlinkURL;
    TSDDrawableComment *mComment;
    NSString *mAccessibilityDescription;
}

+ (_Bool)canPartition;
+ (void)setShouldPartitionByDefault:(_Bool)arg1;
+ (_Bool)needsObjectUUID;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=mAccessibilityDescription;
@property(nonatomic) _Bool aspectRatioLocked; // @synthesize aspectRatioLocked=mAspectRatioLocked;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=mLocked;
@property(copy, nonatomic) NSURL *hyperlinkURL; // @synthesize hyperlinkURL=mHyperlinkURL;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment=mOwningAttachment;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
- (struct CGPoint)transformableObjectAnchorPoint;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform)arg1 inBounds:(struct CGRect)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)containingGroup;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (id)descriptionForPasteboard;
- (_Bool)reverseChunkingIsSupported;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (id)animationFilters;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (_Bool)canChangeWrapType;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)coalesceChanges:(id)arg1;
- (id)endCollectingChanges;
- (void)willChangeProperties:(id)arg1;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;
@property(retain, nonatomic) TSDDrawableComment *comment;
@property(readonly, nonatomic) _Bool supportsAttachedComments;
- (_Bool)canAnchor;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic, getter=isLockable) _Bool lockable;
- (id)presetKind;
@property(readonly, nonatomic) _Bool supportsHyperlinks;
- (id)partitioner;
- (_Bool)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic) _Bool isUserModifiable;
@property(copy, nonatomic) TSDExteriorTextWrap *exteriorTextWrap;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
- (struct CGAffineTransform)transformInRoot;
- (struct CGAffineTransform)fullTransformInRoot;
- (struct CGAffineTransform)computeFullTransform;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool canSizeBeChangedIncrementally;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)setPrimitiveGeometry:(id)arg1;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)saveToArchive:(struct DrawableArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct DrawableArchive *)arg1 unarchiver:(id)arg2;
- (void)setParentInfoDuringUnarchiving:(id)arg1 fromCopy:(_Bool)arg2;
- (id)objectUUIDPath;
- (void)setInsertionCenterPosition:(struct CGPoint)arg1;
- (int)elementKind;
- (id)uuidPathPrefixComponentsProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

