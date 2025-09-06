//
//  SlotInfoExtra.h
//  DTBiOSSDK
//
//  Copyright © 2024 amazon.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PosOption) {
    PosOptionsNoValue = -1,
    PosOptionsUnknown = 0,
    PosOptionsAboveTheFold = 1,
    PosOptionsBelowTheFold = 3,
};

typedef NS_ENUM(NSInteger, VideoStartdelayOption) {
    VideoStartdelayOptionNoValue = -3,
    VideoStartdelayOptionPostRoll = -2,
    VideoStartdelayOptionMidRoll = -1,
    VideoStartdelayOptionPreRoll = 0,
};

typedef NS_ENUM(NSInteger, VideoPlcmtOption) {
    VideoPlcmtOptionNoValue = -1,
    VideoPlcmtOptionInstream = 1,
    VideoPlcmtOptionAccompanyingContent = 2,
    VideoPlcmtOptionInterstitial = 3,
    VideoPlcmtOptionNoContent, VideoPlcmtOptionStandalone = 4,
    VideoPlcmtOptionRewarded = 501,
};

typedef NS_ENUM(NSInteger, VideoPlacementOption) {
    VideoPlacementOptionNoValue = -1,
    VideoPlacementOptionInstream = 1,
    VideoPlacementOptionInBanner = 2,
    VideoPlacementOptionInArticle = 3,
    VideoPlacementOptionInFeed = 4,
    VideoPlacementOptionInterstitial,VideoPlacementOptionSlider,VideoPlacementOptionFloating = 5,
    VideoPlacementOptionRewarded = 501,
};

@interface APSSlotInfoExtra : NSObject <NSCopying>

@property( nonatomic) VideoStartdelayOption videoStartdelay;
@property( nonatomic) VideoPlcmtOption videoPlcmt;
@property( nonatomic) VideoPlacementOption videoPlacement;
@property( nonatomic) PosOption pos;

@end

NS_ASSUME_NONNULL_END
