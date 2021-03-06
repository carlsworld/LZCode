//
//  SystemMacro.h
//  FastCall
//
//  Created by Carlson Lee on 2018/1/25.
//  Copyright © 2018年 Carlson Lee. All rights reserved.
//  通用的一些系统配置头文件

#ifndef SystemMacro_h
#define SystemMacro_h

#pragma mark - #系统配置

#define WEAK_SELF __weak typeof(self) wSelf = self;
///屏幕
#define kScreen  [UIScreen mainScreen].bounds.size
#define kBounds  self.bounds.size
#define kScaleX   kScreen.width/375
/**
 状态栏、导航栏、标签栏
 */
#define STATUS_BAR_HEIGHT CGRectGetHeight([UIApplication sharedApplication].statusBarFrame)
#define NAV_HEIGHT CGRectGetHeight(self.navigationController.navigationBar.frame)
#define TAB_HEIGHT CGRectGetHeight(self.tabBarController.tabBar.frame)

///iphoneX
#define IS_IPHONEX ([UIScreen mainScreen].bounds.size.width == 375.0f && [UIScreen mainScreen].bounds.size.height == 812.0f)

///系统版本
#define IPHONE_VERSION(x) ([[UIDevice currentDevice] systemVersion].floatValue >= x)

///广播
#define CLP_NOTIFICATION_CENTER [NSNotificationCenter defaultCenter]

///userDefaults
#define CLP_USERDEFAULTS [NSUserDefaults standardUserDefaults]

///url
#define CLP_URL(_str_) [NSURL URLWithString:_str_]

///图片
#define CLP_IMG(_name_) [UIImage imageNamed:_name_]

///加载Bundle图片
#define CLP_RIMG(_name_) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:_name_ ofType:nil]]

///颜色
#define colorFromRGB(_rgbValue_) [UIColor \
colorWithRed:((float)((_rgbValue_ & 0xFF0000) >> 16))/255.0 \
green:((float)((_rgbValue_ & 0xFF00) >> 8))/255.0 \
blue:((float)(_rgbValue_ & 0xFF))/255.0 alpha:1.0]

#define colorFromRGBA(_rgbValue_, _alpha_) [UIColor \
colorWithRed:((float)((_rgbValue_ & 0xFF0000) >> 16))/255.0 \
green:((float)((_rgbValue_ & 0xFF00) >> 8))/255.0 \
blue:((float)(_rgbValue_ & 0xFF))/255.0 alpha:_alpha_]

#endif /* SystemMacro_h */
