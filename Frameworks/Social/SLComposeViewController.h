//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Social/SLRemoteComposeViewControllerDelegateProtocol-Protocol.h>

@class NSArray, NSExtension, NSLayoutConstraint, NSString, UIView;

@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol>
{
    NSExtension *_extension;
    NSString *_initialText;
    NSArray *_itemProviders;
    NSArray *_extensionItems;
    NSLayoutConstraint *_keyboardTopConstraint;
    UIView *_keyboardTrackingView;
    long long _savedStatusBarStyle;
    _Bool _wasPresented;
    CDUnknownBlockType _completionHandler;
    _Bool _didFailLoadingRemoteViewController;
    _Bool _didCompleteSheet;
    long long _maximumImageCount;
    long long _maximumURLCount;
    long long _maximumVideoCount;
    long long _numVideosAdded;
    long long _numImagesAdded;
    long long _numURLsAdded;
    NSString *_serviceType;
    UIViewController *_remoteViewController;
}

+ (id)composeViewControllerForExtensionIdentifier:(id)arg1;
+ (id)composeViewControllerForServiceType:(id)arg1;
+ (id)composeViewControllerForExtension:(id)arg1;
+ (_Bool)isAvailableForExtensionIdentifier:(id)arg1;
+ (_Bool)isAvailableForServiceType:(id)arg1;
+ (_Bool)isAvailableForExtension:(id)arg1;
+ (_Bool)_isAvailableForMediaShareExtension:(id)arg1;
+ (_Bool)_isMultiUserDevice;
+ (_Bool)_isAvailableForService:(id)arg1;
+ (id)_shareExtensionWithIdentifier:(id)arg1;
+ (id)extensionIdentifierForActivityType:(id)arg1;
+ (_Bool)_isServiceType:(id)arg1;
+ (id)_serviceTypeForExtensionIdentifier:(id)arg1;
+ (id)_extensionIdentifierForServiceType:(id)arg1;
+ (id)_serviceTypeToExtensionIdentifierMap;
@property(retain) UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (_Bool)canSendTweet;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_useCustomDimmingView;
- (void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteController:(id)arg1 didLoadWithError:(id)arg2;
- (void)_handleRemoteViewFailure;
- (void)remoteViewControllerLoadDidTimeout;
- (void)didLoadSheetViewController;
- (void)userDidPost;
- (void)userDidCancel;
- (void)completeWithResult:(long long)arg1;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;
- (CDUnknownBlockType)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1;
- (_Bool)addAttachment:(id)arg1;
- (_Bool)addExtensionItem:(id)arg1;
- (_Bool)addItemProvider:(id)arg1;
- (_Bool)removeAllURLs;
- (_Bool)_addURL:(id)arg1 type:(long long)arg2 preview:(id)arg3;
- (_Bool)addURL:(id)arg1 withPreviewImage:(id)arg2;
- (_Bool)addURL:(id)arg1;
- (_Bool)_addVideoData:(id)arg1 preview:(id)arg2;
- (_Bool)_addVideoAsset:(id)arg1 preview:(id)arg2;
- (_Bool)removeAllImages;
- (_Bool)_addImageJPEGData:(id)arg1 preview:(id)arg2;
- (_Bool)addImage:(id)arg1;
- (_Bool)_addImageAsset:(id)arg1 preview:(id)arg2;
- (_Bool)addImageAsset:(id)arg1;
- (id)_urlForUntypedAsset:(id)arg1;
- (_Bool)supportsVideoAsset:(id)arg1;
- (_Bool)supportsImageAsset:(id)arg1;
- (_Bool)setInitialText:(id)arg1;
- (_Bool)canAddContent;
- (void)dealloc;
- (id)initWithExtensionIdentifier:(id)arg1;
- (id)initWithServiceType:(id)arg1;
- (id)initWithExtension:(id)arg1 requestedServiceType:(id)arg2;

@end
