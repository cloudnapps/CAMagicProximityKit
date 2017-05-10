//
//  CAMagicLocation.h
//  CAMagicProximityKit
//
//  Copyright © 2016 MagicSDK.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CAMagicPOI : NSObject

@property (strong, nonatomic) NSString *country;
@property (strong, nonatomic) NSString *province;
@property (strong, nonatomic) NSString *city;
@property (strong, nonatomic) NSString *district;
@property (strong, nonatomic) NSString *building;
@property (strong, nonatomic) NSString *floor;

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString* category;
@property (strong, nonatomic) NSString* subCategory;

@property (assign, nonatomic) double latitude;
@property (assign, nonatomic) double longitude;

@property (strong, nonatomic) NSArray* attachments;

@end
