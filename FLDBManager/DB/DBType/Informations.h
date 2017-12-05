//
//  Created by microleo on 2017/12/5.
//  Copyright © 2017年 leo. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "BaseModel.h"

#define KEY_DB_CREATE_TIMESTAMP @"KEY_DB_CREATE_TIMESTAMP"


@interface Informations : BaseModel

@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *itemValue;

+(id)getValueByName:(NSString*)name;

@end


