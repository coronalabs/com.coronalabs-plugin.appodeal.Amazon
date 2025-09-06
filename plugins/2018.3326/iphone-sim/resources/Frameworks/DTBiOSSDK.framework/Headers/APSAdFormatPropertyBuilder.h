//
//  APSAdFormatPropertyBuilder.h
//  DTBiOSSDK
//
//  Copyright © 2023 amazon.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APSAdFormatProperties.h"
#import "APSSlotInfoExtra.h"

NS_ASSUME_NONNULL_BEGIN

@interface APSAdFormatPropertyBuilder : NSObject
@property(nonatomic) NSInteger width;
@property(nonatomic) NSInteger height;
@property(nonatomic) APSSlotInfoExtra *slotInfoExtra;
@end

NS_ASSUME_NONNULL_END
