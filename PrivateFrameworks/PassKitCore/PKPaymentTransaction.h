//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CLLocation, NSDate, NSDecimalNumber, NSString, PKMerchant;

@interface PKPaymentTransaction : NSObject <NSSecureCoding>
{
    _Bool _processedForLocation;
    _Bool _processedForMerchantCleanup;
    _Bool _hasAssociatedPaymentApplication;
    NSString *_identifier;
    NSString *_serviceIdentifier;
    NSString *_transactionIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    NSDate *_transactionDate;
    PKMerchant *_merchant;
    NSString *_locality;
    NSString *_administrativeArea;
    NSDate *_locationDate;
    double _locationLatitude;
    double _locationLongitude;
    double _locationAltitude;
    double _locationHorizontalAccuracy;
    double _locationVerticalAccuracy;
    long long _transactionStatus;
    long long _transactionType;
    long long _technologyType;
    unsigned long long _transactionSources;
}

+ (_Bool)supportsSecureCoding;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1 withDictionary:(id)arg2;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;
@property(nonatomic) unsigned long long transactionSources; // @synthesize transactionSources=_transactionSources;
@property(nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
@property(nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(nonatomic) long long transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(nonatomic) _Bool hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property(nonatomic) _Bool processedForMerchantCleanup; // @synthesize processedForMerchantCleanup=_processedForMerchantCleanup;
@property(nonatomic) _Bool processedForLocation; // @synthesize processedForLocation=_processedForLocation;
@property(nonatomic) double locationVerticalAccuracy; // @synthesize locationVerticalAccuracy=_locationVerticalAccuracy;
@property(nonatomic) double locationHorizontalAccuracy; // @synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy;
@property(nonatomic) double locationAltitude; // @synthesize locationAltitude=_locationAltitude;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(retain, nonatomic) NSDate *locationDate; // @synthesize locationDate=_locationDate;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool hasNotificationServiceSource;
@property(readonly, nonatomic) _Bool hasLocalDeviceSource;
- (id)description;
@property(retain, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSString *displayLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPaymentTransaction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end
