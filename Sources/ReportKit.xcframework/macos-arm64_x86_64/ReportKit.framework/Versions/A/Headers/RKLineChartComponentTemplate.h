//
//  LineChartComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKBarLineChartComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKFontInformation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKLineChartComponentTemplate` class contains the properties needed to define a bar chart components. 
 */
@interface RKLineChartComponentTemplate : RKBarLineChartComponentTemplate

/**
 A boolean value to indicate whether the left axis limit line is drawn behind the data.
 */
@property (readonly, nonatomic) BOOL leftAxisLimitLineDrawBehindData;
/**
 A boolean value to indicate whether the right axis limit line is drawn behind the data.
 */
@property (readonly, nonatomic) BOOL rightAxisLimitLineDrawBehindData;
/**
 A boolean value to indicate whether the x axis limit line is drawn behind the data.
 */
@property (readonly, nonatomic) BOOL xAxisLimitLineDrawBehindData;

/**
 A boolean value indicating whether the upper limit line should be drawn for the left axis.
 */
@property (readonly, nonatomic) BOOL leftAxisUpperLimitLineEnabled;
/**
 The y value of the upper limit line to be drawn for the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisUpperLimitLineValue;
/**
 The line style to use for the left axis upper limit line.
 */
@property (readonly, nonatomic) RKLineStyle leftAxisUpperLimitLineLineStyle;
/**
 The width of the upper limit line of the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisUpperLimitLineLineWidth;
/**
 The color of the upper limit line of the left axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *leftAxisUpperLimitLineLineColor;
/**
 A boolean value indicating whether the label for the upper limit line should be drawn for the left axis.
 */
@property (readonly, nonatomic) BOOL leftAxisUpperLimitLineLabelEnabled;
/**
 The position of the left axis upper limit line.
 
 The limit line labels can be positioned at the top left, top right, bottom left or bottom right of the limit line.
 */
@property (readonly, nonatomic) RKChartLimitLabelPosition leftAxisUpperLimitLineLabelPosition;
/**
 The text to be drawn for the left axis of the upper limit line.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *leftAxisUpperLimitLineLabelText;
/**
 The color of the upper limit line text for the left axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *leftAxisUpperLimitLineLabelColor;
/**
 The font information used to draw the text for the left axis upper limit line.
 */
@property (readonly, nonatomic, strong) RKFontInformation<Optional> *leftAxisUpperLimitLineLabelFont;

/**
 A boolean value indicating whether the lower limit line should be drawn for the left axis.
 */
@property (readonly, nonatomic) BOOL leftAxisLowerLimitLineEnabled;
/**
 The y value of the lower limit line to be drawn for the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisLowerLimitLineValue;
/**
 The line style to use for the left axis lower limit line.
 */
@property (readonly, nonatomic) RKLineStyle leftAxisLowerLimitLineLineStyle;
/**
 The width of the lower limit line of the left axis.
 */
@property (readonly, nonatomic) CGFloat leftAxisLowerLimitLineLineWidth;
/**
 The color of the lower limit line of the left axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *leftAxisLowerLimitLineLineColor;
/**
 A boolean value indicating whether the label for the lower limit line should be drawn for the left axis.
 */
@property (readonly, nonatomic) BOOL leftAxisLowerLimitLineLabelEnabled;
/**
 The position of the left axis lower limit line.
 
 The limit line labels can be positioned at the top left, top right, bottom left or bottom right of the limit line.
*/
@property (readonly, nonatomic) RKChartLimitLabelPosition leftAxisLowerLimitLineLabelPosition;
/**
 The text to be drawn for the left axis of the lower limit line.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *leftAxisLowerLimitLineLabelText;
/**
 The color of the lower limit line text for the left axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *leftAxisLowerLimitLineLabelColor;
/**
 The font information used to draw the text for the left axis lower limit line.
 */
@property (readonly, nonatomic, strong) RKFontInformation<Optional> *leftAxisLowerLimitLineLabelFont;
//right
/**
 A boolean value indicating whether the upper limit line should be drawn for the right axis.
 */
@property (readonly, nonatomic) BOOL rightAxisUpperLimitLineEnabled;
/**
 The y value of the upper limit line to be drawn for the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisUpperLimitLineValue;
/**
 The line style to use for the right axis upper limit line.
 */
@property (readonly, nonatomic) RKLineStyle rightAxisUpperLimitLineLineStyle;
/**
 The width of the upper limit line of the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisUpperLimitLineLineWidth;
/**
 The color of the upper limit line of the right axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *rightAxisUpperLimitLineLineColor;
/**
 A boolean value indicating whether the label for the upper limit line should be drawn for the right axis.
 */
@property (readonly, nonatomic) BOOL rightAxisUpperLimitLineLabelEnabled;
/**
 The position of the right axis upper limit line.
 
 The limit line labels can be positioned at the top left, top right, bottom left or bottom right of the limit line.
 */
