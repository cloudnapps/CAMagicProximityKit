//
//  CAMagicProximityManager.h
//  CAMagicProximityKit
//
//  Copyright © 2016 MagicSDK.cn All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CAMagicProximityManagerDelegate.h"

@class CAMagicConfig;

@interface CAMagicProximityManager : NSObject

+ (CAMagicProximityManager *)instance;

/**
 *  Delegate of CAMagicProximityManager
 */
@property (nonatomic, assign) id<CAMagicProximityManagerDelegate> delegate;

/**
 *  Setup the config
 */
- (void)setup:(CAMagicConfig *)config;

/**
 *  Start Monitoring
 */
- (void)startMonitoring;

/**
 *  Stop Monitoring
 */
- (void)stopMonitoring;

/**
 *  Send Advanced Notification
 */
- (void) sendAdvancedNotification:(NSString*)message withTitle:(NSString*)title withBadge:(NSNumber*)number andMedia:(NSURL*)url userInfo:(NSDictionary*)userInfo;

@end

@interface CAMagicProximityManager (BeaconManager)

/**
 *  Add Beacon to monitor by parameters
 */
- (BOOL) addMonitoredBeacon: (NSString*) beaconUUID withMajor:(NSUInteger)major withMinor:(NSUInteger)minor;

/**
 *  Remove Beacon to monitor by parameters
 */
- (BOOL) removeMonitoredBeacon: (NSString*) beaconUUID withMajor:(NSUInteger)major withMinor:(NSUInteger)minor;

/**
 *  Remove all the Beacon monitored before
 */
- (void) removeAllMonitoredBeacons;

@end

@interface CAMagicProximityManager (WifiManager)

/**
 *  Add Wifi to monitor by parameters
 */
- (BOOL) addMonitoredWifi: (NSString*) wifiName param:(NSString*)bssid;

/**
 *  Remove Wifi to monitor by parameters
 */
- (BOOL) removeMonitoredWifi: (NSString*) wifiName param:(NSString*)bssid;

/**
 *  Remove all the Wifi monitored before
 */
- (void) removeAllMonitoredWifis;



@end

