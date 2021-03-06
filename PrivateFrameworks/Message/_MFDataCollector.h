//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFGuaranteedCollectingDataConsumer-Protocol.h>

@class MFBufferedDataConsumer, MFLibraryMessage, MFMailMessageLibrary, NSString;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer>
{
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    MFBufferedDataConsumer *_consumer;
    NSString *_part;
    _Bool _partial;
    _Bool _incomplete;
}

- (id)data;
- (void)dealloc;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)pathForStorage;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(_Bool)arg4 incomplete:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

