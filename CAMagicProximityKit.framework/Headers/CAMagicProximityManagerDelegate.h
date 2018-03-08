//
//  CAMagicProximityManagerDelegate.h
//  CAMagicProximityKit
//
//  Copyright © 2016 MagicSDK.cn All rights reserved.
//

#import <Foundation/Foundation.h>

@class CAMagicProximityManager;
@class CAMagicPOI;

@protocol CAMagicProximityManagerDelegate <NSObject>

@optional
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didUpdatePOIs:(NSArray *)pois;
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didFailToMonitorWithError:(NSError*)error;
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didOpenNotification:(NSDictionary*)userInfo;

//Beacon level specific callback
//This callback is only workable when config.enableBeaconCallback is YES
//If UUID is nil, it means there's no any beacon nearby and we leave all the beacons
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didNearBeacon:(NSString*)UUID major:(NSUInteger)major minor:(NSUInteger)minor;

//Beacon level specific callback
//This callback is only workable when config.enableBeaconCallback is YES
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didLeaveBeacon:(NSString*)UUID major:(NSUInteger)major minor:(NSUInteger)minor;

//Wifi level specific callback
//This callback is only workable when config.enableWifiCallback is YES
- (void)proximityManager:(CAMagicProximityManager *)proximityManager didEnterWifi:(NSString*)wifiName param:(NSString*)bssid;

@end
