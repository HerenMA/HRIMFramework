//
//  HRIMComm.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/10.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#ifndef HRIMComm_h
#define HRIMComm_h


/////////////////////////////////////////////////////////
///  枚举
/////////////////////////////////////////////////////////

/**
 *  运行环境
 */
typedef NS_ENUM(NSInteger, HRIMEnvType) {
    /**
     *  开发
     */
    HRIM_ENV_TYPE_DEVELOP = 0,

    /**
     *  测试
     */
    HRIM_ENV_TYPE_TESTING = 1,

    /**
     *  正式
     */
    HRIM_ENV_TYPE_FORMAL = 2
};


/**
 *  用户类型
 */
typedef NS_ENUM(NSInteger, HRIMUserType) {
    /**
     *  未知
     */
    HRIM_USER_TYPE_UNKNOWN = 0,

    /**
     *  患者
     */
    HRIM_USER_TYPE_PATIENT = 1,

    /**
     *  医生
     */
    HRIM_USER_TYPE_DOCTORS = 2
};

/**
 *  方法类型
 */
typedef NS_ENUM(NSInteger, HRIMMethodType) {
    /**
     *  未知（入参：Nil，出参：NSError*）
     */
    HRIM_METHOD_TYPE_UNKNOWN = 0,

    /**
     *  打开主界面（入参：Nil，出参：NSError*）
     */
    HRIM_METHOD_TYPE_MAIN = 1,

    /**
     *  打开单聊界面（入参：HRIMChatParam*，出参：NSError*）
     */
    HRIM_METHOD_TYPE_C2C_CHAT = 2,

    /**
     *  打开群聊界面（入参：HRIMChatParam*，出参：NSError*）
     */
    HRIM_METHOD_TYPE_GROUP_CHAT = 3,

    /**
     *  打开群列表界面（入参：Nil，出参：NSError*）
     */
    HRIM_METHOD_TYPE_GROUP_LIST = 4,

    /**
     *  发送文本消息（入参：HRIMSendTextParam*，出参：NSError*）
     */
    HRIM_METHOD_TYPE_SEND_TEXT_MESSAGE = 5,

    /**
     *  发送共享病历消息（入参：HRIMSendShareCaseParam*，出参：NSError*）
     */
    HRIM_METHOD_TYPE_SEND_SHARE_CASE = 6,

    /**
     *  发送转诊消息（入参：HRIMSendReferralParam*，出参：NSError*）
     */
    HRIM_METHOD_TYPE_SEND_REFERRAL = 7,

    /**
     *  监听未读消息数（入参：Nil，出参：HRIMUnReadMessageParam*）
     */
    HRIM_METHOD_TYPE_UNREAD_MESSAGES = 100,

    /**
     *  监听双向转诊（入参：Nil，出参：HRIMPatientParam*）
     */
    HRIM_METHOD_TYPE_BOTH_WAY_REFERRAL = 101,

    /**
     *  监听转诊（入参：Nil，出参：HRIMReferralParam*）
     */
    HRIM_METHOD_TYPE_REFERRAL = 102,

    /**
     *  监听挂号（入参：Nil，出参：HRIMPatientParam*）
     */
    HRIM_METHOD_TYPE_REGISTER = 103,

    /**
     *  监听开住院证（入参：Nil，出参：HRIMPatientParam*）
     */
    HRIM_METHOD_TYPE_HOSPITAL_CERTIFICATE = 104,

    /**
     *  监听开检查单（入参：Nil，出参：HRIMPatientParam*）
     */
    HRIM_METHOD_TYPE_INSPECT_REPORT = 105,

    /**
     *  监听开检验单（入参：Nil，出参：HRIMPatientParam*）
     */
    HRIM_METHOD_TYPE_CHECKOUT_REPORT = 106,

    /**
     *  监听患者信息（入参：Nil，出参：HRIMPatientParam*）
     */
    HRIM_METHOD_TYPE_PATIENT_INFO = 107,

    /**
     *  监听患者报告（入参：Nil，出参：HRIMPatientParam*）
     */
    HRIM_METHOD_TYPE_PATIENT_REPORT = 108,

    /**
     *  监听共享病历（入参：Nil，出参：HRIMShareCaseParam*）
     */
    HRIM_METHOD_TYPE_SHARE_CASE = 109,

    /**
     *  监听添加外来资料（入参：Nil，出参：HRIMOutsideInfoParam*）
     */
    HRIM_METHOD_TYPE_OUTSIDE_INFO = 110,

    /**
     *  监听转诊消息（入参：Nil，出参：Nil）
     */
    HRIM_METHOD_TYPE_MESSAGE_REFERRAL = 111,

    /**
     *  监听踢下线（入参：Nil，出参：Nil）
     */
    HRIM_METHOD_TYPE_FORCE_OFFLINE = 112
};

/**
 *  响应类型
 */
typedef NS_ENUM(NSInteger, HRIMResponseType) {
    /**
     *  未知错误
     */
    HRIM_RESPONSE_TYPE_UNKNOWN = -1,

    /**
     *  成功
     */
    HRIM_RESPONSE_TYPE_SUCC = 0,

    /**
     *  SDK 初始化失败
     */
    HRIM_RESPONSE_TYPE_SDK_INIT_FAIL = 1,

    /**
     *  不识别的方法
     */
    HRIM_RESPONSE_TYPE_NOT_KNOW = 2,

    /**
     *  请求参数错误
     */
    HRIM_RESPONSE_TYPE_REQUEST_PARAMETER_ERROR = 3,

    /**
     *  未能打开指定界面
     */
    HRIM_RESPONSE_TYPE_OPEN_VIEWCONTROLLER_ERROR = 4
};


/////////////////////////////////////////////////////////
///  回调协议
/////////////////////////////////////////////////////////

/**
 *  操作成功回调
 */
typedef void (^HRIMSDKSucc)();

/**
 *  操作失败回调
 *
 *  @param code 错误码
 *  @param msg  错误描述，配合错误码使用，如果问题建议打印信息定位
 */
typedef void (^HRIMSDKFail)(NSInteger code, NSString *_Nullable msg);

#endif
