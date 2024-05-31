//
//  RadarChartComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKPieRadarChartComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKFontInformation.h>
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKRadarChartComponentTemplate` class contains the properties that are needed to define a radar chart component.
 */
@interface RKRadarChartComponentTemplate : RKPieRadarChartComponentTemplate

/**
 The width of the web lines extending from the center of the chart.
 */
@property (readonly, nonatomic) CGFloat webLineWidth;
/**
 The width of the web lines that are between the lines extending from the center of the chart.
 */
@property (readonly, nonatomic) CGFloat innerWebLineWidth;
/**
 The transparency of the grid.
 */
@property (readonly, nonatomic) CGFloat webAlpha;
/**
 A boolean value indicating whether the web lines should be drawn.
 */
@property (readonly, nonatomic) BOOL drawWeb;
/**
 The color of the web lines that extend from the center of the chart.
 */
@property (readonly, nonatomic, strong) RKColor *webColor;
/**
 The color of the web lines between the lines extending from the center of the chart.
 */
@property (readonly, nonatomic, strong) RKColor *innerWebColor;

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
 The font information to use for the x axis label.
 */
@property (readonly, nonatomic, strong) RKFontInformation *xAxisLabelFont;
/**
 The angle in degrees for drawing the x axis labels.
 */
@property (readonly, nonatomic) CGFloat xAxisLabelRotationAngle;
/**
 The x axis label location.
 */
@property (readonly, nonatomic) RKChartXAxisLabelPosition xAxisLabelLocation;

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
@property (readonly, nonatomic, copy) NSString *xAxisCurrencyLocaleIdentifier;
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
 A boolean value indicating whether the labels should be drawn along the y axis.
 */
@property (readonly, nonatomic) BOOL yAxisEnabled;
/**
 A boolean value indicating whether the labels should be drawn along the y axis.
 */
@property (readonly, nonatomic) BOOL yAxisLabelsEnabled;
/**
 The color of the y axis label.
 */
@property (readonly, nonatomic, strong) RKColor *yAxisLabelTextColor;
/**
 The font information to use for the y axis label.
 */
@property (readonly, nonatomic, strong) RKFontInformation *yAxisLabelFont;
/**
 The y axis label location.
 */
@property (readonly, nonatomic) RKChartYAxisLabelPosition yAxisLabelLocation;

/**
 The type of value along the y axis.
 */
@property (readonly, nonatomic) RKTextComponentValueType yAxisValueType;
/**
 The number of decimals to include in the y axis value.
 */
@property (readonly, nonatomic) NSInteger yAxisDecimalPlaces;
/**
 The format to use when the y axis value is negative.
 */
@property (readonly, nonatomic) RKTextComponentNegativeFormat yAxisNegativeFormat;
/**
 A boolean value indicating whether the y axis should include the thousands separator.
 */
@property (readonly, nonatomic) BOOL yAxisThousandsSeparator;
/**
 The currency locale of the y axis value.
 */
@property (readonly, nonatomic, copy) NSString *yAxisCurrencyLocaleIdentifier;
/**
 The date format of the y axis value.
 */
@property (readonly, nonatomic) RKDateFormat yAxisDateFormat;
/**
 The time format of the y axis value.
 */
@property (readonly, nonatomic) RKTimeFormat yAxisTimeFormat;
/**
 The boolean format of the y axis value. It's unusual to have the axis values represented as boolean, but it's here for completeness.
 */
@property (readonly, nonatomic) RKBooleanFormat yAxisBooleanFormat;

@end

NS_ASSUME_NONNULL_END
