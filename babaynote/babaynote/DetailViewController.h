//
//  DetailViewController.h
//  babaynote
//
//  Created by taro on 2015/05/02.
//  Copyright (c) 2015年 peachboy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

