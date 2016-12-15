//
//  XHAlbumPhotoCollectionViewCell.m
//  MessageDisplayExample
//
//  Created by 曾 宪华 on 14-5-20.
//  Copyright (c) 2014年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import "XHAlbumPhotoCollectionViewCell.h"

@implementation XHAlbumPhotoCollectionViewCell

#pragma mark - Propertys

- (UIImageView *)photoImageView {
    if (!_photoImageView) {
        _photoImageView = [[UIImageView alloc] initWithFrame:self.bounds];
        _photoImageView.image = [UIImage imageNamed:@"MeIcon"];
    }
    return _photoImageView;
}

#pragma mark - Life Cycle

- (id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
        [self.contentView addSubview:self.photoImageView];
    }
    return self;
}

@end
