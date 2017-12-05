//
//  Created by microleo on 2017/12/5.
//  Copyright © 2017年 leo. All rights reserved.
//
#import "SystemInfo.h"

@implementation SystemInfo

@synthesize currentVersion;
@synthesize lastVersionCheckTime;
@synthesize latestVersion;

+(bool)isInSystemDB {
    return YES;
}

+(NSString *)getPrimaryKey
{
    return @"rowid";
}

+(NSString *)getTableName
{
    return @"SystemInfo";
}

@end
