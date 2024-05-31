//
//  BarLineChartComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

//#import "BasicChartComponentModel.h"
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKBasicXYAxisChartComponentTemplate.h>
#import <ReportKit/RKFontInformation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBarLineChartComponentTemplate` class contains the properties that are common to bar, line and scatter chart components.
 */
@interface RKBarLineChartComponentTemplate : RKBasicXYAxisChartComponentTemplate

/**
 GET RID OF THIS
 */
//@property (readonly, nonatomic) RKLineStyle borderLineStyle;
/**
 The line style to use for the left axis grid line.
 */
@property (readonly, nonatomic) RKLineStyle leftAxisGridLineStyle;
/**
 The line style to use for the left axis line.
 */
@property (readonly, nonatomic) RKLineStyle leftAxisAxisLineStyle;
/**
 The line style to use for the left axis line at the zero location.
 */
@property (readonly, nonatomic) RKLineStyle leftAxisZeroLineStyle;
/**
 The line style to use for the right axis grid line.
 */
@property (readonly, nonatomic) RKLineStyle rightAxisGridLineStyle;
/**
 The line style to use for the right axis line.
 */
@property (readonly, nonatomic) RKLineStyle rightAxisAxisLineStyle;
/**
 The line style to use for the right axis line at the zero location.
 */
@property (readonly, nonatomic) RKLineStyle rightAxisZeroLineStyle;

/**
 A boolean value to indicate whether the values will be clipped to contentRect. If this value is false, the values may extend outside the contentRect.
 */
@property (readonly, nonatomic) BOOL clipValuesToView;
/**
 The background color of the grid area.
 
 When the axis grid lines are drawn, this will be the color of the chart drawing area.
 */
@property (readonly, nonatomic, strong) RKColor *gridAreaColor;
/**
 The color of the border around the chart area.
 */
@property (readonly, nonatomic, strong) RKColor *borderColor;
/**
 The width of the border around the chart area.
 */
@property (readonly, nonatomic) CGFloat borderWidth;
/**
 A boolean value to indicate whether the grid lines drawn behind the data.
 */
@property (readonly, nonatomic) BOOL drawGridLinesBehindData;

/**
 The maximum number of drawn values on the chart.
 */
@property (readonly, nonatomic) NSInteger maxVisibleCount;
/**
 A boolean value to indicate whether the left axis is shown.
 */
@property (readonly, nonatomic) BOOL leftAxisEnabled;
/**
 A boolean value to indicate whether the right axis is shown.
 */
@property (readonly, nonatomic) BOOL rightAxisEnabled;
/**
 A boolean value to indicate whether the left axis is inverted.
 */
@property (readonly, nonatomic) BOOL leftAxisInverted;
/**
 A boolean value to indicate whether the right axis is inverted.
 */
@property (readonly, nonatomic) BOOL rightAxisInverted;
/**
 A boolean value to indicate whether the left axis labels are shown.
 */
@property (readonly, nonatomic) BOOL leftAxisLabelsEnabled;
/**
 A boolean value to indicate whether the right axis labels are shown.
*/
@property (readonly, nonatomic) BOOL rightAxisLabelsEnabled;
/**
 A boolean value to indicate whether the top label of the left axis is drawn.
 */
@property (readonly, nonatomic) BOOL leftAxisDrawAxisTopLabel;
/**
 A boolean value to indicate whether the top label of the right axis is drawn.
*/
@property (readonly, nonatomic) BOOL rightAxisDrawAxisTopLabel;
/**
 A boolean value to indicate whether the bottom label of the left axis is drawn.
 */
@property (readonly, nonatomic) BOOL leftAxisDrawAxisBottomLabel;
/**
 A boolean value to indicate whether the bottom label of the right axis is drawn.
 */
@property (readonly, nonatomic) BOOL rightAxisDrawAxisBottomLabel;
//colors
/**
 The color of the left axis label.
 */
@property (readonly, nonatomic, strong) RKColor *leftAxisLabelTextColor;
/**
 The color of the right axis label.
*/
@property (readonly, nonatomic, strong) RKColor *rightAxisLabelTextColor;
/**
 The color of the line along the left axis.
 */
@property (readonly, nonatomic, strong) RKColor *leftAxisAxisLineColor;
/**
 The color of the line along the right axis.
*/
@property (readonly, nonatomic, strong) RKColor *rightAxisAxisLineColor;
/**
 The color of the left axis grid.
 */
