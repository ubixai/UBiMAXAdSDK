//
//  UMTMediaBidResult.h
//  UMTAdSDK
//
//  Created by guoqiang on 2024/7/11.
//

#import <UBiMAXAdSDK/UMTAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMTMediaBidResult : UMTInterfaceBaseObject
@property (nonatomic, assign) BOOL win;

@property (nonatomic, assign, readonly) NSInteger winnerPrice;

@property (nonatomic, copy, readonly) NSString *lossDescription;

@property (nonatomic, copy, readonly) NSString *winnerAdnID;

@property (nonatomic, copy, readonly) NSDictionary *ext;

@property (nonatomic, strong, readonly) id originNativeAdData;
@end

NS_ASSUME_NONNULL_END
