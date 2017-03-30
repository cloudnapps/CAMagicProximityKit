//
//  CAMagicProximityManagerDelegate.h
//  CAMagicProximityKit
//
//  Copyright © 2016 Yunjia Tech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CAMagicProximityManager;
@class CAMagicPOI;

@protocol CAMagicProximityManagerDelegate <NSObject>

@optional
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didUpdatePOIs:(NSArray *)pois;
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didFailToMonitorWithError:(NSError*)error;
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didOpenNotification:(NSDictionary*)userInfo;

@end
