//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL, NSURLRequest, WKFrameInfo;

@interface WKNavigationAction : NSObject <WKObject>
{
    struct ObjectStorage<API::NavigationAction> _navigationAction;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, copy, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic) long long navigationType;
@property(readonly, copy, nonatomic) WKFrameInfo *targetFrame;
@property(readonly, copy, nonatomic) WKFrameInfo *sourceFrame;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) _Bool _shouldOpenExternalURLs;
@property(readonly, nonatomic) _Bool _shouldOpenAppLinks;
@property(readonly, nonatomic) _Bool _shouldOpenExternalSchemes;
@property(readonly, nonatomic) _Bool _canHandleRequest;
@property(readonly, nonatomic, getter=_isUserInitiated) _Bool _userInitiated;
@property(readonly, nonatomic) NSURL *_originalURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

