//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@interface CPMemoryOwner : NSObject <CPDisposable>
{
    void *memory;
}

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithAllocatedMemory:(void *)arg1;

@end
