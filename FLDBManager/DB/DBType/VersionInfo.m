//
//  Created by microleo on 2017/12/5.
//  Copyright © 2017年 leo. All rights reserved.
//
#import "VersionInfo.h"

@implementation VersionInfo
@synthesize version;
@synthesize minSupport;
@synthesize buildTime;
@synthesize relativePath;
@synthesize revision;
@synthesize releaseNote;

+(bool)isInSystemDB {
    return YES;
}

+(NSString *)getPrimaryKey
{
    return @"rowid";
}

+(NSString *)getTableName
{
    return @"VersionInfo";
}

@end
