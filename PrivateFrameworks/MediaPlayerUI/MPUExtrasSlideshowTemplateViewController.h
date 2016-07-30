//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

#import <MediaPlayerUI/MPUExtrasSlideshowViewControllerDataSource-Protocol.h>
#import <MediaPlayerUI/MPUExtrasZoomingImageTransitionParticipant-Protocol.h>

@class IKSlideshowElement, MPUExtrasSlideshowViewController, NSArray, NSString, UITapGestureRecognizer;

@interface MPUExtrasSlideshowTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasSlideshowViewControllerDataSource, MPUExtrasZoomingImageTransitionParticipant>
{
    _Bool _overlayHidden;
    _Bool _preventNavbarAutohide;
    MPUExtrasSlideshowViewController *_slideshowViewController;
    NSArray *_imageElements;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *imageElements; // @synthesize imageElements=_imageElements;
@property(retain, nonatomic) MPUExtrasSlideshowViewController *slideshowViewController; // @synthesize slideshowViewController=_slideshowViewController;
- (void).cxx_destruct;
- (void)_toggleVisibilityOfNavigationBar;
- (void)_firstImageLoadedHideNavigationBar;
- (void)_handleTap:(id)arg1;
- (_Bool)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1;
- (_Bool)showsPlaceholder;
@property(readonly, nonatomic) IKSlideshowElement *templateElement;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
