//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface IMHandleRegistrarInternal : NSObject
{
    NSMutableDictionary *_siblingsMap;
    NSMutableDictionary *_accountSiblingsMap;
    NSMutableDictionary *_existingAccountSiblingsMap;
    NSMutableDictionary *_chatSiblingsMap;
    NSMutableDictionary *_existingChatSiblingsMap;
    NSMutableArray *_allIMHandles;
    _Bool _buildingChatSiblings;
}

- (void)dealloc;

@end
