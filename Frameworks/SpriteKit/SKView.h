//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, NSData, NSMapTable, NSMutableDictionary, NSObject, NSUserDefaults, SKDisplayLink, SKNode, SKScene, SKTransition;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SKView : UIView
{
    struct SKCStats _currentStats;
    struct SKCStats _nextStats;
    struct SKCStats _frameStats;
    // Error parsing type: ^{SKCRenderer=@f{shared_ptr<SKCRenderPass>=^{SKCRenderPass}^{__shared_weak_count}}I{shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}}{list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > >={__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>=^{__list_node<std::__1::shared_ptr<SKCRenderPass>, void *>}^{__list_node<std::__1::shared_ptr<SKCRenderPass>, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > >=Q}}{?=II^^^{?=[4]}f^{SKCRenderer}f{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}^{jet_buffer}^{jet_buffer}^{jet_buffer}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}BI{SKCRenderBatch=BiII@^{jet_program}^{jet_texture}^{jet_texture}^{jet_sampler}^{jet_sampler}IIf}^{SKCStats}{vector<std::__1::shared_ptr<jet_buffer>, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}^{shared_ptr<jet_buffer>}{__compressed_pair<std::__1::shared_ptr<jet_buffer> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}}}}^{SKCStats}{SKCStats=^^?ddddi{?=dd}{?=dd}{?=ddi}{?=ddi}{?=ddiiiiii}}@BB{shared_ptr<jet_context>=^{jet_context}^{__shared_weak_count}}{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{map<SKCLightNode *, float __attribute__((ext_vector_type(4))), std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, float __attribute__((ext_vector_type(4)))> > >={__tree<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))> > >=^{__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true> >=Q}}}{vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}^^{SKCRenderSortInfo}{__compressed_pair<SKCRenderSortInfo **, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}}}{map<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > >, std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >={__tree<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >=^{__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true> >=Q}}}^{SKCSpriteNode}^{SKCLabelNode}{?=^{SKCRenderPass}^{SKCRenderSortGroup}I{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}^{__list_node<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}^{__list_node<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{__list_iterator<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}}}{vector<std::__1::shared_ptr<jet_framebuffer>, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}^{shared_ptr<jet_framebuffer>}{__compressed_pair<std::__1::shared_ptr<jet_framebuffer> *, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{vector<std::__1::shared_ptr<jet_constant>, std::__1::allocator<std::__1::shared_ptr<jet_constant> > >=^{shared_ptr<jet_constant>}^{shared_ptr<jet_constant>}{__compressed_pair<std::__1::shared_ptr<jet_constant> *, std::__1::allocator<std::__1::shared_ptr<jet_constant> > >=^{shared_ptr<jet_constant>}}}@}, name: _renderer
    // Error parsing type: , name: _viewScale
    // Error parsing type: , name: _viewTranslation
    shared_ptr_2ce53ef7 _framebuffer;
    shared_ptr_bb77cfd9 _frameBufferColorTexture;
    shared_ptr_bb77cfd9 _frameBufferDepthStencilTexture;
    unsigned int _colorRenderBuffer;
    unsigned int _depthStencilRenderBuffer;
    struct shared_ptr<jet_fence> _renderFence;
    CAEAGLLayer *_eaglLayer;
    NSUserDefaults *_skDefaults;
    _Bool _needsInitialUpdate;
    _Bool _didRunOnce;
    _Bool _viewFramebufferIsValid;
    // Error parsing type: , name: _viewFramebufferPixelSize
    _Bool _isBackgrounded;
    _Bool _allowsTransparency;
    _Bool _priorResignActivePausedState;
    unsigned long long _frameInterval;
    SKDisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_updateQueue;
    double _timePreviousUpdate;
    _Bool _prefersLowPowerGPU;
    _Bool _usesAsyncUpdateQueue;
    _Bool _hasRenderedOnce;
    _Bool _hasRenderedForCurrentUpdate;
    _Bool _disableInput;
    _Bool _mouseIsDown;
    SKNode *_nodeUnderCursor;
    SKTransition *_transition;
    SKScene *_nextScene;
    SKScene *_scene;
    _Bool _paused;
    NSData *_spriteArrayHint;
    NSMutableDictionary *_viewRenderOptions;
    NSMapTable *_touchMap;
    float _prevBackingScaleFactor;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_semaphore> *_renderSemaphore;
    int _queuedFrameCount;
    double _physicsDebugStrokeWidth;
    // Error parsing type: ^{SKCRenderer=@f{shared_ptr<SKCRenderPass>=^{SKCRenderPass}^{__shared_weak_count}}I{shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}}{list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > >={__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>=^{__list_node<std::__1::shared_ptr<SKCRenderPass>, void *>}^{__list_node<std::__1::shared_ptr<SKCRenderPass>, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > >=Q}}{?=II^^^{?=[4]}f^{SKCRenderer}f{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}^{jet_buffer}^{jet_buffer}^{jet_buffer}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}BI{SKCRenderBatch=BiII@^{jet_program}^{jet_texture}^{jet_texture}^{jet_sampler}^{jet_sampler}IIf}^{SKCStats}{vector<std::__1::shared_ptr<jet_buffer>, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}^{shared_ptr<jet_buffer>}{__compressed_pair<std::__1::shared_ptr<jet_buffer> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}}}}^{SKCStats}{SKCStats=^^?ddddi{?=dd}{?=dd}{?=ddi}{?=ddi}{?=ddiiiiii}}@BB{shared_ptr<jet_context>=^{jet_context}^{__shared_weak_count}}{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{map<SKCLightNode *, float __attribute__((ext_vector_type(4))), std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, float __attribute__((ext_vector_type(4)))> > >={__tree<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))> > >=^{__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true> >=Q}}}{vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}^^{SKCRenderSortInfo}{__compressed_pair<SKCRenderSortInfo **, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}}}{map<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > >, std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >={__tree<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >=^{__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true> >=Q}}}^{SKCSpriteNode}^{SKCLabelNode}{?=^{SKCRenderPass}^{SKCRenderSortGroup}I{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}^{__list_node<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}^{__list_node<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{__list_iterator<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}}}{vector<std::__1::shared_ptr<jet_framebuffer>, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}^{shared_ptr<jet_framebuffer>}{__compressed_pair<std::__1::shared_ptr<jet_framebuffer> *, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{vector<std::__1::shared_ptr<jet_constant>, std::__1::allocator<std::__1::shared_ptr<jet_constant> > >=^{shared_ptr<jet_constant>}^{shared_ptr<jet_constant>}{__compressed_pair<std::__1::shared_ptr<jet_constant> *, std::__1::allocator<std::__1::shared_ptr<jet_constant> > >=^{shared_ptr<jet_constant>}}}@}, name: __layerBackedRenderer
    struct CGSize _pixelSize;
}