@property (readonly, nonatomic, strong) RKColor *leftAxisGridLineColor;
/**
 The color of the right axis grid.
 */
@property (readonly, nonatomic, strong) RKColor *rightAxisGridLineColor;
/**
 The color of the left axis line at location zero.
*/
@property (readonly, nonatomic, strong) RKColor *leftAxisZeroLineColor;
/**
 The color of the right axis line at location zero.
 */
@property (readonly, nonatomic, strong) RKColor *rightAxisZeroLineColor;

/**
 The font information to be used for the labels along the left axis.
 */
@property (readonly, nonatomic, strong) RKFontInformation *leftAxisLabelFont;
/**
 The font information to be used for the labels along the right axis.
 */
@property (readonly, nonatomic, strong) RKFontInformation *rightAxisLabelFont;

/**
 Reserved for future use.
 */
@property (readonly, nonatomic) RKLineCapStyle leftAxisGridLineCapStyle;
/**
 Reserved for future use.
 */
@property (readonly, nonatomic) RKLineCapStyle rightAxisGridLineCapStyle;
/**
 The text alignment for the left axis label.
 */
@property (readonly, nonatomic) NSTextAlignment leftAxisLabelAlignment;
/**
 The text alignment for the right axis label.
 */
@property (readonly, nonatomic) NSTextAlignment rightAxisLabelAlignment;

/**
 A boolean value indicating whether the grid lines should be drawn across the left axis.
 */
@property (readonly, nonatomic) BOOL leftAxisDrawGridLines;
/**
 A boolean value indicating whether the grid lines should be drawn across the right axis.
 */
@property (readonly, nonatomic) BOOL rightAxisDrawGridLines;
/**
 A boolean value indicating whether the left axis line should be drawn.
 */
@property (readonly, nonatomic) BOOL leftAxisDrawAxisLine;
/**
 A boolean value indicating whether the right axis line should be drawn.
 */
@property (readonly, nonatomic) BOOL rightAxisDrawAxisLine;
/**
 A boolean value indicating whether the left axis line at the zero location.
 */
@property (readonly, nonatomic) BOOL leftAxisDrawZeroLine;
/**
 A boolean value indicating whether the right axis line at the zero location.
 */
@property (readonly, nonatomic) BOOL rightAxisDrawZeroLine;

/**
 The axis space from the largest value to the top of the chart area. This value is a percent of the total height of the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisTopSpace;
/**
 The axis space from the largest value to the top of the chart area. This value is a percent of the total height of the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisTopSpace;
/**
 The axis space from the smallest value to the bottom of the chart area. This value is a percent of the total height of the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisBottomSpace;
/**
 The axis space from the smallest value to the bottom of the chart area. This value is a percent of the total height of the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisBottomSpace;
/**
 The width of the grid line along the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisGridLineWidth;
/**
 The width of the grid line along the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisGridLineWidth;
/**
 The width of the left axis line.
 */
@property (readonly, nonatomic) CGFloat leftAxisAxisLineWidth;
/**
 The width of the left axis line.
 */
@property (readonly, nonatomic) CGFloat rightAxisAxisLineWidth;
/**
 The width of the left axis line at the zero location.
 */
@property (readonly, nonatomic) CGFloat leftAxisZeroLineWidth;
/**
 The width of the right axis line at the zero location.
 */
@property (readonly, nonatomic) CGFloat rightAxisZeroLineWidth;

/**
 The minumum value of the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisAxisMinimum;
/**
 A boolean value indicating whether the minimum left axis value should be automatically calculated.
 */
@property (readonly, nonatomic) BOOL leftAxisAutoCalculateAxisMinimum;
/**
 The maximum value of the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisAxisMaximum;
/**
 A boolean value indicating whether the maximum left axis value should be automatically calculated.
 */
@property (readonly, nonatomic) BOOL leftAxisAutoCalculateAxisMaximum;
/**
 The minumum value of the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisAxisMinimum;
/**
 A boolean value indicating whether the minimum right axis value should be automatically calculated.
 */
@property (readonly, nonatomic) BOOL rightAxisAutoCalculateAxisMinimum;
/**
 The maximum value of the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisAxisMaximum;
/**
 A boolean value indicating whether the maximum right axis value should be automatically calculated.
*/
@property (readonly, nonatomic) BOOL rightAxisAutoCalculateAxisMaximum;

