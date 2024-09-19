//
//  UMTAdSDKConfiguration.h
//  UMTAdSDK
//
//  Created by guoqiang on 2024/7/10.
//

#import <Foundation/Foundation.h>
#import <UBiMAXAdSDK/UMTInterfaceBaseObject.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

/// 用户性别, 0: Unknown, 1: Male, 2: Female
typedef NS_ENUM (int, UMTUserInfoGender) {
    UMTUserInfoGender_Unknown                  = 0,
    UMTUserInfoGender_Male                     = 1,
    UMTUserInfoGender_Female                   = 2,
};
/// 付费用户, 0: 未知；1: 否；2: 是
typedef NS_ENUM (int, UMTUserInfoSubscribe) {
    UMTUserInfoSubscribe_Unknown              = 0,
    UMTUserInfoSubscribe_No                   = 1,
    UMTUserInfoSubscribe_Yes                  = 2,
};

@interface UMTUserInfoConfig : UMTInterfaceBaseObject
/// 用户在媒体上注册的 ID
@property (nonatomic, copy) NSString *userId;
/// 渠道，字符的规则：[A-Za-z0-9_]
@property (nonatomic, copy) NSString *channel;
/// 子渠道， 字符的规则：[A-Za-z0-9_]
@property (nonatomic, copy) NSString *subChannel;
/// 用户年龄，用户的年龄段。
/// [1-18):1;[18-24):18;[24-31):24;[31- 41):31;[41-51):41;50 以上传 50
@property (nonatomic, assign) int age;
/// 用户性别
@property (nonatomic, assign) UMTUserInfoGender gender;
/// 付费用户, 0: 未知；1: 否；2: 是
@property (nonatomic, assign) UMTUserInfoSubscribe isSubscriber;
/// 流量分组ID或者标签ID
@property (nonatomic, copy) NSString *pubSegmentId;

@end

@interface UMTAdSDKConfiguration : NSObject

+ (instancetype)configuration NS_SWIFT_NAME(configuration());

///Register the App key that’s already been applied before requesting an ad from Network.
/// the unique identifier of the App
@property (nonatomic, copy, nullable) NSString *appID;
/**  是否允许用户读取网络状态信息， 默认允许  **/
@property (nonatomic, assign) BOOL canReadNetType;
/**  是否允许用户读取定位信息， 默认不允许  **/
@property (nonatomic, assign) BOOL locationEnabled;
#if __has_include(<CoreLocation/CoreLocation.h>)
/** 允许用户传递定位信息，如果用户传递了此值，则聚合SDK不再进行该值的获取 */
@property (nonatomic, assign)CLLocationDegrees latitude;
@property (nonatomic, assign)CLLocationDegrees longitude;
#endif
/**  是否允许用户读取idfa， 默认不允许  **/
@property (nonatomic, assign) BOOL canReadIDFA;
/** 用户不允许读取idfa，需传入自定义值 */
@property (nonatomic, copy, nullable) NSString *customIDFA;
/**  是否限制个性化广告推荐 默认不限制   **/
@property (nonatomic, assign) BOOL limitPersonalAds;
/**  是否打开日志模式，默认不打开  **/
@property (nonatomic, assign) BOOL debugLogEnabled;
// 流量分组信息配置
@property (nonatomic, strong) UMTUserInfoConfig *userInfoConfig;

@end

NS_ASSUME_NONNULL_END
