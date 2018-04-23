//
//  HRIMUnReadMessageParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/18.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMParam.h"

/**
 *  获取未读消息数（HRIM_METHOD_TYPE_UNREAD_MESSAGES）传出参数
 */
@interface HRIMUnReadMessageParam : HRIMParam

/// 未读总数
@property (assign, nonatomic) NSInteger unReadNumber;

@end
