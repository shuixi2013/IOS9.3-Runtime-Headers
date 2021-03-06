//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSHTTPURLResponse, NSMutableURLRequest, NSString, NSURLAuthenticationChallenge, NSURLResponse, RUIObjectModel, RUIPage, RemoteUIController, UINavigationController;

@protocol RemoteUIControllerDelegate <NSObject>

@optional
- (void)remoteUIController:(RemoteUIController *)arg1 willLoadRequest:(NSMutableURLRequest *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveObjectModel:(RUIObjectModel *)arg2 actionSignal:(int *)arg3;
- (RUIPage *)remoteUIController:(RemoteUIController *)arg1 createPageWithName:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)remoteUIControllerDidDismiss:(RemoteUIController *)arg1;
- (void)remoteUIController:(RemoteUIController *)arg1 didDismissModalNavigationWithObjectModels:(NSArray *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 willPresentModalNavigationController:(UINavigationController *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didRemoveObjectModel:(RUIObjectModel *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 willPresentObjectModel:(RUIObjectModel *)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didFinishLoadWithError:(NSError *)arg2;
- (_Bool)remoteUIController:(RemoteUIController *)arg1 shouldLoadRequest:(NSMutableURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

