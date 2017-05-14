//
//  UIColor+Qqc.m
//  QqcFramework
//
//  Created by mahailin on 15/8/7.
//  Copyright (c) 2015年 admin. All rights reserved.
//

#import "UIColor+Qqc.h"

@implementation UIColor (Qqc)

+ (BOOL) isTheSameColor2:(UIColor*)color1 anotherColor:(UIColor*)color2
{
    if (CGColorEqualToColor(color1.CGColor, color2.CGColor)) {
        return YES;
    }
    else {
        return NO;
    }
}

@end