/**
 The minimum number of labels that should be listed along the left axis.
 */
@property (readonly, nonatomic) NSInteger leftAxisAxisMinLabels;
/**
 The minimum number of labels that should be listed along the right axis.
 */
@property (readonly, nonatomic) NSInteger rightAxisAxisMinLabels;
/**
 The maximum number of labels that should be listed along the left axis.
 */
@property (readonly, nonatomic) NSInteger leftAxisAxisMaxLabels;
/**
 The maximum number of labels that should be listed along the right axis.
 */
@property (readonly, nonatomic) NSInteger rightAxisAxisMaxLabels;

/**
 The number of labels across the left axis.
 */
@property (readonly, nonatomic) NSInteger leftAxisLabelCount;
/**
 The number of labels across the right axis.
 */
@property (readonly, nonatomic) NSInteger rightAxisLabelCount;

/**
 The minimum interval between left axis values.
 */
@property (readonly, nonatomic) CGFloat leftAxisGranularity;
/**
 The minimum interval between right axis values.
 */
@property (readonly, nonatomic) CGFloat rightAxisGranularity;
/**
 A boolean value to indicate whether the left axis granularity is enabled.
 
 When this value is false, the axis values could be repeated. This could happen if two adjacent values are rounded to the same value.
 */
@property (readonly, nonatomic) BOOL leftAxisGranularityEnabled;
/**
 A boolean value to indicate whether the right axis granularity is enabled.
 
 When this value is false, the axis values could be repeated. This could happen if two adjacent values are rounded to the same value.
 */
@property (readonly, nonatomic) BOOL rightAxisGranularityEnabled;

/**
 The type of value along the left axis.
 */
@property (readonly, nonatomic) RKTextComponentValueType leftAxisValueType;
/**
 The number of decimals to include in the left axis value.
 */
@property (readonly, nonatomic) NSInteger leftAxisDecimalPlaces;
/**
 The format to use when the left axis value is negative.
 */
@property (readonly, nonatomic) RKTextComponentNegativeFormat leftAxisNegativeFormat;
/**
 A boolean value indicating whether the left axis should include the thousands separator.
 */
@property (readonly, nonatomic) BOOL leftAxisThousandsSeparator;
/**
 The currency locale of the left axis value.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *leftAxisCurrencyLocaleIdentifier;
/**
 The date format of the left axis value.
 */
@property (readonly, nonatomic) RKDateFormat leftAxisDateFormat;
/**
 The time format of the left axis value.
 */
@property (readonly, nonatomic) RKTimeFormat leftAxisTimeFormat;
/**
 The boolean format of the left axis value. It's unusual to have the axis values represented as boolean, but it's here for completeness.
 */
@property (readonly, nonatomic) RKBooleanFormat leftAxisBooleanFormat;

/**
 The type of value along the right axis.
 */
@property (readonly, nonatomic) RKTextComponentValueType rightAxisValueType;
/**
 The number of decimals to include in the right axis value.
 */
@property (readonly, nonatomic) NSInteger rightAxisDecimalPlaces;
/**
 The format to use when the right axis value is negative.
 */
@property (readonly, nonatomic) RKTextComponentNegativeFormat rightAxisNegativeFormat;
/**
 A boolean value indicating whether the right axis should include the thousands separator.
 */
@property (readonly, nonatomic) BOOL rightAxisThousandsSeparator;
/**
 The currency locale of the right axis value.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *rightAxisCurrencyLocaleIdentifier;
/**
 The date format of the right axis value.
 */
@property (readonly, nonatomic) RKDateFormat rightAxisDateFormat;
/**
 The time format of the right axis value.
 */
@property (readonly, nonatomic) RKTimeFormat rightAxisTimeFormat;
/**
 The boolean format of the right axis value. It's unusual to have the axis values represented as boolean, but it's here for completeness.
 */
@property (readonly, nonatomic) RKBooleanFormat rightAxisBooleanFormat;

/**
 The X offset of the value along the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisXOffset;
/**
 The Y offset of the value along the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisYOffset;
/**
 The X offset of the value along the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisXOffset;
/**
 The Y offset of the value along the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisYOffset;

@end

NS_ASSUME_NONNULL_END
