//
//  ViewController.h
//  Stitch
//
//  Created by Justin Odle on 1/5/16.
//  Copyright © 2016 Justin Odle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "opencv2/core.hpp"

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)takeImage:(id)sender;


@end

