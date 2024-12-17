//
//  ColorUtilities.h
//
//  Created by Brian Lazarz on 1/14/19.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>

@class RKNamedColor;

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKColorUtilities` object contains routines to access colors for a specific color theme.
 */
@interface RKColorUtilities : NSObject

/**
 Returns an array of colors for the given color theme.
 */
+(NSArray<RKColor *> *) colorsForTheme:(RKChartColorTheme) theme;

@end

NS_ASSUME_NONNULL_END
