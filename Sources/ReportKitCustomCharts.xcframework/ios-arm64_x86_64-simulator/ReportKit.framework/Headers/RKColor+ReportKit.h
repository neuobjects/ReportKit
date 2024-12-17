//
//  RKColor+Extensions.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/22/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//
#import <ReportKit/RKReportKitDataTypes.h>
#include <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKColor (ReportKit)` category contains routines to convert hex values to platform-specific color.
 */
@interface RKColor (ReportKit)
/**
 Return the native NSColor/UIColor for the given hex value.
 */
+(RKColor *) colorFromHex:(NSString *) hexColor;
/**
 Return the native NSColor/UIColor for the given hex and alpha value.
 */
+(RKColor *) colorFromHex:(NSString *) hexColor
                    alpha:(CGFloat) alpha;

@end

NS_ASSUME_NONNULL_END
