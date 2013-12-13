//
//  UIView+XHCustomHUD.h
//  XHShockHUD
//
//  Created by 曾 宪华 on 13-12-13.
//  Copyright (c) 2013年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XHShockHUDHeader.h"

/**
 *  已经定制了四种样式的指示器
 */
@interface UIView (XHCustomHUD)

/**
 *  通过文本展示指示器
 *
 *  @param text          需要展示的文本
 *  @param hudType       指示器的样式
 *  @param animationType 指示器的显示和消失的动画形式
 *  @param delay         延迟多少秒消失，如果是0，那就是不消失，需要手动消失
 */
- (void)showHUDWithText:(NSString *)text
                hudType:(XHHUDType)hudType
          animationType:(XHHUDAnimationType)animationType
                  delay:(NSTimeInterval)delay;

@end
