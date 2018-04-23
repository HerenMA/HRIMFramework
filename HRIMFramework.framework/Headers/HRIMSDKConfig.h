//
//  HRIMSDKConfig.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/14.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/////////////////////////////////////////////////////////
///  系统
/////////////////////////////////////////////////////////

/**
 *  系统配置
 */
@interface MBIMSystemConfig : NSObject

/// 系统识别码
@property (strong, nonatomic) NSString *_Nonnull sysCode;

@end


/////////////////////////////////////////////////////////
///  群组
/////////////////////////////////////////////////////////

/**
 *  群组配置
 */
@interface HRIMTeamConfig : NSObject

/// 显示聊天记录？
@property (assign, nonatomic) BOOL msgHistoryShow;

@end

/////////////////////////////////////////////////////////
///  组织架构
/////////////////////////////////////////////////////////

/**
 *  组织架构配置
 */
@interface HRIMOrganizationCofing : NSObject

/// 显示?
@property (assign, nonatomic) BOOL show;
/// 组织架构ID
@property (strong, nonatomic) NSString *_Nonnull organizationId;

@end


/////////////////////////////////////////////////////////
///  分享
/////////////////////////////////////////////////////////

/**
 *  分享配置
 */
@interface HRIMShareConfig : NSObject

/// 分享文本
@property (strong, nonatomic) NSString *_Nonnull shareText;

@end


/////////////////////////////////////////////////////////
///  网址
/////////////////////////////////////////////////////////

/**
 *  网址配置
 */
@interface HRIMURLConfig : NSObject

/// 患者主页网址
@property (strong, nonatomic) NSString *_Nonnull patient_profile_url;
/// 医生主页网址
@property (strong, nonatomic) NSString *_Nonnull doctor_profile_url;

@end


/////////////////////////////////////////////////////////
///  聊天
/////////////////////////////////////////////////////////

/**
 *  聊天类型
 */
typedef NS_ENUM(NSInteger, HRIMChatType) {
    /**
     *  医患单聊
     */
    CHAT_TYPE_DPCHAT = 1,

    /**
     *  医医单聊
     */
    CHAT_TYPE_DDCHAT = 2,

    /**
     *  群聊
     */
    CHAT_TYPE_GCHAT = 3
};

/**
 *  聊天功能
 */
typedef NS_OPTIONS(NSUInteger, HRIMChatFunction) {
    /**
     *  照片（按钮）
     */
    CHAT_FUNCTION_IMAGE = 1 << 0,

    /**
     *  拍摄（按钮）
     */
    CHAT_FUNCTION_PHOTO = 1 << 1,

    /**
     *  语音（按钮）
     */
    CHAT_FUNCTION_SOUND = 1 << 2,

    /**
     *  小视频（按钮）
     */
    CHAT_FUNCTION_VIDEO = 1 << 3,

    /**
     *  音频聊天（按钮）
     */
    CHAT_FUNCTION_AUDIO_CHAT = 1 << 4,

    /**
     *  视频聊天（按钮）
     */
    CHAT_FUNCTION_VIDEO_CHAT = 1 << 5,

    /**
     *  双向转诊（按钮）
     */
    CHAT_FUNCTION_BOTH_WAY_REFERRAL = 1 << 6,

    /**
     *  转诊（按钮）
     */
    CHAT_FUNCTION_REFERRAL = 1 << 7,

    /**
     *  挂号（按钮）
     */
    CHAT_FUNCTION_REGISTER = 1 << 8,

    /**
     *  开住院证（按钮）
     */
    CHAT_FUNCTION_HOSPITAL_CERTIFICATE = 1 << 9,

    /**
     *  开检查单（按钮）
     */
    CHAT_FUNCTION_INSPECT_REPORT = 1 << 10,

    /**
     *  开检验单（按钮）
     */
    CHAT_FUNCTION_CHECKOUT_REPORT = 1 << 11,

    /**
     *  患者资料（右角菜单医患单聊时医生有效）
     */
    CHAT_FUNCTION_PATIENT_DATA = 1 << 12,

    /**
     *  患者报告（右角菜单医患单聊时医生有效）
     */
    CHAT_FUNCTION_PATIENT_REPORT = 1 << 13,

    /**
     *  共享病历（按钮）
     */
    CHAT_FUNCTION_SHARE_CASE = 1 << 14,

    /**
     *  添加外来资料（快捷菜单）
     */
    CHAT_FUNCTION_OUTSIDE_INFO = 1 << 15
};


/**
 *  聊天配置
 */
@interface HRIMChatConfig : NSObject

