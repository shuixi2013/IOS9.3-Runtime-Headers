//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMVideoCaptureRequest.h>

#import <CameraUI/CAMMutableCaptureRequestLocation-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPersistence-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPower-Protocol.h>

@class CLLocation, NSString, NSURL;
@protocol CAMVideoCaptureRequestDelegate;

@interface CAMMutableVideoCaptureRequest : CAMVideoCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower>
{
}

- (void)setParameter:(id)arg1 forKey:(id)arg2;
@property(nonatomic, getter=isTimelapse) _Bool timelapse; // @dynamic timelapse;
@property(nonatomic) unsigned int assertionIdentifier;
@property(nonatomic) _Bool shouldGenerateVideoPreviewImage; // @dynamic shouldGenerateVideoPreviewImage;
@property(nonatomic) long long remainingDiskUsageThreshold; // @dynamic remainingDiskUsageThreshold;
@property(nonatomic) long long maximumRecordedFileSize; // @dynamic maximumRecordedFileSize;
@property(nonatomic) double maximumRecordedDuration; // @dynamic maximumRecordedDuration;
@property(retain, nonatomic) CLLocation *location;
@property(nonatomic) _Bool shouldDelayRemotePersistence;
@property(nonatomic) _Bool shouldPersistDiagnosticsToSidecar;
@property(nonatomic) _Bool shouldExtractDiagnosticsFromMetadata;
@property(copy, nonatomic) NSURL *localDestinationURL;
@property(nonatomic) unsigned long long deferredPersistenceOptions;
@property(nonatomic) long long persistenceOptions;
@property(copy, nonatomic) NSString *persistenceUUID;
@property(nonatomic) unsigned short sessionIdentifier; // @dynamic sessionIdentifier;
@property(nonatomic) long long torchMode; // @dynamic torchMode;
@property(nonatomic) long long physicalButtonType; // @dynamic physicalButtonType;
@property(nonatomic) long long captureMode; // @dynamic captureMode;
@property(nonatomic) long long captureDevice; // @dynamic captureDevice;
@property(nonatomic) long long captureOrientation; // @dynamic captureOrientation;
@property(nonatomic) __weak id <CAMVideoCaptureRequestDelegate> delegate; // @dynamic delegate;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
