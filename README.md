# FLDBHelper
鉴于项目的需要根据自己的项目经验 封装了一个适用于ios项目的数据库存储 组件，可以直接copy到项目中使用。对数据的存储服务，支持增删改查，支持模型对象存储，数组存储。有兴趣者可以研究一下。


    [[DBManager sharedInstance]saveCurrentVersion:BundleVersionString];
    [[DBManager sharedInstance]saveInformationItem:@"大家好，今天很开心" value:@"KEY"];
    
    LoginInfo *currentInfo = [[DBManager sharedInstance]loadTableFirstData:[LoginInfo class] Condition:@""];
    if (!currentInfo) {
        LoginInfo *loginInfo =[[LoginInfo alloc]init];
        loginInfo.userId = 124;
        loginInfo.isLogined = 1;
        loginInfo.phone = @"124";
        [[DBManager sharedInstance]saveData:loginInfo];
    }

    
    NSArray *informationArray = [[DBManager sharedInstance]loadTableData:[Informations class] Condition:@""];
    
    NSLog(@"---------informationArray%@",informationArray);
    
    NSLog(@"----------------version:%@",[[DBManager sharedInstance]getCurrentVersion]);
    
    UserInfoTemp *temp1 = [[UserInfoTemp alloc]init];
    temp1.userId = 1;
    temp1.userName = @"1";
    temp1.age = 16;
    
    [UserInfoTemp insertUserInfo:temp1];
    
    NSLog(@"1:--------------%@",[NSDate date]);
    NSMutableArray *userArray = [NSMutableArray array];
    
    for (int i =0; i <100000; i ++) {
        UserInfoTemp *temp = [[UserInfoTemp alloc]init];
        temp.userId = i;
        temp.userName = [NSString stringWithFormat:@"%d", i + 100];
        temp.age = 16 +i;
        [userArray addObject:temp];
    }
    [UserInfoTemp insertUserInfos:userArray];
    NSLog(@"2:--------------%@",[NSDate date]);

    
    NSArray *userArray1 = [UserInfoTemp getAllUserInfoWithCondition:@""];
    
    NSLog(@"userArray1:--------------%ld",userArray1.count);
    
    NSArray *userArray2 = [UserInfoTemp getAllUserInfoWithCondition:@"where age < 80"];
    NSLog(@"userArray2:--------------%ld",userArray2.count);
    
    NSLog(@"temp1:--------------%@",temp1.userName);
    temp1.userId = 101;
    [UserInfoTemp udateUserInfo:temp1];
    
    UserInfoTemp *uptemp = [UserInfoTemp getUserInfoWithUserId:temp1.userId];
    NSLog(@"temp1:--------------%@",uptemp.userName);
    
