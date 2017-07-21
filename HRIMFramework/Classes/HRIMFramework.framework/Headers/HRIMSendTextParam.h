//
//  HRIMSendTextParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/18.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMParam.h"

/**
 *  发送文本消息（HRIM_METHOD_TYPE_SEND_TEXT_MESSAGE）传入参数
 */
@interface HRIMSendTextParam : HRIMParam

/// 文本
@property (strong, nonatomic) NSString *_Nonnull text;

@end
