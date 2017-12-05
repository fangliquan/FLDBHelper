//
//  Created by microleo on 2017/12/5.
//  Copyright © 2017年 leo. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "BaseModel.h"
@interface VersionInfo : BaseModel

@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *minSupport;
@property (nonatomic, copy) NSString *revision;
@property (nonatomic ,assign) long long buildTime;
@property (nonatomic, copy) NSString *relativePath;
@property (nonatomic, copy) NSString *releaseNote;
@property (nonatomic,copy)  NSString *releasePicture;

@end
