//
//  CommonTools.h
//  SheBaoBao
//
//  Created by Jn_Kindle on 16/8/18.
//  Copyright © 2016年 HuaDa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CommonTools : NSObject
///初始化一个工具类型的单例
+ (id)shareInstance;


#pragma mark - 版本更新信息

/**
 *  获取是否有最新版本
 */
- (void)versionForAppid:(NSString *)appid Block:(void(^)(BOOL isHaveVersion,NSString *updateUrl,NSString *updateContent))version;//是否有新版本、新版本更新下地址

/**
 *  评论APP当前版本
 */
- (void)reviewAppForAppid:(NSString *)appid;
@end
