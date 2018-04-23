//
//  HRIMChatParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/18.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMParam.h"

/**
 *  打开单聊界面（HRIM_METHOD_TYPE_C2C_CHAT）
 || 打开群聊界面（HRIM_METHOD_TYPE_GROUP_CHAT）
 传入参数
 */
@interface HRIMChatParam : HRIMParam

/// 单聊，对方和仁Id || 群聊，群组Id
@property (strong, nonatomic) NSString *_Nonnull receiver;

@end
