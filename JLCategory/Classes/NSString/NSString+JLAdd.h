//
//  NSString+JFAdd.h
//  JFCategory
//
//  Created by junfeng.li on 2018/3/5.
//

#import <Foundation/Foundation.h>

@interface NSString (JLAdd)


/**
 去除首尾的空格和换行符

 @return 去除后的字符串
 */
- (NSString *)jl_stringByTrim;

@end
