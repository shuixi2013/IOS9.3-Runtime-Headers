//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Weather/WeatherHTTPRequest.h>

@interface WeatherXMLHTTPRequest : WeatherHTTPRequest
{
}

- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)processDocument:(struct _xmlDoc *)arg1;
- (void)didProcessDocument;
- (void)willProcessDocument;
- (void)_forceRawDataDump:(id)arg1;
- (void)request:(id)arg1 receivedResponseData:(id)arg2;

@end
