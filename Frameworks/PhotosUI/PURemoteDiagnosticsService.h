//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface PURemoteDiagnosticsService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_diagnosticsQueue;
}

+ (_Bool)_isRunningInPhotosApp;
+ (void)startServerOnInternalDevices;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_startListening;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
