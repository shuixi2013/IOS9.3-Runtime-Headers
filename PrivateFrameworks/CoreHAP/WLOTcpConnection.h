//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSOutputStream, NSString;
@protocol WLOTcpConnectionDelegate;

@interface WLOTcpConnection : NSObject <NSStreamDelegate>
{
    id <WLOTcpConnectionDelegate> _delegate;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) __weak id <WLOTcpConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_readData:(_Bool)arg1;
- (long long)_writeData:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (long long)writeData:(id)arg1;
- (void)close;
- (_Bool)open;
- (void)closeStream:(id)arg1;
- (_Bool)openStream:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned long long)arg2;
- (id)initWithNetService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