/// 医患单聊患者配置（HRIMChatFunction*）
@property (assign, nonatomic) HRIMChatFunction dppChat;
/// 医患单聊医生配置（HRIMChatFunction*）
@property (assign, nonatomic) HRIMChatFunction dpdChat;
/// 医医单聊配置（HRIMChatFunction*）
@property (assign, nonatomic) HRIMChatFunction ddChat;
/// 群聊患者配置（HRIMChatFunction*）
@property (assign, nonatomic) HRIMChatFunction gpChat;
/// 群聊医生配置（HRIMChatFunction*）
@property (assign, nonatomic) HRIMChatFunction gdChat;
/// 未知、不支持的消息显示文字
@property (strong, nonatomic) NSString *_Nullable unknownMessageText;

@end


/////////////////////////////////////////////////////////
///  菜单
/////////////////////////////////////////////////////////

/**
 *  消息页菜单
 */
typedef NS_OPTIONS(NSUInteger, HRIMMessageMenu) {
    /**
     *  添加好友
     */
    MESSAGE_MENU_ADDFRIENDS = 1 << 0,

    /**
     *  扫一扫
     */
    MESSAGE_MENU_SCAN = 1 << 1,

    /**
     *  群发消息
     */
    MESSAGE_MENU_BATCH_MSG = 1 << 2
};

/**
 *  联系人页菜单
 */
typedef NS_OPTIONS(NSUInteger, HRIMContactMenu) {
    /**
     *  添加好友
     */
    CONTACT_MENU_ADDFRIENDS = 1 << 0,

    /**
     *  分组管理
     */
    CONTACT_MENU_CONTACTGROUPMANAGER = 1 << 1,

    /**
     *  扫一扫
     */
    CONTACT_MENU_SCAN = 1 << 2
};

/**
 *  我的群组页菜单
 */
typedef NS_OPTIONS(NSUInteger, HRIMGroupMenu) {
    /**
     *  创建群
     */
    GROUP_MENU_CREATEGROUPS = 1 << 0,

    /**
     *  查找群组
     */
    GROUP_MENU_SEARCHGROUPS = 1 << 1
};

/**
 *  菜单配置
 */
@interface HRIMMenuConfig : NSObject

/// 消息页菜单
@property (assign, nonatomic) HRIMMessageMenu message;
/// 联系人页菜单
@property (assign, nonatomic) HRIMContactMenu contact;
/// 我的群组页菜单
@property (assign, nonatomic) HRIMGroupMenu group;

@end


/////////////////////////////////////////////////////////
///  控件
/////////////////////////////////////////////////////////

/**
 *  选项卡配置
 */
@interface HRIMTabBarConfig : NSObject

/// 顶部分割线颜色
@property (strong, nonatomic) UIColor *_Nonnull shadowColor;
/// 背景颜色
@property (strong, nonatomic) UIColor *_Nonnull backgroundColor;
/// 默认着色颜色
@property (strong, nonatomic) UIColor *_Nonnull tintColor;
/// 选中着色颜色
@property (strong, nonatomic) UIColor *_Nonnull tintSelectedColor;

@end


/**
 *  导航栏配置（presentViewController 有效）
 */
@interface HRIMNavigationBarConfig : NSObject

/// 状态栏样式
@property (assign, nonatomic) UIStatusBarStyle statusBarStyle;
/// 背景颜色
@property (strong, nonatomic) UIColor *_Nonnull backgroundColor;
/// 着色颜色
@property (strong, nonatomic) UIColor *_Nonnull tintColor;

@end


/**
 *  页面视图配置
 */
@interface HRIMViewControllerConfig : NSObject

/// 背景颜色
@property (strong, nonatomic) UIColor *_Nonnull backgroundColor;

@end


/**
 *  控件配置
 */
@interface HRIMControlConfig : NSObject

/// 导航栏配置（presentViewController 有效）
@property (strong, nonatomic) HRIMNavigationBarConfig *_Nonnull navigationBar;
/// 选项卡配置
@property (strong, nonatomic) HRIMTabBarConfig *_Nonnull tabBar;
/// 页面视图配置
@property (strong, nonatomic) HRIMViewControllerConfig *_Nonnull viewController;

@end


/////////////////////////////////////////////////////////
///  配置
/////////////////////////////////////////////////////////

/**
 *   IMSDK 配置
 */
@interface HRIMSDKConfig : NSObject

/// 系统配置
@property (strong, nonatomic) MBIMSystemConfig *_Nonnull system;
/// 控件配置
@property (strong, nonatomic) HRIMControlConfig *_Nonnull control;
/// 菜单配置
@property (strong, nonatomic) HRIMMenuConfig *_Nonnull menu;
/// 聊天配置
@property (strong, nonatomic) HRIMChatConfig *_Nonnull chat;
/// 网址配置
@property (strong, nonatomic) HRIMURLConfig *_Nonnull url;
/// 分享配置
@property (strong, nonatomic) HRIMShareConfig *_Nonnull share;
/// 组织架构配置
@property (strong, nonatomic) HRIMOrganizationCofing *_Nonnull organization;
/// 群组配置
@property (strong, nonatomic) HRIMTeamConfig *_Nonnull team;

@end
