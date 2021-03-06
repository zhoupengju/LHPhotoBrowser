//
//  LHPhotoListCell.h
//  LHPhotoBrowserDemo
//
//  Created by slihe on 16/5/17.
//  Copyright © 2016年 slihe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LHPhotoListCell : UITableViewCell

@property(nonatomic, strong)NSArray *imgs;

@property(nonatomic, strong)NSArray *imgUrls;

+ (id)LHPhotoListCellWithTableView:(UITableView *)tableView;

+ (CGFloat)cellHeight:(NSInteger)imgNum;

@end
