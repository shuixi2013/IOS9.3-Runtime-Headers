//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCDPlayModeButton.h>

@class UIImage;

@interface MCDLikeButton : MCDPlayModeButton
{
    UIImage *_heartImage;
    UIImage *_heartFilledImage;
}

@property(retain, nonatomic) UIImage *heartFilledImage; // @synthesize heartFilledImage=_heartFilledImage;
@property(retain, nonatomic) UIImage *heartImage; // @synthesize heartImage=_heartImage;
- (void).cxx_destruct;
- (id)colorForTouchFocusLayerSelected;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

