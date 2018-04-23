//
//  HRIMShareCaseParam.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/19.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRIMParam.h"

/**
 *  监听共享病历好友
 */
@interface HRIMShareCaseWithFriend : NSObject

/// 好友和仁ID
@property (strong, nonatomic) NSString *herenId;
/// 好友昵称
@property (strong, nonatomic) NSString *nickName;
/// 好友头像URL
@property (strong, nonatomic) NSString *faceURL;
/// 好友类型（0=未知，1=患者，2=医生）
@property (assign, nonatomic) NSUInteger userType;

@end

/**
 *  监听共享病历好友分组
 */
@interface HRIMShareCaseWithGroups : NSObject

/// 好友分组名称
@property (strong, nonatomic) NSString *groupName;
/// 好友分组成员列表（HRIMShareCaseWithFriend*）
@property (strong, nonatomic) NSArray *groupFriends;

@end

/**
 *  监听共享病历（HRIM_METHOD_TYPE_SHARE_CASE）传出参数
 */
@interface HRIMShareCaseParam : HRIMParam

/// 带分组信息的好友列表（HRIMShareCaseWithGroups*）
@property (strong, nonatomic) NSArray *friendList;

@end
