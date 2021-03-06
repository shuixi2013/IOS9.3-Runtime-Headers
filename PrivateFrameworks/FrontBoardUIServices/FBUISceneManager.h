//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardUIServices/FBUISceneManager-Protocol.h>

@class NSMutableDictionary, NSString;

@interface FBUISceneManager : NSObject <FBUISceneManager>
{
    NSMutableDictionary *_workspacesByID;
    NSMutableDictionary *_sceneHostsByID;
}

- (void)workspace:(id)arg1 destroySceneWithIdentity:(id)arg2;
- (void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3;
- (id)workspace:(id)arg1 identityForSceneWithName:(id)arg2 specification:(id)arg3;
- (void)invalidateSceneWorkspace:(id)arg1;
- (void)registerSceneWorkspace:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

