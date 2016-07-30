//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class SGSqliteDatabase;

@interface SGPreparedStatement : NSObject <NSCopying>
{
    SGSqliteDatabase *_owner;
    _Bool _isFinalized;
    struct sqlite3_stmt *_stmt;
}

@property(readonly, nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithStatementPointer:(struct sqlite3_stmt *)arg1 owner:(id)arg2;

@end
