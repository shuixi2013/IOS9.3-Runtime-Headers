//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@interface ML3UnaryPredicate : ML3Predicate
{
    ML3Predicate *_predicate;
}

+ (id)predicateWithPredicate:(id)arg1;
@property(retain, nonatomic) ML3Predicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)databaseStatementParameters;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end

