//
//  UMTMediaBidResult.h
//  UMTAdSDK
//
//  Created by guoqiang on 2024/7/11.
//

#import <UBiMAXAdSDK/UMTAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    /// 其他
    UMTBidLossTypeOther = 0,
    /// 广告出价低于最高价
    UMTBidLossTypeNormal = 1,
    /// 底价过滤
    UMTBidLossTypePriceFilter = 2,
    
} UMTBidLossType;

@interface UMTMediaBidResult : UMTInterfaceBaseObject
@property (nonatomic, assign) BOOL win;

@property (nonatomic, assign, readonly) NSInteger winnerPrice;

@property (nonatomic, assign, readonly) NSInteger secondPrice;

@property (nonatomic, copy, readonly) NSString *lossDescription;

@property (nonatomic, assign, readonly) UMTBidLossType lossType;

@property (nonatomic, copy, readonly) NSString *winnerAdnID;

@property (nonatomic, copy, readonly) NSDictionary *ext;

@property (nonatomic, strong, readonly) id originNativeAdData;
@end

NS_ASSUME_NONNULL_END
