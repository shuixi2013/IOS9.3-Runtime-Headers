//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine;

@interface AKFormFeatureBox : AKFormFeature
{
    _Bool _widthExpands;
    _Bool _multiline;
    unsigned long long _flags;
    unsigned long long _alignment;
    AKFormFeatureLine *_baseline;
    struct CGRect _enclosingRegionRect;
}

+ (id)boxWithRect:(struct CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4;
@property(nonatomic) struct CGRect enclosingRegionRect; // @synthesize enclosingRegionRect=_enclosingRegionRect;
@property(retain, nonatomic) AKFormFeatureLine *baseline; // @synthesize baseline=_baseline;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic, getter=isMultiline) _Bool multiline; // @synthesize multiline=_multiline;
@property(nonatomic) _Bool widthExpands; // @synthesize widthExpands=_widthExpands;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4;

@end

