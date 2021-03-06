//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class KNMacUILayout, KNSlideCollectionSelection, NSMutableDictionary, NSSet, TSKSelectionPath;

__attribute__((visibility("hidden")))
@interface KNUIState : NSObject <NSCopying>
{
    TSKSelectionPath *mSelectionPath;
    double mMobileCanvasViewScale;
    struct CGPoint mMobileCanvasOffset;
    double mDesktopCanvasViewScale;
    struct CGPoint mDesktopCanvasOffset;
    KNMacUILayout *mDocumentUILayout;
    _Bool mSlideViewFitsContentInWindow;
    double mLightTableZoomScale;
    _Bool mLightTableHidesSkippedSlides;
    struct CGPoint mDesktopMainWindowOrigin;
    struct CGSize mDesktopMainContentSize;
    double mDesktopNavigatorViewWidth;
    double mDesktopOutlineViewWidth;
    double mDesktopPresenterNotesViewHeight;
    NSMutableDictionary *mChartUIState;
    NSSet *mCollapsedSlideNodes;
    NSSet *mOutlineCollapsedSlideNodes;
    NSSet *mOutlineHasBodySlideNodes;
    _Bool mShowSlideGuides;
    _Bool mShowMasterGuides;
    _Bool mShowsComments;
    _Bool mShowsRuler;
}

@property(nonatomic) _Bool showsRuler; // @synthesize showsRuler=mShowsRuler;
@property(nonatomic) _Bool showsComments; // @synthesize showsComments=mShowsComments;
@property(nonatomic) _Bool showSlideGuides; // @synthesize showSlideGuides=mShowSlideGuides;
@property(nonatomic) _Bool showMasterGuides; // @synthesize showMasterGuides=mShowMasterGuides;
@property(copy, nonatomic) NSSet *outlineHasBodySlideNodes; // @synthesize outlineHasBodySlideNodes=mOutlineHasBodySlideNodes;
@property(copy, nonatomic) NSSet *outlineCollapsedSlideNodes; // @synthesize outlineCollapsedSlideNodes=mOutlineCollapsedSlideNodes;
@property(copy, nonatomic) NSSet *collapsedSlideNodes; // @synthesize collapsedSlideNodes=mCollapsedSlideNodes;
@property(nonatomic) double desktopPresenterNotesHeight; // @synthesize desktopPresenterNotesHeight=mDesktopPresenterNotesViewHeight;
@property(nonatomic) double desktopOutlineViewWidth; // @synthesize desktopOutlineViewWidth=mDesktopOutlineViewWidth;
@property(nonatomic) double desktopNavigatorViewWidth; // @synthesize desktopNavigatorViewWidth=mDesktopNavigatorViewWidth;
@property(nonatomic) struct CGSize desktopMainContentSize; // @synthesize desktopMainContentSize=mDesktopMainContentSize;
@property(nonatomic) struct CGPoint desktopMainWindowOrigin; // @synthesize desktopMainWindowOrigin=mDesktopMainWindowOrigin;
@property(nonatomic) _Bool lightTableHidesSkippedSlides; // @synthesize lightTableHidesSkippedSlides=mLightTableHidesSkippedSlides;
@property(nonatomic) double lightTableZoomScale; // @synthesize lightTableZoomScale=mLightTableZoomScale;
@property(nonatomic) _Bool slideViewFitsContentInWindow; // @synthesize slideViewFitsContentInWindow=mSlideViewFitsContentInWindow;
@property(copy, nonatomic) KNMacUILayout *documentUILayout; // @synthesize documentUILayout=mDocumentUILayout;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=mSelectionPath;
- (id)debugDescription;
- (void)updateOutlineStateFromSlideTree:(id)arg1;
- (id)archivedUIStateInContext:(id)arg1;
@property(nonatomic) struct CGPoint canvasOffset;
@property(nonatomic) double canvasViewScale;
- (void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2;
@property(readonly, nonatomic) KNSlideCollectionSelection *slideTreeSelection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (void)saveToArchive:(struct UIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (void)loadFromArchive:(const struct UIStateArchive *)arg1 unarchiver:(id)arg2 context:(id)arg3;

@end

