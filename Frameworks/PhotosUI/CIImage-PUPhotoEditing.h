//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIImage.h>

@interface CIImage (PUPhotoEditing)
+ (double)pu_angleFromOrientation:(int)arg1;
+ (int)pu_orientationFromAngle:(double)arg1;
- (id)pu_loadAdjustments:(id)arg1 orientation:(int)arg2;
- (_Bool)pu_getSuggestionForCropRect:(struct CGRect *)arg1 straightenAngle:(double *)arg2 orientation:(int)arg3;
@end

