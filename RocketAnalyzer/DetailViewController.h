//
//  DetailViewController.h
//  RocketAnalyzer
//
//  Created by John Ahrens on 11/29/14.
//  Copyright (c) 2014 John Ahrens. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

