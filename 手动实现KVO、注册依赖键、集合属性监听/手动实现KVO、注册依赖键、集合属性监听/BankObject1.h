//
//  BankObject1.h
//  手动实现KVO、注册依赖键、集合属性监听
//
//  Created by 黄成都 on 15/9/16.
//  Copyright (c) 2015年 黄成都. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BankObject1 : NSObject
@property (nonatomic, assign) int accountBalance;
@property (nonatomic, copy) NSString *bankCodeEn;
@property (nonatomic, strong) NSMutableArray *departments;
@end
