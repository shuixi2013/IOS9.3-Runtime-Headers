//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface SKUIURL : NSObject <NSCopying>
{
    NSMutableDictionary *_queryDictionary;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *underlyingURL; // @synthesize underlyingURL=_url;
@property(copy, nonatomic) NSString *referrerURLString; // @synthesize referrerURLString=_referrerURLString;
@property(copy, nonatomic) NSString *referrerApplicationName; // @synthesize referrerApplicationName=_referrerApplicationName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_searchURLBagKey;
- (id)_searchGroupForSearchKind:(id)arg1;
- (id)_queryDictionary;
- (id)valueForQueryParameter:(id)arg1;
@property(readonly, nonatomic) NSString *URLBagKey;
@property(readonly, nonatomic) NSString *searchTerm;
@property(readonly, nonatomic) NSString *redeemCode;
@property(readonly, copy, nonatomic) NSDictionary *queryStringDictionary;
- (id)newURLRequestWithBaseURL:(id)arg1;
- (id)newURLRequest;
@property(readonly, nonatomic) NSString *actionString;
- (id)initWithURLBagKey:(id)arg1;
- (id)initWithURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (id)initWithURL:(id)arg1;

@end

