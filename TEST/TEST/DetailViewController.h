//
//  DetailViewController.h
//  TEST
//
//  Created by KEPHAM on 01/12/2014.
//  Copyright (c) Năm 2014 KEPHAM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

