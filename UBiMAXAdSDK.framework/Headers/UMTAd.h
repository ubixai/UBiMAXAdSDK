//
//  UMTAd.h
//  UMTAdSDK
//
//  Created by guoqiang on 2024/7/3.
//

#import <Foundation/Foundation.h>
#import "UMTInterfaceBaseObject.h"
#import "UMTGlobalDefine.h"

NS_ASSUME_NONNULL_BEGIN

@class UMTAd;
@class UMTError;

@protocol UMTAdDelegate <NSObject>
@end

typedef NS_ENUM(NSInteger, UMTAdShowStatus) {
    UMTAdShowStatus_UnKnown = 0,        // 未知
    UMTAdShowStatus_didShow = 1,        // 已展示
    UMTAdShowStatus_didShowFailed = 2,  // 展示失败
};

@interface UMTAd : UMTInterfaceBaseObject

@property (nonatomic, weak) id <UMTAdDelegate> loadDelegate;

@property (nonatomic, weak) id <UMTAdDelegate> showDelegate;

@property (nonatomic, copy) NSString *slotId;

@property (nonatomic, assign) UMTAdType adType;

@property (nonatomic, assign) UMTAdShowStatus showStatus;

- (instancetype)initWithSlotId:(NSString *)slotId;

- (BOOL)isReady;

@end

NS_ASSUME_NONNULL_END

