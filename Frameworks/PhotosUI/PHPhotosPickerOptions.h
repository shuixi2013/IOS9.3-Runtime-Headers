//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PHAsset, PHAssetCollection;

@interface PHPhotosPickerOptions : NSObject
{
    NSDictionary *_initialAssetsToSelect;
    PHAsset *_keyAsset;
    PHAssetCollection *_keyAssetCollection;
    NSArray *_excludedContentModes;
}

@property(copy, nonatomic) NSArray *excludedContentModes; // @synthesize excludedContentModes=_excludedContentModes;
@property(retain, nonatomic) PHAssetCollection *keyAssetCollection; // @synthesize keyAssetCollection=_keyAssetCollection;
@property(retain, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(copy, nonatomic) NSDictionary *initialAssetsToSelect; // @synthesize initialAssetsToSelect=_initialAssetsToSelect;
- (void).cxx_destruct;

@end

