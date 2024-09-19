//
//  UMTAdManager.h
//  UMTAdSDK
//
//  Created by guoqiang on 2024/8/15.
//

#import <UBiMAXAdSDK/UMTAdSDK.h>
#import "UMTAd.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString * const kUMTKey_Splash_Window;

@protocol UMTAdDelegate;
@class UMTAd;

@interface UMTAdManager : UMTInterfaceBaseObject

+ (instancetype)sharedManager;

- (void)loadAd:(UMTAd *)ad extra:(NSDictionary *)extra delegate:(id<UMTAdDelegate>)delegate;

- (BOOL)isReadyForAd:(UMTAd *)ad;

- (void)showAd:(UMTAd *)ad extra:(NSDictionary *)extra delegate:(id<UMTAdDelegate>)delegate;

- (void)registerViewAd:(UMTAd *)ad extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
