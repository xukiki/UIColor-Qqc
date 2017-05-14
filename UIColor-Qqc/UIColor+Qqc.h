//
//  UIColor+Qqc.h
//  QqcFramework
//
//  Created by mahailin on 15/8/7.
//  Copyright (c) 2015年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  供16进制的颜色值使用
 *
 *  @param rgbValue 16进制的色值
 *
 *  @return UIColor
 */
#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((rgbValue >> 16) & 0xFF)/255.f \
green:((rgbValue >> 8) & 0xFF)/255.f \
blue:(rgbValue & 0xFF)/255.f \
alpha:1.0f]

/**
 *  供16进制的颜色值使用
 *
 *  @param rgbValue 16进制的色值
 *  @param a        透明度，值为0到1
 *
 *  @return UIColor
 */
#define UIColorFromRGBA(rgbValue, a) \
[UIColor colorWithRed:((rgbValue >> 16) & 0xFF)/255.f \
green:((rgbValue >> 8) & 0xFF)/255.f \
blue:(rgbValue & 0xFF)/255.f \
alpha:a]

/**
 *  UIColor类别
 */
@interface UIColor (Qqc)

/**
 *  判断两种颜色是否相同
 *
 *  @param color1 颜色1
 *  @param color2 颜色2
 *
 *  @return YES,两种颜色相同；NO,两种颜色不同
 */
+ (BOOL) isTheSameColor2:(UIColor*)color1 anotherColor:(UIColor*)color2;

@end
