//
//  HRIMSendShareCaseParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/18.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMParam.h"

/**
 *  消息类别枚举
 */
typedef NS_OPTIONS(NSUInteger, HRIMSendShareCaseDisplayButton) {
    /**
     *  全部
     */
    SHARECASE_DISPLAYBUTTON_ALL = 0,
    /**
     *  报告
     */
    SHARECASE_DISPLAYBUTTON_REPORT = 1,
    /**
     *  信息
     */
    SHARECASE_DISPLAYBUTTON_INFO = 2
};


/**
 *  发送共享病历消息（HRIM_METHOD_TYPE_SEND_SHARE_CASE）传入参数
 */
@interface HRIMSendShareCaseParam : HRIMParam

/// 显示按钮
@property (assign, nonatomic) HRIMSendShareCaseDisplayButton displayButton;
/// 患者和仁Id
@property (strong, nonatomic) NSString *_Nonnull patientId;
/// 患者名称
@property (strong, nonatomic) NSString *_Nonnull patientName;
/// 共享患者的visitId
@property (strong, nonatomic) NSString *_Nonnull visitId;
/// 患者身份证号
@property (strong, nonatomic) NSString *_Nonnull idCard;
/// 附加值
@property (strong, nonatomic) NSDictionary *_Nonnull extras;

@end