@property (readonly, nonatomic) RKChartLimitLabelPosition rightAxisUpperLimitLineLabelPosition;
/**
 The text to be drawn for the right axis of the upper limit line.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *rightAxisUpperLimitLineLabelText;
/**
 The color of the upper limit line text for the right axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *rightAxisUpperLimitLineLabelColor;
/**
 The font information used to draw the text for the right axis upper limit line.
 */
@property (readonly, nonatomic, strong) RKFontInformation<Optional> *rightAxisUpperLimitLineLabelFont;

/**
 A boolean value indicating whether the lower limit line should be drawn for the right axis.
 */
@property (readonly, nonatomic) BOOL rightAxisLowerLimitLineEnabled;
/**
 The y value of the lower limit line to be drawn for the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisLowerLimitLineValue;
/**
 The line style to use for the right axis lower limit line.
 */
@property (readonly, nonatomic) RKLineStyle rightAxisLowerLimitLineLineStyle;
/**
 The width of the lower limit line of the right axis.
 */
@property (readonly, nonatomic) CGFloat rightAxisLowerLimitLineLineWidth;
/**
 The color of the lower limit line of the right axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *rightAxisLowerLimitLineLineColor;
/**
 A boolean value indicating whether the label for the lower limit line should be drawn for the right axis.
 */
@property (readonly, nonatomic) BOOL rightAxisLowerLimitLineLabelEnabled;
/**
 The position of the right axis lower limit line.
 
 The limit line labels can be positioned at the top left, top right, bottom left or bottom right of the limit line.
*/
@property (readonly, nonatomic) RKChartLimitLabelPosition rightAxisLowerLimitLineLabelPosition;
/**
 The text to be drawn for the right axis of the lower limit line.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *rightAxisLowerLimitLineLabelText;
/**
 The color of the lower limit line text for the right axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *rightAxisLowerLimitLineLabelColor;
/**
 The font information used to draw the text for the right axis lower limit line.
 */
@property (readonly, nonatomic, strong) RKFontInformation<Optional> *rightAxisLowerLimitLineLabelFont;

//x
/**
 A boolean value indicating whether the upper limit line should be drawn for the x axis.
 */
@property (readonly, nonatomic) BOOL xAxisUpperLimitLineEnabled;
/**
 The x value of the upper limit line to be drawn for the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisUpperLimitLineValue;
/**
 The line style to use for the x axis upper limit line.
 */
@property (readonly, nonatomic) RKLineStyle xAxisUpperLimitLineLineStyle;
/**
 The width of the upper limit line of the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisUpperLimitLineLineWidth;
/**
 The color of the upper limit line of the x axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *xAxisUpperLimitLineLineColor;
/**
 A boolean value indicating whether the label for the upper limit line should be drawn for the x axis.
 */
@property (readonly, nonatomic) BOOL xAxisUpperLimitLineLabelEnabled;
/**
 The position of the x axis upper limit line.
 
 The limit line labels can be positioned at the top left, top right, bottom left or bottom right of the limit line.
 */
@property (readonly, nonatomic) RKChartLimitLabelPosition xAxisUpperLimitLineLabelPosition;//ChartLimitLabelPosition
/**
 The text to be drawn for the x axis of the upper limit line.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *xAxisUpperLimitLineLabelText;
/**
 The color of the upper limit line text for the x axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *xAxisUpperLimitLineLabelColor;
/**
 The font information used to draw the text for the x axis upper limit line.
 */
@property (readonly, nonatomic, strong) RKFontInformation<Optional> *xAxisUpperLimitLineLabelFont;

/**
 A boolean value indicating whether the lower limit line should be drawn for the right axis.
 */
@property (readonly, nonatomic) BOOL xAxisLowerLimitLineEnabled;
/**
 The y value of the lower limit line to be drawn for the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisLowerLimitLineValue;
/**
 The line style to use for the x axis lower limit line.
 */
@property (readonly, nonatomic) RKLineStyle xAxisLowerLimitLineLineStyle;
/**
 The width of the lower limit line of the x axis.
 */
@property (readonly, nonatomic) CGFloat xAxisLowerLimitLineLineWidth;
/**
 The color of the lower limit line of the x axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *xAxisLowerLimitLineLineColor;
/**
 A boolean value indicating whether the label for the lower limit line should be drawn for the x axis.
 */
@property (readonly, nonatomic) BOOL xAxisLowerLimitLineLabelEnabled;
/**
 The position of the x axis lower limit line.
 
 The limit line labels can be positioned at the top left, top right, bottom left or bottom right of the limit line.
*/
@property (readonly, nonatomic) RKChartLimitLabelPosition xAxisLowerLimitLineLabelPosition;//ChartLimitLabelPosition
/**
 The text to be drawn for the x axis of the lower limit line.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *xAxisLowerLimitLineLabelText;
/**
 The color of the lower limit line text for the x axis.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *xAxisLowerLimitLineLabelColor;
/**
 The font information used to draw the text for the x axis lower limit line.
 */
@property (readonly, nonatomic, strong) RKFontInformation<Optional> *xAxisLowerLimitLineLabelFont;

@end

NS_ASSUME_NONNULL_END
