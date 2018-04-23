//
//  HRIMSendReferralParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/18.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMParam.h"

/**
 *  发送转诊消息（HRIM_METHOD_TYPE_SEND_REFERRAL）传入参数
 */
@interface HRIMSendReferralParam : HRIMParam

/// 患者和仁Id
@property (strong, nonatomic) NSString *_Nonnull patientId;
/// 患者名称
@property (strong, nonatomic) NSString *_Nonnull patientName;

@end
