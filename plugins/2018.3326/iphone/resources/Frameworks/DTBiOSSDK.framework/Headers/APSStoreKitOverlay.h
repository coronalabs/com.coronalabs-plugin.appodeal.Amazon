//
//  APSStoreKitOverlay.h
//  DTBiOSSDK
//
//  Copyright © 2025 amazon.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol APSStoreKitOverlayDelegate <NSObject>

@optional
- (void)storeOverlayWillStartPresentation;
- (void)storeOverlayDidFinishPresentation;
- (void)storeOverlayWillStartDismissal;
- (void)storeOverlayDidFinishDismissal;
- (void)storeOverlayDidFailToLoad:(NSError *)error;

@end

/**
 * APSStoreKitOverlay provides interfaces to display App Store overlays using SKOverlay.
 * This class is only available on iOS 14.0 and later.
 */
API_AVAILABLE(ios(14.0))
@interface APSStoreKitOverlay : NSObject

/**
 * The delegate object to receive overlay events.
 */
@property (nonatomic, weak, nullable) id<APSStoreKitOverlayDelegate> delegate;

/**
 * Initialize with a view controller to present the overlay.
 * @param viewController The view controller to present the overlay.
 */
- (instancetype)initWithViewController:(UIViewController *)viewController;

/**
 * Present an App Store overlay for the specified app ID.
 * @param appId The App Store ID of the app to promote.
 * @param position The position of the overlay (top or bottom).
 */
- (void)presentOverlayWithAppId:(NSString *)appId
                     position:(SKOverlayPosition)position
                    userDismissable:(BOOL)isDismissable;

/**
 * Present an App Store overlay with configuration.
 * @param configuration The SKOverlay configuration to use.
 */
- (void)presentOverlayWithConfiguration:(SKOverlayConfiguration *)configuration;

/**
 * Dismiss the currently presented overlay.
 */
- (void)dismissOverlay;

@end

NS_ASSUME_NONNULL_END
