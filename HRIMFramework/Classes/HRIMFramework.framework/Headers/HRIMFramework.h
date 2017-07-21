//
//  HRIMFramework.h
//  HRIMFramework
//
//  Created by 尹建军 on 2017/7/16.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//! Project version number for HRIMFramework.
FOUNDATION_EXPORT double HRIMFrameworkVersionNumber;

//! Project version string for HRIMFramework.
FOUNDATION_EXPORT const unsigned char HRIMFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HRIMFramework/PublicHeader.h>

#import <HRIMFramework/HRIMComm.h>
#import <HRIMFramework/HRIMListener.h>
#import <HRIMFramework/HRIMSDKConfig.h>

#import <HRIMFramework/HRIMChatParam.h>
#import <HRIMFramework/HRIMSendReferralParam.h>
#import <HRIMFramework/HRIMSendShareCaseParam.h>
#import <HRIMFramework/HRIMSendTextParam.h>

#import <HRIMFramework/HRIMParam.h>

#import <HRIMFramework/HRIMOutsideInfoParam.h>
#import <HRIMFramework/HRIMPatientParam.h>
#import <HRIMFramework/HRIMReferralParam.h>
#import <HRIMFramework/HRIMShareCaseParam.h>
#import <HRIMFramework/HRIMUnReadMessageParam.h>

/**
 *  IMSDK
 */
@interface HRIMSDK : NSObject

#pragma mark - 单例
/**
 *  获取 HRIMSDK 全局对象
 *
 *  @return HRIMSDK 对象
 */
+ (HRIMSDK *_Nonnull)sharedSDK;


#pragma mark - 方法
/**
 *  设置关联（在 initSdk 之前调用）
 *
 *  @param listener 回调
 */
- (void)setListener:(_Nonnull id<HRIMListener>)listener;

/**
 *  设置环境（在 initSdk 之前调用）
 *
 *  @param env 环境枚举，默认开发（HRIM_ENV_TYPE_DEVELOP）
 */
- (void)setEnv:(HRIMEnvType)env;


/**
 *  获取关联
 *
 *  @return 返回关联对象
 */
- (_Nonnull id<HRIMListener>)getListener;

/**
 *  获取环境
 *
 *  @return 返回环境枚举
 */
- (HRIMEnvType)getEnv;

/**
 *  获取客户端Token信息
 *
 *  @return 返回客户端Token信息
 */
- (NSData *_Nonnull)getToken;

/**
 *  获取推送证书Id
 *
 *  @return 返回推送证书Id
 */
- (NSString *_Nonnull)getBusiId;

/**
 *  获取版本号
 *
 *  @return 返回版本号，字符串表示，例如：2.0.100
 */
- (NSString *_Nonnull)getVersion;

/**
 *  获取配置
 *
 *  @return 返回SDK配置
 */
- (HRIMSDKConfig *_Nonnull)getConfig;


/**
 *  初始化ImSDK
 *
 *  @param herenId 和仁号
 *  @param config  配置
 *  @param busiId  推送证书Id（网易云信请与云信通保持一至）
 */
- (void)initSdk:(NSString *_Nonnull)herenId config:(HRIMSDKConfig *_Nonnull)config busiId:(NSString *_Nonnull)busiId;

/**
 *  初始化ImSDK
 *
 *  @param herenId 和仁号
 *  @param config  配置
 *  @param busiId  推送证书Id（网易云信请与云信通保持一至）
 *  @param succ    成功回调
 *  @param fail    失败回调
 */
- (void)initSdk:(NSString *_Nonnull)herenId config:(HRIMSDKConfig *_Nonnull)config busiId:(NSString *_Nonnull)busiId succ:(_Nullable HRIMSDKSucc)succ fail:(_Nullable HRIMSDKFail)fail;

/**
 *  销毁ImSDK
 *
 *  @param succ 成功回调
 */
- (void)destroySdk:(_Nullable HRIMSDKSucc)succ;


/**
 *  请求ImSDK
 *
 *  @param methodType 方法
 */
- (void)request:(HRIMMethodType)methodType;

/**
 *  请求ImSDK
 *
 *  @param methodType 方法
 *  @param parameters 请求参数
 */
- (void)request:(HRIMMethodType)methodType parameters:(id _Nullable)parameters;


/**
 *  app 进入后台时配置
 */
- (void)configOnAppEnterBackground;

/**
 *  app 进前台时配置
 */
- (void)configOnAppEnterForeground;

/**
 *  app 重新激活时配置
 */
- (void)configOnAppDidBecomeActive;

/**
 *  app 注册APNS成功后配置
 *
 *  @param deviceToken <#deviceToken description#>
 */
- (void)configOnAppRegistAPNSWithDeviceToken:(NSData *_Nonnull)deviceToken;

@end
