//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedRouteTransitTripSection.h>

@interface GEOComposedRouteTransitTripSection (RenderRegion)
- (void)updateLabelExternalObjectsInRenderRegion:(id)arg1 previousSection:(id)arg2 nextSection:(id)arg3 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg4 nodeIDToStyleAttributeMap:(unordered_map_4f9963f1 *)arg5;
- (id)unsnappedPathsInOverlay:(id)arg1;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(_Bool)arg3 verifySnapping:(_Bool)arg4;
- (_Bool)_getEndPoints:(id)arg1 gmRect:(const CDStruct_90e2a262 *)arg2 result:(vector_e20517dc *)arg3;
- (_Bool)_getEndPoints:(id)arg1 vkRect:(const CDStruct_d2b197d1 *)arg2 result:(vector_e20517dc *)arg3;
- (void)_getPointOnPath:(id)arg1 index:(int)arg2 bounds:(const CDStruct_d2b197d1 *)arg3 result:(Matrix_2bdd42a3 *)arg4;
@end
