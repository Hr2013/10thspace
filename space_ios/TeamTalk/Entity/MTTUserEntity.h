//
//  MTTUserEntity.h
//  IOSDuoduo
//
//  Created by 独嘉 on 14-5-26.
//  Copyright (c) 2014年 dujia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MTTDepartment.h"
#import "MTTBaseEntity.h"
#import "UIImageView+WebCache.h"
//#import "IMBaseDefine.pb.h"
#define DD_USER_INFO_SHOP_ID_KEY                    @"shopID"

@class UserInfo;

@interface MTTUserEntity : MTTBaseEntity

@property(nonatomic,strong) NSString *name;         // 用户名
@property(nonatomic,strong) NSString *nick;         // 用户昵称
@property(nonatomic,strong) NSString *avatar;       // 用户头像
@property(nonatomic,strong) NSString *department;   // 用户部门
@property(nonatomic,strong) NSString *signature;    // 个性签名
@property(strong)NSString *position;                // 职位
@property(assign)NSInteger sex;                     // 性别
@property(strong)NSString *departId;                // 部门id
@property(strong)NSString *telphone;                // 手机
@property(strong)NSString *email;                   // 邮箱
@property(strong)NSString *pyname;                  //
@property(assign)NSInteger userStatus;              // 身份
@property (nonatomic,strong) NSString *userID;      // 自加
@property(nonatomic,copy)NSString*  relation;
@property(nonatomic,assign)NSInteger fansCount;


- (id)initWithUserID:(NSString*)userID name:(NSString*)name nick:(NSString*)nick avatar:(NSString*)avatar userRole:(NSInteger)userRole userUpdated:(NSUInteger)updated;
+(id)dicToUserEntity:(NSDictionary *)dic;
+(NSMutableDictionary *)userToDic:(MTTUserEntity *)user;
-(void)sendEmail;
-(void)callPhoneNum;
-(NSString *)getAvatarUrl;
-(NSString *)get300AvatarUrl;
-(NSString *)getAvatarPreImageUrl;
-(id)initWithPB:(UserInfo *)pbUser;
+(UInt32)localIDTopb:(NSString *)userid;
+(NSString *)pbUserIdToLocalID:(NSUInteger)userID;
-(void)updateLastUpdateTimeToDB;

@end
