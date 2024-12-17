//
//  RKView+Extensions.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 1/30/22.
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
 This category provides additional methods for drawing borders around the component frame.
 */@interface RKView (ReportKit)

/**
 Draws the borders around the given frame.
 @param frame The frame to draw the borders around.
 @param lineStyle The border line style.
 @param color The stroke color.
 @param lineWidth The stroke width.
 @param borderOptions The flags used to determine which sides the borders should be drawn on.
 */
-(void) drawBordersAroundFrame:(CGRect) frame
                     lineStyle:(RKLineStyle) lineStyle
                         color:(RKColor *) color
                         width:(CGFloat) lineWidth
                 borderOptions:(RKComponentBorderOptions) borderOptions;
@end

NS_ASSUME_NONNULL_END