+ (Class)layerClass;
// Error parsing type for property _layerBackedRenderer:
// Property attributes: T^{SKCRenderer=@f{shared_ptr<SKCRenderPass>=^{SKCRenderPass}^{__shared_weak_count}}I{shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}}{list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > >={__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>=^{__list_node<std::__1::shared_ptr<SKCRenderPass>, void *>}^{__list_node<std::__1::shared_ptr<SKCRenderPass>, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > >=Q}}{?=II^^^{?=[4]}f^{SKCRenderer}f{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}^{jet_buffer}^{jet_buffer}^{jet_buffer}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}BI{SKCRenderBatch=BiII@^{jet_program}^{jet_texture}^{jet_texture}^{jet_sampler}^{jet_sampler}IIf}^{SKCStats}{vector<std::__1::shared_ptr<jet_buffer>, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}^{shared_ptr<jet_buffer>}{__compressed_pair<std::__1::shared_ptr<jet_buffer> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}}}}^{SKCStats}{SKCStats=^^?ddddi{?=dd}{?=dd}{?=ddi}{?=ddi}{?=ddiiiiii}}@BB{shared_ptr<jet_context>=^{jet_context}^{__shared_weak_count}}{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{map<SKCLightNode *, float __attribute__((ext_vector_type(4))), std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, float __attribute__((ext_vector_type(4)))> > >={__tree<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))> > >=^{__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true> >=Q}}}{vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}^^{SKCRenderSortInfo}{__compressed_pair<SKCRenderSortInfo **, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}}}{map<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > >, std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >={__tree<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >=^{__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true> >=Q}}}^{SKCSpriteNode}^{SKCLabelNode}{?=^{SKCRenderPass}^{SKCRenderSortGroup}I{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}^{__list_node<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}^{__list_node<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{__list_iterator<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}}}{vector<std::__1::shared_ptr<jet_framebuffer>, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}^{shared_ptr<jet_framebuffer>}{__compressed_pair<std::__1::shared_ptr<jet_framebuffer> *, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{vector<std::__1::shared_ptr<jet_constant>, std::__1::allocator<std::__1::shared_ptr<jet_constant> > >=^{shared_ptr<jet_constant>}^{shared_ptr<jet_constant>}{__compressed_pair<std::__1::shared_ptr<jet_constant> *, std::__1::allocator<std::__1::shared_ptr<jet_constant> > >=^{shared_ptr<jet_constant>}}}@},V__layerBackedRenderer

