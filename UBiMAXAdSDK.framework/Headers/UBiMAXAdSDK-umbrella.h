#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "UMTAdapterRewardAdInfo.h"
#import "UMTAdnSDKInitConfig.h"
#import "UMTCustomAdapter.h"
#import "UMTCustomAdapterDelegate.h"
#import "UMTCustomConfigAdapter.h"
#import "UMTCustomInterstitialAdapter.h"
#import "UMTCustomInterstitialAdapterBridge.h"
#import "UMTCustomNativeAdapter.h"
#import "UMTCustomNativeAdapterBridge.h"
#import "UMTCustomRewardedVideoAdapter.h"
#import "UMTCustomRewardedVideoAdapterBridge.h"
#import "UMTCustomSplashAdapter.h"
#import "UMTCustomSplashAdapterBridge.h"
#import "UMTDislikeReason.h"
#import "UMTImage.h"
#import "UMTMediationNativeAd.h"
#import "UMTMediationNativeAdData.h"
#import "UMTMediationNativeAdViewCreator.h"
#import "UMTAd.h"
#import "UMTAdManager.h"
#import "UMTAdnMaterial.h"
#import "UMTAdSDK.h"
#import "UMTAdSDKConfiguration.h"
#import "UMTAdSDKManager.h"
#import "UMTError.h"
#import "UMTGlobalDefine.h"
#import "UMTInterfaceBaseObject.h"
#import "UMTMediaBidResult.h"
#import "UMTNativeAdView.h"

FOUNDATION_EXPORT double UBiMAXAdSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char UBiMAXAdSDKVersionString[];

