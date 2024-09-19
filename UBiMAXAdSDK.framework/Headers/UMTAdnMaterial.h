//
//  UMTAdnMaterial.h
//  UMTAdSDK
//
//  Created by guoqiang on 2024/8/16.
//

#import "UMTInterfaceBaseObject.h"
#import "UMTGlobalDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMTAdnMaterial : UMTInterfaceBaseObject
// 素材url
@property (nonatomic, copy) NSString *materialUrl;
// 视频封面
@property (nonatomic, copy) NSString *coverImgUrl;
// md5
@property (nonatomic, copy) NSString *materialId;

@property (nonatomic, assign) UMTAdnMaterialType materialType;

@property (nonatomic, copy) NSString *rulersId;

@end

NS_ASSUME_NONNULL_END
