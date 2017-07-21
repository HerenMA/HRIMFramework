//
//  HRIMListener.h
//  HRIMFramework
//
//  Created by 尹建军 on 16/11/10.
//  Copyright © 2016年 浙江和仁科技股份有限公司. All rights reserved.
//

#ifndef HRIMListener_h
#define HRIMListener_h

#import "HRIMComm.h"

/**
 *  回调
 */
@protocol HRIMListener <NSObject>

/**
 *  ImSDK的请求
 *
 *  @param methodType 方法
 *  @param parameters 请求参数
 */
- (void)onRequest:(HRIMMethodType)methodType parameters:(id _Nullable)parameters;

/**
 *  ImSDK的响应
 *
 *  @param methodType 方法
 *  @param parameters 响应参数
 *  @param error      错误
 */
- (void)onResponse:(HRIMMethodType)methodType parameters:(id _Nullable)parameters error:(NSError *_Nullable)error;

@end

#endif
