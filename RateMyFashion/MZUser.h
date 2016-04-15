//
//  MZUser.h
//  RateMyFashion
//
//  Created by Kai Mou on 3/28/16.
//  Copyright © 2016 MouZhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MZUser : NSObject

@property (strong, nonatomic)NSString *userId;
@property (strong, nonatomic)NSString *firstName;
@property (strong, nonatomic)NSString *lastName;
@property(strong, nonatomic) NSMutableArray *photoList;

- (id)initWithJSON:(NSDictionary * )returnedJSON andAccessToken:(NSString *) accessToken;
- (NSString *)getUserToken;

+ (void)setCurrentUser: (MZUser *) currentUser;
+ (void)clearCurrentUser;
+ (void)setPhotoList: (NSArray *) photosFromHTTP;
+ (MZUser *)getCurrentUser;

@end
