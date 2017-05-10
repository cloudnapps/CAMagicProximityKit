//
//  CAMagicConfig.h
//  CAMagicProximityKit
//
//  Copyright © 2016 MagicSDK.cn All rights reserved.
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
 *  Allow SDK to request location authorization for always or inuse case, YES by default
 *  Set NO if it is not allowed to alert location authorization request on start and you need to handle the permission alert by yourself
 */
@property (assign, nonatomic) BOOL requestLocationAuthorizationOnStart;

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
