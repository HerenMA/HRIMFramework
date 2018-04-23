//
//  HRIMPatientParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/18.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMParam.h"

/**
 *  监听双向转诊（HRIM_METHOD_TYPE_BOTH_WAY_REFERRAL）
 || 监听挂号（HRIM_METHOD_TYPE_REGISTER）
 || 监听开住院证（HRIM_METHOD_TYPE_HOSPITAL_CERTIFICATE）
 || 监听开检查单（HRIM_METHOD_TYPE_INSPECT_REPORT）
 || 监听开检验单（HRIM_METHOD_TYPE_CHECKOUT_REPORT）
 || 监听患者信息（HRIM_METHOD_TYPE_PATIENT_INFO）
 || 监听患者报告（HRIM_METHOD_TYPE_PATIENT_REPORT）
 传出参数
 */
@interface HRIMPatientParam : HRIMParam

/// 用户的和仁Id
@property (strong, nonatomic) NSString *_Nonnull herenId;
/// 用户的和仁用户名
@property (strong, nonatomic) NSString *_Nonnull herenName;
/// 用户的身份证号
@property (strong, nonatomic) NSString *_Nonnull idCard;
/// 用户的visitId
@property (strong, nonatomic) NSString *_Nonnull visitId;
/// 用户的手机号
@property (strong, nonatomic) NSString *_Nonnull cellphone;
/// 用户的性别
@property (strong, nonatomic) NSString *_Nonnull gender;
/// 附加值
@property (strong, nonatomic) NSDictionary *_Nonnull extras;

@end
