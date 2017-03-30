//
//  CAMagicConfig.h
//  CAMagicProximityKit
//
//  Copyright © 2016 Yunjia Tech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CAMagicConfig : NSObject

/**
 *  Appkey from register
 */
@property (strong, nonatomic) NSString *appKey;

/**
 *  Appsecret from register
 */
@property (strong, nonatomic) NSString *appSecret;

/**
 *  Is production mode, set NO for debug version only
 */
@property (assign, nonatomic) BOOL productionMode;

/**
 *  Allow always use location, recommended by default
 */
@property (assign, nonatomic) BOOL alwaysUsingLocation;

/**
 *  User related identifier such as mobile phone
 */
@property (strong, nonatomic) NSString* userCode;

/**
 *  Init SDK with provided appKey and appSecret
 */
- (instancetype)initWithAppkey: (NSString *)appkey appSecret: (NSString *)appsecret;

/**
 *  from SDK 1.1, this method is deprected, set certificate on the server side instead
 */
- (void) setupCertificate:(NSString*) pkcs12FileName withPassword:(NSString*) pkcs12Password __deprecated_msg("config certificate on the server side instead");

@end
