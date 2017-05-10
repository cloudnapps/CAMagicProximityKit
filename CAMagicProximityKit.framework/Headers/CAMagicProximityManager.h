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
