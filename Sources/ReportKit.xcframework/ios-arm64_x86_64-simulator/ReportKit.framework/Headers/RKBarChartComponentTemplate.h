//
//  BarChartComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKBarLineChartComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBarChartComponentTemplate` class contains the properties needed to define a bar chart component.
 */
@interface RKBarChartComponentTemplate : RKBarLineChartComponentTemplate

/**
 The type of bar chart
 */
@property (readonly, nonatomic) RKBarLineChartType barLineChartType;
/**
 A boolean value to indicate whether the x axis range should be adjusted to allow the bars to be fully-displayed.
 
 This property will add half of the bar width to each side of the x axis range in order to allow the bars of the barchart to be fully displayed.
 */
@property (readonly, nonatomic) BOOL fitBars;
/**
 the loction relative to the bar to draw the values.
 */
@property (readonly, nonatomic) RKChartDrawValueLocation valueLocation;
/**
 A boolean value to indicate whether shadows will be drawn behind each bar.
 
 When enabled, a gray area is drawn behind the bar to indicate the maximum value.
 */
@property (readonly, nonatomic) BOOL barShadows;
/**
 The width of the bars along the x axis.
 */
@property (readonly, nonatomic) CGFloat barWidth;
/**
 The space between groups of bars.
 */
@property (readonly, nonatomic) CGFloat groupSpace;
/**
 The space between individual bars.
 */
@property (readonly, nonatomic) CGFloat barSpace;

@end

NS_ASSUME_NONNULL_END
