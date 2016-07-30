//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPrintPageRenderer.h>

@protocol QLPrintPageRendererDataSource;

__attribute__((visibility("hidden")))
@interface QLPrintPageRenderer : UIPrintPageRenderer
{
    id <QLPrintPageRendererDataSource> _dataSource;
    long long _cachedNumberOfPages;
    struct CGSize _sizeWhenNumberOfPagesWasCached;
    _Bool _printingDone;
    long long _numberOfPrintedPages;
}

@property id <QLPrintPageRendererDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (long long)numberOfPages;
- (void)prepareForPrinting;
- (id)init;

@end
