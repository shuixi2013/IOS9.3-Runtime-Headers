//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSULocale;

__attribute__((visibility("hidden")))
@interface TSCECellValue : NSObject
{
    int mValueType;
    TSULocale *mLocale;
}

@property(retain, nonatomic) TSULocale *locale; // @synthesize locale=mLocale;
@property(nonatomic) int valueType; // @synthesize valueType=mValueType;
- (void)encodeCellValueToArchive:(struct CellValueArchive *)arg1;
- (id)initCellValueWithArchive:(const struct CellValueArchive *)arg1 locale:(id)arg2;
- (_Bool)isEqualToCellValue:(id)arg1;
- (CDStruct_28403e59)formatStruct;
- (id)displayString;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;

@end

