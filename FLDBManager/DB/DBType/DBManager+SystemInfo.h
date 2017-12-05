//
//  Created by microleo on 2017/12/5.
//  Copyright © 2017年 leo. All rights reserved.
//
#import "DBManagerBase.h"
#import "SystemInfo.h"
@class VersionInfo;

@interface DBManager (SystemInfo)

-(NSString *) getCurrentVersion;
-(void)saveCurrentVersion:(NSString*)version;

-(VersionInfo *) getLatestVersion;
-(void)saveLatestVersion:(VersionInfo*)version;

-(long long) getLastVersionCheckTime;
-(void)saveLastVersionCheckTime:(long long)timeStamp;

@end
