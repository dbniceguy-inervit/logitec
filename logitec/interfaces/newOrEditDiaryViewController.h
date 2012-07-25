//
//  newOrEditDiaryViewController.h
//  logitec
//
//  Created by 순우 김 on 12. 7. 23..
//  Copyright (c) 2012년 dbniceguy@inervit.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface newOrEditDiaryViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
/*main scroll*/
@property (strong, nonatomic) IBOutlet UIScrollView *scrollViewMain;

/*date*/
@property (strong, nonatomic) IBOutlet UILabel *lbDate;
- (IBAction)actionBtnDateChange:(id)sender;

/*title*/
@property (strong, nonatomic) IBOutlet UITextField *tfTitle;

/*buttons*/
- (IBAction)actionBtnWeather:(id)sender;
- (IBAction)actionBtnLocation:(id)sender;
- (IBAction)actionBtnPicture:(id)sender;

/*Map view*/
@property (strong, nonatomic) IBOutlet MKMapView *mvLocation;

/*picture view*/
@property (strong, nonatomic) IBOutlet UIImageView *ivPicture;
@property (strong, nonatomic) UIImagePickerController *pcPicture;

/*text view*/
@property (strong, nonatomic) IBOutlet UITextView *tvDiary;

@end
