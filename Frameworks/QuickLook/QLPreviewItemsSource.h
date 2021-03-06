//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuickLook/UIDocumentInteractionControllerDelegatePrivate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSURL, QLPreviewController;
@protocol QLPreviewControllerDataSource, QLPreviewItem;

__attribute__((visibility("hidden")))
@interface QLPreviewItemsSource : NSObject <UIDocumentInteractionControllerDelegatePrivate>
{
    QLPreviewController *_previewController;
    id <QLPreviewItem> _previewItem;
    _Bool _prepared;
    long long _UUID;
    NSMutableDictionary *_previewItemCache;
    unsigned long long _numberOfPreviewItems;
    long long _currentPreviewItemIndex;
    long long _currentUIItemIndex;
    long long _archiveDataSourceIndex;
    NSMutableArray *_archiveItems;
    NSMutableDictionary *_uiItems;
    NSURL *_unzippingURL;
    id <QLPreviewControllerDataSource> _dataSource;
}

@property(nonatomic) __weak id <QLPreviewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) long long UUID; // @synthesize UUID=_UUID;
@property(readonly) _Bool prepared; // @synthesize prepared=_prepared;
- (void).cxx_destruct;
@property(readonly) long long currentUIItemIndex;
- (id)UIItemAtIndex:(long long)arg1;
@property(readonly) long long numberOfUIItems;
- (void)_setUIItem:(id)arg1 atIndex:(long long)arg2;
- (id)_UIItemAtIndex:(long long)arg1;
@property(readonly) id <QLPreviewItem> realCurrentPreviewItem;
@property long long realCurrentPreviewItemIndex;
- (id)realPreviewItemAtIndex:(long long)arg1;
@property(readonly) long long realNumberOfPreviewItems;
@property(readonly) id <QLPreviewItem> currentPreviewItem;
@property long long currentPreviewItemIndex;
- (void)resolvePreviewItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)preparedPreviewItemAtIndex:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeArchiveItemAtIndex:(long long)arg1;
- (void)addArchiveItem:(id)arg1;
- (id)previewItemAtIndex:(long long)arg1;
@property(readonly) long long numberOfPreviewItems;
@property(readonly) _Bool shouldShowFileList;
@property(readonly, getter=isViewingArchive) _Bool viewingArchive;
@property(retain) id <QLPreviewItem> previewItem;
- (void)reset;
- (void)prepare;
- (id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)arg1;
- (void)purgeCache;
- (id)initWithPreviewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

