//
//  newOrEditDiaryViewController.h
//  logitec
//
//  Created by 순우 김 on 12. 7. 23..
//  Copyright (c) 2012년 dbniceguy@inervit.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface newOrEditDiaryViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIScrollView *scrollViewMain;
@property (strong, nonatomic) IBOutlet UILabel *lbDate;
- (IBAction)actionBtnDateChange:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *tfTitle;
- (IBAction)actionBtnWeather:(id)sender;
- (IBAction)actionBtnLocation:(id)sender;
- (IBAction)actionBtnPicture:(id)sender;
@property (strong, nonatomic) IBOutlet UIImageView *ivPicture;
@property (strong, nonatomic) IBOutlet UITextView *tvDiary;

@end
