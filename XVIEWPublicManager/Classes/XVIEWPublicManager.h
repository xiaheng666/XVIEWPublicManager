//
//  XVIEWPublicManager.h
//  XVIEWPublicManager
//
//  Created by zd on 2019/1/18.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XVIEWPublicManager : NSObject

/**
 *  单例
 */
+ (instancetype)sharedPublicManager;

/**
 *  清除缓存
 @param       param callback:回调方法
 */
- (void)clean:(NSDictionary *)param;

/**
 *  设置状态栏
 */
- (void)changeStatusBar:(NSDictionary *)param;

/**
 *  复制到剪贴板
 @param       param callback:回调方法
 */
- (void)copyToBoard:(NSDictionary *)param;

/**
 *  拨打电话
 @param       param callback:回调方法
 */
- (void)call:(NSDictionary *)param;

/**
 *  获取通讯录
 @param       param callback:回调方法
 */
- (void)getAddress:(NSDictionary *)param;

/**
 *  获取手机信息
 @param       param callback:回调方法
 */
- (void)getDeviceInfo:(NSDictionary *)param;

/**
 *  获取app信息
 @param       param callback:回调方法
 */
- (void)geAppInfo:(NSDictionary *)param;

/**
 *  发短信
 @param       param     data{phone:手机号,message:消息}
                        currentVC:当前vc
                        callback:回调方法
 */
- (void)sendMessage:(NSDictionary *)param;

/**
 *  返回网页
 @param       param currentVC:当前vc
 */
- (void)pop:(NSDictionary *)param;

/**
 *  跳转网页
 @param       param currentVC:当前vc
                    data {title:标题,color:导航栏颜色,url:网页地址}
 */
- (void)goToWeb:(NSDictionary *)param;

/**
 *  跳转浏览器
 @param       param currentVC:当前vc
 data {url:网页地址}
 */
- (void)goToBrowser:(NSDictionary *)param;

/**
 *  手机前后台变化
 @param       param callback:回调方法
 */
- (void)appActive:(NSDictionary *)param;

/**
 *  快速预览文件
 */
- (void)quickLook:(NSDictionary *)param DEPRECATED_MSG_ATTRIBUTE("未完全实现");

/**
 *  截屏
 @param       param callback:回调方法
 */
- (void)snipScreen:(NSDictionary *)param;

/**
 *  手机震动
 */
- (void)shock:(NSDictionary *)param;

/**
 *  手机播发系统声音
 */
- (void)buzzing:(NSDictionary *)param;

/**
 *  手机设置提醒事件
 @param       param callback:回调方法
                    data {time:距离当前时间,title:标题,type:事件类型  0提醒/1日历}
 */
- (void)addMindEvent:(NSDictionary *)param;

/**
 *  添加本地推送
 @param       param callback:回调方法
                    data {time:距离当前时间,title:标题,subTitle:副标题,content:消息内容,noticeId:消息id}
 */
- (void)localPush:(NSDictionary *)param;

/**
 *  移除本地推送
 @param       param data {noticeId:消息id}
 */
- (void)removeNotification:(NSDictionary *)param;

/**
 *  移除所有本地推送
 */
- (void)removeAllNotification:(NSDictionary *)param;

/**
 *  手机系统分享
 @param       param callback:回调方法
                    data {text:分享文本,image:分享图片,url:分享链接}
 */
- (void)appShare:(NSDictionary *)param;

/**
 *  设置角标
 @param       param data {number:角标数量}
 */
- (void)setBadge:(NSDictionary *)param;

/**
 *  打开闪光灯
 @param       param data {}
 */
- (void)openSplash:(NSDictionary *)param;

@end

NS_ASSUME_NONNULL_END
