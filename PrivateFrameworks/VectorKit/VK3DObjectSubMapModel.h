//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VKBuildingFootprintMapModel;

__attribute__((visibility("hidden")))
@interface VK3DObjectSubMapModel : NSObject
{
    struct unique_ptr<ggl::FragmentedPool<ggl::Building::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup>>> _objectShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>>> _foggedObjectShaderSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object2DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object3DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object2DRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object3DRenderStateWithBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _objectRenderItemPool;
    VKBuildingFootprintMapModel *_buildingMapModel;
    long long _vectorType;
}

@property(nonatomic) long long vectorType; // @synthesize vectorType=_vectorType;
@property(nonatomic) VKBuildingFootprintMapModel *buildingMapModel; // @synthesize buildingMapModel=_buildingMapModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)resetPools;
- (void)flushPools;
- (id)initWithBuildingMapModel:(id)arg1;

@end

