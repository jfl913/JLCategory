//
//  NSString+JFAdd.m
//  JFCategory
//
//  Created by junfeng.li on 2018/3/5.
//

#import "NSString+JLAdd.h"

@implementation NSString (JLAdd)

- (NSString *)jl_stringByTrim {
    NSCharacterSet *characterSet = [NSCharacterSet whitespaceAndNewlineCharacterSet];
    return [self stringByTrimmingCharactersInSet:characterSet];
}

@end
