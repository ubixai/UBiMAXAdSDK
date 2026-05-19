//
//  UMTAdnInfo.h
//  UBiMAXAdSDK
//
//  Created by guoqiang on 2025/1/16.
//

#import "UMTInterfaceBaseObject.h"

NS_ASSUME_NONNULL_BEGIN

///  adn 扩展参数 子平台名称,
///  仅支持 UBiXAdx
extern NSString *const UMTAdnExtraParam_PlatformName;
///  adn 扩展参数 子平台广告位,
///  仅支持 UBiXAdx
extern NSString *const UMTAdnExtraParam_PlatformSlotId;
///  adn 扩展参数 广告位,
///  仅支持 UBiXAdx
extern NSString *const UMTAdnExtraParam_SlotId;


@interface UMTAdnInfo : UMTInterfaceBaseObject

@property (nonatomic, copy, readonly) NSString *adnId;

@property (nonatomic, copy, readonly) NSString *adnName;

@property (nonatomic, copy, readonly) NSString *adnSlotId;

@property (nonatomic, assign) uint64_t price;

@property (nonatomic, strong) NSDictionary *extraParams;

@end

NS_ASSUME_NONNULL_END
