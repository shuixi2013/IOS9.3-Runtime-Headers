//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicStoreModelObjectBuilder.h>

@interface MusicStoreModelAlbumBuilder : MusicStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int trackCount:1;
        unsigned int discCount:1;
        unsigned int explicit:1;
        unsigned int compilation:1;
        unsigned int releaseDate:1;
        unsigned int artwork:1;
        CDStruct_63a3d127 artist;
    } _requestedAlbumProperties;
}

+ (id)allSupportedProperties;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end
