//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardUIServices/NSCopying-Protocol.h>

@class FBUISceneClientIdentity;

@interface FBUISceneSpecification : NSObject <NSCopying>
{
    FBUISceneClientIdentity *_clientIdentity;
}

@property(readonly, copy, nonatomic) FBUISceneClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) Class transitionContextClass;
@property(readonly, nonatomic) Class clientSettingsClass;
@property(readonly, nonatomic) Class settingsClass;
@property(readonly, nonatomic) Class agentClass;
- (void)dealloc;
- (id)initWithClientIdentity:(id)arg1;

@end

