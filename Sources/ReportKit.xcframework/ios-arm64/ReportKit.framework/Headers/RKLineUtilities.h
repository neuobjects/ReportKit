//
//  LineUtiltiies.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 5/6/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKLineUtilities` object contains the routines used to generate line styles.
 */
@interface RKLineUtilities : NSObject

/**
 Returns an array of numerical values used to generate a line style.
 */
+(NSArray *) lengthsForLineStyle:(RKLineStyle) lineStyle
                 usingMultiplier:(CGFloat) multiplier;

@end

NS_ASSUME_NONNULL_END
