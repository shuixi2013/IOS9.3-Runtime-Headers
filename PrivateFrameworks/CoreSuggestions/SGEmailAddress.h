//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGEmailAddress : SGLabeledObject
{
    NSString *_emailAddress;
}

+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 origin:(id)arg5;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToEmailAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 origin:(id)arg5;

@end

