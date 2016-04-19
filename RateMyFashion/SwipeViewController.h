//
//  SwipeViewController.h
//  RateMyFashion
//
//  Created by Kevin on 4/7/16.
//  Copyright © 2016 MouZhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DraggableViewBackground.h"
#import "MZUser.h"
#import "MWPhotoBrowser.h"

@interface SwipeViewController : UIViewController <MWPhotoBrowserDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property(strong, nonatomic) NSMutableArray * MWPhotoList;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *toPhotoGallery;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *openCamera;

-(NSUInteger) numberOfPhotosInPhotoBrowser:(MWPhotoBrowser *)photoBrowser;
-(id <MWPhoto>) photoBrowser:(MWPhotoBrowser *)photoBrowser thumbPhotoAtIndex:(NSUInteger)index;
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)photoBrowser photoAtIndex:(NSUInteger)index;


@end
