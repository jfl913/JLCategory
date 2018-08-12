//
//  UIColor+JFAdd.h
//  JFCategory
//
//  Created by junfeng.li on 2018/3/5.
//

#import <UIKit/UIKit.h>

@interface UIColor (JLAdd)

+ (instancetype)jl_colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;
+ (instancetype)jl_colorWithHexString:(NSString *)hexString;

@end
