//
//  Created by microleo on 2017/12/5.
//  Copyright © 2017年 leo. All rights reserved.
//
#import "AccountInfo.h"
#import "DBManager.h"
#pragma mark - Login Info
@implementation LoginInfo

@synthesize userId;
@synthesize deviceId;
@synthesize token;
@synthesize isLogined;

+(bool)isInSystemDB {
    return YES;
}

+(NSString *)getPrimaryKey
{
    return @"userId";
}

+(NSString *)getTableName
{
    return @"LoginInfo";
}

@end

@implementation UserInfoTemp

+(bool)isInSystemDB {
    return NO;
}

+(NSString *)getPrimaryKey
{
    return @"userId";
}

+(NSString *)getTableName
{
    return @"UserInfoTemp";
}

+(UserInfoTemp *)getUserInfoWithUserId:(long long)userId{
    return [[DBManager sharedInstance] loadTableFirstData:[UserInfoTemp class] Condition:[NSString stringWithFormat:@" where userId = %lld", userId]];
}

//根据条件获取
+(NSArray *)getAllUserInfoWithCondition:(NSString *)condition{
    
       return [[DBManager sharedInstance] loadTableData:[UserInfoTemp class] Condition:condition];
}
+(void)insertUserInfo:(UserInfoTemp *)user{
    if (![UserInfoTemp getUserInfoWithUserId:user.userId]) {
        [[DBManager sharedInstance] saveData:user];
    }
}

+(void)insertUserInfos:(NSArray<UserInfoTemp*>*)users{
    
    [[DBManager sharedInstance]saveData:users modelClass:[UserInfoTemp class]];
    
}

+(void)udateUserInfo:(UserInfoTemp *)user{
      [[DBManager sharedInstance]updateTableData:[UserInfoTemp class] UpdateColumns:[NSString stringWithFormat: @"userName = '%@'",@"大家好"] Condition:[NSString stringWithFormat:@" userId = %lld",user.userId]];
}

@end

