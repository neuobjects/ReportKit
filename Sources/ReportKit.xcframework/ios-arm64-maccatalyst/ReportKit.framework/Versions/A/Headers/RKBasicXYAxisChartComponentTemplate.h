//
//  RKBasicXYAxisChartComponentTemplate.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 5/3/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKBasicChartComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKFontInformation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBasicXYAxisChartComponentTemplate` class contains the design-time properties that are common to charts the have an X and Y Axis.
 */
@interface RKBasicXYAxisChartComponentTemplate : RKBasicChartComponentTemplate
/**
 The line style to use for the x axis grid line.
 */
@property (readonly, nonatomic) RKLineStyle xAxisGridLineStyle;
/**
 The line style to use for the x axis line.
 */
@property (readonly, nonatomic) RKLineStyle xAxisAxisLineStyle;
/**
 A boolean value indicating whether the x axis is enabled.
 */
@property (readonly, nonatomic) BOOL xAxisEnabled;
/**
 A boolean value indicating whether the labels should be drawn along the x axis.
 */
@property (readonly, nonatomic) BOOL xAxisLabelsEnabled;
/**
 The color of the x axis label.
 */
@property (readonly, nonatomic, strong) RKColor *xAxisLabelTextColor;
/**
 The color of the x axis label.
 */
@property (readonly, nonatomic, strong) RKColor *xAxisAxisLineColor;
/**
 The color of the x axis grid line.
*/
@property (readonly, nonatomic, strong) RKColor *xAxisGridLineColor;
/**
 The font information to use for the x axis label.
 */
@property (readonly, nonatomic, strong) RKFontInformation *xAxisLabelFont;
/**
 Reserved for future use.
 */
@property (readonly, nonatomic) RKLineCapStyle xAxisGridLineCapStyle;
/**
 The x axis label location.
 */
@property (readonly, nonatomic) RKChartXAxisLabelPosition xAxisLabelLocation;
/**
 A boolean value indicating whether the label is located at the top of the chart.
 */
@property (readonly, nonatomic) BOOL xAxisLabelLocationTop;
/**
 A boolean value indicating whether the label is located at the bottom of the chart.
 */
@property (readonly, nonatomic) BOOL xAxisLabelLocationBottom;
/**
 A boolean value indicating whether the label is located at both the bottom and the top of the chart.
 */
@property (readonly, nonatomic) BOOL xAxisLabelLocationBoth;
/**
 A boolean value indicating whether the label should be centered on the value location. Setting this to true for grouped bar charts will center the label horizontally with the bar.
 */
@property (readonly, nonatomic) BOOL xAxisAxisLabelsCentered;
/**
 A boolean value indicating whether the grid lines should be drawn across the x axis.
 */
@property (readonly, nonatomic) BOOL xAxisDrawGridLines;//
/**
 A boolean value indicating whether the x axis line should be drawn.
 */
@property (readonly, nonatomic) BOOL xAxisDrawAxisLine;
/**
 The width of the grid line along the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisGridLineWidth;
/**
 The width of the x axis line.
 */
@property (readonly, nonatomic) CGFloat xAxisAxisLineWidth;
/**
 The maximum value along the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisAxisMinimum;
/**
 A boolean value indicating whether the minimum x axis value should be automatically calculated.
 */
@property (readonly, nonatomic) BOOL xAxisAutoCalculateAxisMinimum;
/**
 The maximum value along the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisAxisMaximum;
/**
 A boolean value indicating whether the maximum x axis value should be automatically calculated.
 */
@property (readonly, nonatomic) BOOL xAxisAutoCalculateAxisMaximum;
/**
 The minimum number of labels that should be listed along the x axis.
 */
@property (readonly, nonatomic) NSInteger xAxisAxisMinLabels;
/**
 The maximum number of labels that should be listed along the x axis.
 */
@property (readonly, nonatomic) NSInteger xAxisAxisMaxLabels;
/**
 The number of labels across the x axis.
 */
@property (readonly, nonatomic) NSInteger xAxisLabelCount;
/**
 The minimum interval between x axis values.
 */
@property (readonly, nonatomic) CGFloat xAxisGranularity;
/**
 A boolean value to indicate whether the x axis granularity is enabled.
 
 When this value is false, the axis values could be repeated. This could happen if two adjacent values are rounded to the same value.
 */
@property (readonly, nonatomic) BOOL xAxisGranularityEnabled;
/**
 The type of value along the x axis.
 */
@property (readonly, nonatomic) RKTextComponentValueType xAxisValueType;
/**
 The number of decimals to include in the x axis value.
 */
@property (readonly, nonatomic) NSInteger xAxisDecimalPlaces;
/**
 The format to use when the x axis value is negative.
 */
@property (readonly, nonatomic) RKTextComponentNegativeFormat xAxisNegativeFormat;
/**
 A boolean value indicating whether the x axis should include the thousands separator.
 */
@property (readonly, nonatomic) BOOL xAxisThousandsSeparator;
/**
 The currency locale of the x axis value.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *xAxisCurrencyLocaleIdentifier;
/**
 The date format of the x axis value.
 */
@property (readonly, nonatomic) RKDateFormat xAxisDateFormat;
/**
 The time format of the x axis value.
 */
@property (readonly, nonatomic) RKTimeFormat xAxisTimeFormat;
/**
 The boolean format of the x axis value. It's unusual to have the axis values represented as boolean, but it's here for completeness.
 */
@property (readonly, nonatomic) RKBooleanFormat xAxisBooleanFormat;
/**
 The X offset of the value along the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisXOffset;
/**
 The Y offset of the value along the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisYOffset;
/**
 The angle rotation of the label along the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisLabelRotationAngle;

@end

NS_ASSUME_NONNULL_END