@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(nonatomic) double physicsDebugStrokeWidth; // @synthesize physicsDebugStrokeWidth=_physicsDebugStrokeWidth;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic, getter=isPaused) _Bool paused;
- (float)_getViewContentsScale;
- (id)snapshot;
- (void)set_viewTranslation:(struct CGPoint)arg1;
- (struct CGPoint)_viewTranslation;
- (void)set_viewScale:(double)arg1;
- (double)_viewScale;
@property(readonly) NSMutableDictionary *options;
- (void)notifyWillRenderContent;
- (_Bool)hasValidViewFramebuffer;
- (id)getRenderOptions;
- (void)_renderContent;
- (void)renderContent;
- (void)willRenderContent;
-     // Error parsing type: {?=[4]}16@0:8, name: getViewTransform
-     // Error parsing type: 16@0:8, name: getViewport
-     // Error parsing type: ^{SKCNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@QfB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}BqBffBB{?=[4]}{?=[4]}}16@0:8, name: getRootNode
- (shared_ptr_2ce53ef7)nextFramebuffer;
-     // Error parsing type: ^{SKCRenderer=@f{shared_ptr<SKCRenderPass>=^{SKCRenderPass}^{__shared_weak_count}}I{shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}}{list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > >={__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>=^{__list_node<std::__1::shared_ptr<SKCRenderPass>, void *>}^{__list_node<std::__1::shared_ptr<SKCRenderPass>, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > >=Q}}{?=II^^^{?=[4]}f^{SKCRenderer}f{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}^{jet_buffer}^{jet_buffer}^{jet_buffer}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}BI{SKCRenderBatch=BiII@^{jet_program}^{jet_texture}^{jet_texture}^{jet_sampler}^{jet_sampler}IIf}^{SKCStats}{vector<std::__1::shared_ptr<jet_buffer>, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}^{shared_ptr<jet_buffer>}{__compressed_pair<std::__1::shared_ptr<jet_buffer> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}}}}^{SKCStats}{SKCStats=^^?ddddi{?=dd}{?=dd}{?=ddi}{?=ddi}{?=ddiiiiii}}@BB{shared_ptr<jet_context>=^{jet_context}^{__shared_weak_count}}{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{map<SKCLightNode *, float __attribute__((ext_vector_type(4))), std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, float __attribute__((ext_vector_type(4)))> > >={__tree<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))> > >=^{__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true> >=Q}}}{vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}^^{SKCRenderSortInfo}{__compressed_pair<SKCRenderSortInfo **, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}}}{map<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > >, std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >={__tree<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >=^{__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true> >=Q}}}^{SKCSpriteNode}^{SKCLabelNode}{?=^{SKCRenderPass}^{SKCRenderSortGroup}I{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}^{__list_node<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}^{__list_node<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{__list_iterator<SKCRenderSortInfo *, void *>=^{__list_node<SKCRenderSortInfo *, void *>}}}{vector<std::__1::shared_ptr<jet_framebuffer>, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}^{shared_ptr<jet_framebuffer>}{__compressed_pair<std::__1::shared_ptr<jet_framebuffer> *, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{vector<std::__1::shared_ptr<jet_constant>, std::__1::allocator<std::__1::shared_ptr<jet_constant> > >=^{shared_ptr<jet_constant>}^{shared_ptr<jet_constant>}{__compressed_pair<std::__1::shared_ptr<jet_constant> *, std::__1::allocator<std::__1::shared_ptr<jet_constant> > >=^{shared_ptr<jet_constant>}}}@}16@0:8, name: chooseViewRenderer
- (id)textureFromNode:(id)arg1 crop:(struct CGRect)arg2;
- (void)_setUpdateQueue:(id)arg1;
- (void)renderToIOSurfaceID:(unsigned int)arg1 withScaleFactor:(double)arg2;
@property(nonatomic) long long frameInterval;
- (void)writeContentsToPNG:(id)arg1;
- (void)runOnce;
- (void)onInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 updateQueue:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)textureFromNode:(id)arg1;
- (void)_update:(double)arg1;
@property(readonly, nonatomic) SKScene *scene;
- (void)_reshape;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)presentScene:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) _Bool allowsTransparency;
- (_Bool)isOpaque;
- (double)alphaValue;
- (void)remakeFramebuffer:(double)arg1;
- (void)dealloc;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromScene:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toScene:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopRenderCallbacks;
- (void)startRenderCallbacks;
- (void)setUpRenderCallback;
- (_Bool)_usesAsyncUpdateQueue;
- (void)set_usesAsyncUpdateQueue:(_Bool)arg1;
@property(nonatomic, getter=isAsynchronous) _Bool asynchronous;
- (void)_renderToIOSurfaceID:(unsigned int)arg1 scaleFactor:(float)arg2 asynchronous:(_Bool)arg3 preRender:(CDUnknownBlockType)arg4 postRender:(CDUnknownBlockType)arg5;
- (void)_renderSynchronouslyForTime:(double)arg1 preRender:(CDUnknownBlockType)arg2 postRender:(CDUnknownBlockType)arg3;
- (void)_vsyncRenderForTime:(double)arg1 preRender:(CDUnknownBlockType)arg2 postRender:(CDUnknownBlockType)arg3;
- (void)renderForTime:(double)arg1 shouldBlock:(_Bool)arg2;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)_commonInit;
- (void)_ensureRenderer;
- (void)remakeFramebuffer;
- (void)debugPrint;
- (id)captureToFile:(id)arg1;
- (id)archiveToFile:(id)arg1;
- (void)_showAllStats;
- (_Bool)_showsCPUStats;
- (void)set_showsCPUStats:(_Bool)arg1;
- (_Bool)_showsGPUStats;
- (void)set_showsGPUStats:(_Bool)arg1;
@property(nonatomic) _Bool showsDrawCount;
@property(nonatomic) _Bool showsNodeCount;
@property(nonatomic) _Bool showsQuadCount;
@property(nonatomic) _Bool showsFields;
@property(nonatomic) _Bool showsPhysics;
@property(nonatomic) _Bool showsFPS;
@property(nonatomic) _Bool ignoresSiblingOrder;
@property(nonatomic) _Bool shouldCullNonVisibleNodes;

@end
