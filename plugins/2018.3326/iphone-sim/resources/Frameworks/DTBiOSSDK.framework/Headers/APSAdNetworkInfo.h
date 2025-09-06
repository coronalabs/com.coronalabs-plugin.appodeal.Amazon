//
//  APSAdNetworkInfo.h
//  DTBiOSSDK
//
//  Copyright © 2025 amazon.com. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 * Supported ad network type.
 */
typedef NS_ENUM(NSInteger, APSAdNetwork) {
    APSAdNetworkUnknown,
    APSAdNetworkGoogleAdManager,
    APSAdNetworkAdmob,
    APSAdNetworkAdGeneration,
    APSAdNetworkUnityLevelPlay,
    APSAdNetworkMax,
    APSAdNetworkNimbus,
    APSAdNetworkOther,
    APSAdNetworkCustomMediation
};
extern NSString * _Nonnull const FormatType_toString[];

NS_ASSUME_NONNULL_BEGIN

@interface APSAdNetworkInfo : NSObject


/**
 * An ad network name string.
 */
@property(nonatomic, copy) NSString *adNetworkName;

@property(nonatomic) APSAdNetwork adNetworkNameEnumValue;
/**
 * An ad network property dictionary.
 */
@property(nonatomic, strong) NSMutableDictionary *adNetworkProperties;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
/**
 * @param adNetworkName An ad network name enum.
 */
- (instancetype)initWithNetworkName:(APSAdNetwork)adNetworkName;

/**
 * @return An ad network name string.
 */
- (NSString *)getAdNetworkName;


/**
 * @param adNetworkProperties An ad network property string key.
 * @return A string value of the adNetworkProperties key.
 */
- (NSString * _Nullable)getAdNetworkProperties:(NSString *)adNetworkProperties;

-(void)logAdNetworkTypeMismatchWithExpectedAdNetworkName:(NSString*)expectedNetworkName receivedNetworkName:(NSString*)setNetworkName;

@end

NS_ASSUME_NONNULL_END

