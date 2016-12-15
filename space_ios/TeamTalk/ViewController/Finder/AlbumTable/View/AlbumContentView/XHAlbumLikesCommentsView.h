//
//  XHAlbumLikesCommentsView.h
//  MessageDisplayKitWeChatExample
//
//  Created by Jack_iMac on 15/2/28.
//  Copyright (c) 2015年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHAlbumLikesCommentsView : UIView

@property (nonatomic, strong) NSArray *likes;
@property (nonatomic, strong) NSArray *comments;

- (void)reloadData;

@end
