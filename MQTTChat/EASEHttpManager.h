//
//  EASEHttpManager.h
//  MQTTChat
//
//  Created by liujinliang on 2021/4/21.
//  Copyright © 2021 Owntracks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^EASEResponseBlock)(NSDictionary* responseInfo);
typedef void (^EASEResponseErrorBlock)(NSError* error);

@interface EMQHttpManager : NSObject

/*
 *接口列表 声明
 */

/*
 获取验证码
 
 @param mobile 手机号
 @param completionHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)getSmsVCWithMobile:(NSString *)mobile
         completionHandler:(EASEResponseBlock)completionHandler
              errorHandler:(EASEResponseErrorBlock)errorHandler;

@end

NS_ASSUME_NONNULL_END
