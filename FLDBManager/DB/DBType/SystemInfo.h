//
//  Created by microleo on 2017/12/5.
//  Copyright © 2017年 leo. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "BaseModel.h"

@interface SystemInfo : BaseModel

@property (nonatomic, copy) NSString *currentVersion;
@property (nonatomic) long long lastVersionCheckTime;
@property (nonatomic, copy) NSString *latestVersion;

@end


