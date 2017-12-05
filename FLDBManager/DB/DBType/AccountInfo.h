//
//  Created by microleo on 2017/12/5.
//  Copyright © 2017年 leo. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "LKDB+Mapping.h"
#import "NSObject+LKModel.h"
#import "BaseModel.h"
#pragma mark - Login Info
@interface LoginInfo : BaseModel
@property (nonatomic, assign) long userId;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, strong) NSString *deviceId;
@property (nonatomic, copy)   NSString * token;
@property (nonatomic, assign)   NSInteger isLogined;
@end

@class UserInfoTemp;
@interface UserInfoTemp:BaseModel
@property(nonatomic,assign) long long   userId;
@property(nonatomic,strong) NSString  *userName;
@property(nonatomic,assign) NSInteger  age;

+(UserInfoTemp *)getUserInfoWithUserId:(long long)userId;

//根据条件获取
+(NSArray *)getAllUserInfoWithCondition:(NSString *)condition;

+(void)insertUserInfo:(UserInfoTemp *)user;

+(void)insertUserInfos:(NSArray<UserInfoTemp*>*)users;

+(void)udateUserInfo:(UserInfoTemp *)user;

@end












