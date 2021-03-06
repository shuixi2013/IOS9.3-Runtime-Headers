//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@class NSArray;

@interface AKManhattanLinesAnnotation : AKRectangularShapeAnnotation
{
    NSArray *_pathPoints;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property(retain) NSArray *pathPoints; // @synthesize pathPoints=_pathPoints;
@property struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (struct CGRect)hitTestBounds;
- (id)displayName;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;

@end

