//
//  HRIMOutsideInfoParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/18.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMPatientParam.h"

/**
 *  监听添加外来资料（HRIM_METHOD_TYPE_OUTSIDE_INFO）传出参数
 */
@interface HRIMOutsideInfoParam : HRIMPatientParam

/// 原图 URL
@property (strong, nonatomic) NSString *_Nonnull originalURL;
/// 缩略图 URL
@property (strong, nonatomic) NSString *_Nonnull thumbnailURL;

@end
