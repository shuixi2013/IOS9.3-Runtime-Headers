//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, UIImage;
@protocol CKPhotoPickerItemForSendingDelegate, OS_dispatch_semaphore;

@interface CKPhotoPickerItemForSending : NSObject
{
    NSObject<OS_dispatch_semaphore> *_outstandingWork;
    _Bool _isVideo;
    _Bool _sendIris;
    NSURL *_localURL;
    NSURL *_assetURL;
    UIImage *_thumbnail;
    NSURL *_extraVideoURL;
    id <CKPhotoPickerItemForSendingDelegate> _delegate;
}

@property(nonatomic) id <CKPhotoPickerItemForSendingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *extraVideoURL; // @synthesize extraVideoURL=_extraVideoURL;
@property(nonatomic) _Bool sendIris; // @synthesize sendIris=_sendIris;
@property(retain) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(readonly, retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly, retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
- (void)_fetchAndPersistImageDataForAsset:(id)arg1 withImageManager:(id)arg2;
- (id)description;
- (void)dealloc;
- (void)waitForOutstandingWork;
- (id)initWithAssetURL:(id)arg1 isVideo:(_Bool)arg2;
- (id)initWithImageManager:(id)arg1 asset:(id)arg2 delegate:(id)arg3;

@end
