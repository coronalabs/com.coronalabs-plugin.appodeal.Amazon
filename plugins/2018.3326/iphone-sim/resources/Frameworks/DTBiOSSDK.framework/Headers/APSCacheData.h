//
//  APSCacheData.h
//  DTBiOSSDK
//
//  Copyright © 2021 amazon.com. All rights reserved.
//

#ifndef APSCacheData_h
#define APSCacheData_h

#define DEFAULT_ADMOB_AUTO_REFRESH_TIME_IN_SEC 29

#import "DTBAdLoader.h"
#import "APSAdRequest.h"
#import "APSAd.h"

@interface APSCacheData : NSObject

@property (nonatomic, strong) APSAdRequest *adRequest;
@property (nonatomic, strong) APSAd *apsAd;
@property (nonatomic, copy) NSNumber *timestamp;
@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *serverParameter;
@property (nonatomic, strong) id request;

- (id)initWithRequestId:(NSString *)requestId adRequest:(APSAdRequest *)adRequest;

@end

#endif /* APSCacheData_h */
