//
//  HRIMReferralParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/22.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMParam.h"

/**
 *  监听转诊（HRIM_METHOD_TYPE_REFERRAL）传出参数
 */
@interface HRIMReferralParam : HRIMParam

/// 正在对话的医生和仁Id
@property (strong, nonatomic) NSString *_Nonnull doctorId;
/// 正在对话的医生名称
@property (strong, nonatomic) NSString *_Nonnull doctorName;

@end
