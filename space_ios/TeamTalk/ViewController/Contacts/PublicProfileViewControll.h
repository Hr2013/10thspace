//
//  PublieProfileViewControll.h
//  IOSDuoduo
//
//  Created by Michael Scofield on 2014-07-16.
//  Copyright (c) 2014 dujia. All rights reserved.
//

#import "MTTBaseViewController.h"
#import "LCActionSheet.h"

@class MTTUserEntity;
@interface PublicProfileViewControll : MTTBaseViewController<UITableViewDataSource,UITableViewDelegate,LCActionSheetDelegate>

@property(nonatomic,strong)MTTUserEntity *user;

@property(nonatomic,strong)UITableView* tableView;
@property(nonatomic,strong)UIImageView *avatar;
@property(nonatomic,strong)UIImageView *avatarView;
@property(nonatomic,strong)UILabel *name;
@property(nonatomic,strong)UILabel *cname;
@property(nonatomic,strong)UIButton *chatBtn;
@property(nonatomic,strong)UIButton*addBtn;
@property(nonatomic,strong)UIButton *callBtn;
@property(nonatomic,strong)UIButton*deleteBtn;
@property(nonatomic,strong)UIButton*cancelAttendBtn;
@property(nonatomic,assign)BOOL isFromAttention;//是否来自关注列表

@end
