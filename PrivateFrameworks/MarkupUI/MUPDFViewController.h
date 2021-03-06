//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MarkupUI/MUPDFViewDelegate-Protocol.h>
#import <MarkupUI/MUPDFViewPrivateDelegate-Protocol.h>
#import <MarkupUI/UIDocumentPasswordViewDelegate-Protocol.h>
#import <MarkupUI/UIScrollViewDelegate-Protocol.h>

@class MUPDFNumberFormatter, MUPDFPageLabelView, MUPDFView, MUPDFViewPlaceholder, NSObject, NSString, UIAlertController, UIColor, UIDocumentPasswordView, UIPDFDocument, UIScrollView, UIView;
@protocol MUPDFViewControllerDelegate;

@interface MUPDFViewController : UIViewController <MUPDFViewDelegate, MUPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, UIScrollViewDelegate>
{
    double _initialZoomScale;
    MUPDFPageLabelView *_pageLabelView;
    UIDocumentPasswordView *_passwordEntryView;
    MUPDFNumberFormatter *_labelViewFormatter;
    MUPDFView *_pdfView;
    struct CGRect _rectOfInterest;
    _Bool _rectOfInterestConsidersHeight;
    _Bool _shouldLoadDocAfterViewDidLoad;
    UIAlertController *_currentAlert;
    _Bool _scalesPageToFit;
    _Bool _showPageLabels;
    _Bool _hideActivityIndicatorForUnRenderedContent;
    _Bool _hidePageViewsUntilReadyToRender;
    UIPDFDocument *_document;
    UIScrollView *_scrollView;
    NSObject<MUPDFViewControllerDelegate> *_delegate;
    UIColor *_backgroundColorForUnRenderedContent;
    unsigned long long _currentPageIndex;
    UIPDFDocument *_pdfDocument;
    struct CGPDFDocument *_pdfDocumentRef;
    MUPDFViewPlaceholder *_pdfPlaceholder;
    struct UIEdgeInsets _additionalEdgeInsets;
}

@property(retain, nonatomic) MUPDFViewPlaceholder *pdfPlaceholder; // @synthesize pdfPlaceholder=_pdfPlaceholder;
@property struct CGPDFDocument *pdfDocumentRef; // @synthesize pdfDocumentRef=_pdfDocumentRef;
@property(retain) UIPDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) _Bool hidePageViewsUntilReadyToRender; // @synthesize hidePageViewsUntilReadyToRender=_hidePageViewsUntilReadyToRender;
@property(nonatomic) _Bool hideActivityIndicatorForUnRenderedContent; // @synthesize hideActivityIndicatorForUnRenderedContent=_hideActivityIndicatorForUnRenderedContent;
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // @synthesize backgroundColorForUnRenderedContent=_backgroundColorForUnRenderedContent;
@property(nonatomic) __weak NSObject<MUPDFViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showPageLabels; // @synthesize showPageLabels=_showPageLabels;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(nonatomic) struct UIEdgeInsets additionalEdgeInsets; // @synthesize additionalEdgeInsets=_additionalEdgeInsets;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIPDFDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) UIView *pdfView; // @synthesize pdfView=_pdfView;
- (void).cxx_destruct;
- (unsigned long long)_verticalEdgeForContentOffsetInScrollView:(id)arg1;
- (double)_pinValueForVerticalEdge:(unsigned long long)arg1 inScrollView:(id)arg2;
- (id)contentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onPageAtIndex:(unsigned long long)arg4;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 inPDFPageSpaceAtIndex:(unsigned long long)arg2 toView:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toPDFPageSpaceAtIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) double zoomToFitZoomFactor;
- (id)viewAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSString *documentPassword;
@property(readonly, nonatomic) unsigned long long pageCount;
- (double)__jetsam_workaround_maximumZoomScale;
- (CDStruct_39925896)scalesForContainerSize:(struct CGSize)arg1;
- (void)updatePageNumberLabelWithUserScrolling:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_getLabelViewFormatter;
- (void)_updateViewHierarchyForDocumentViewNewLoad:(id)arg1;
@property(readonly, nonatomic) UIView *frontView;
- (void)ensureCorrectPagesAreInstalled:(_Bool)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)pageWasRendered:(id)arg1;
- (id)passwordForPDFView:(id)arg1;
- (void)_pdfView:(id)arg1 didRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_pdfView:(id)arg1 willRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_pdfView:(id)arg1 didAddPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_pdfView:(id)arg1 willAddPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)resetZoom:(id)arg1;
- (void)pdfView:(id)arg1 zoomToRect:(struct CGRect)arg2 forPoint:(struct CGPoint)arg3 considerHeight:(_Bool)arg4;
- (void)didDetermineDocumentBounds:(id)arg1;
- (void)_postdidDetermineDocumentBounds;
- (void)_showPasswordEntryViewForFile:(id)arg1;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)_keyboardDidShow:(id)arg1;
- (void)_adjustContentOffsetForKeyboardIfNeeded;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)_showPasswordErrorAlert;
- (id)createPageLabel;
- (void)clearPageLabel;
- (void)scrollToPageNumber:(long long)arg1 animate:(_Bool)arg2;
- (void)adjustZoomScalesForScrollView;
- (void)_adjustZoomScalesForScrollViewInternal:(id)arg1;
- (void)updateViewSettings;
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)arg1;
- (void)_createPDFViewIfNeeded:(id)arg1;
- (unsigned long long)_calculateCurrentPageIndex;
- (struct CGRect)_rectForPasswordView:(id)arg1;
- (struct CGRect)_frameForDocumentBounds:(struct CGRect)arg1;
- (struct CGRect)_rectForPdfView:(struct CGRect)arg1;
- (id)_getPDFDocumentViewForWebView:(id)arg1;
- (id)_scroller:(id)arg1;
- (void)clearAllViews;
- (void)_setupWithDocument:(struct CGPDFDocument *)arg1;
- (void)setupWithDocument:(struct CGPDFDocument *)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

