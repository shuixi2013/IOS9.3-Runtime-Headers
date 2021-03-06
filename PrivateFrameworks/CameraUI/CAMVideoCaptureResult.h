//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSError, NSURL;

@interface CAMVideoCaptureResult : NSObject
{
    _Bool _finalReferenceVideo;
    NSURL *_localDestinationURL;
    NSURL *_masterVideoURL;
    NSArray *_metadata;
    double _videoZoomFactor;
    long long _reason;
    NSDate *_captureDate;
    NSError *_error;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) double videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property(readonly, copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) CDStruct_1b6d18a9 stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic, getter=isFinalReferenceVideo) _Bool finalReferenceVideo; // @synthesize finalReferenceVideo=_finalReferenceVideo;
@property(readonly, nonatomic) NSURL *masterVideoURL; // @synthesize masterVideoURL=_masterVideoURL;
@property(readonly, nonatomic) NSURL *localDestinationURL; // @synthesize localDestinationURL=_localDestinationURL;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)arg1 masterVideoURL:(id)arg2 isFinalReferenceVideo:(_Bool)arg3 duration:(CDStruct_1b6d18a9)arg4 stillDisplayTime:(CDStruct_1b6d18a9)arg5 metadata:(id)arg6 videoZoomFactor:(double)arg7 reason:(long long)arg8 videoPreviewSurface:(void *)arg9 error:(id)arg10;

@end

