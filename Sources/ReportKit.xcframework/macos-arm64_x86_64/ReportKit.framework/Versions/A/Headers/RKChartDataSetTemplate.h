//
//  ChartDataSetModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 4/28/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/ReportKit.h>
#import <ReportKit/RKReportKitDataTypes.h>
@class RKValueFormattingOptions;
@class RKFontInformation;

NS_ASSUME_NONNULL_BEGIN

@protocol NSString;

/**
 The `RKChartDataSetTemplate` object contains the chart dataset properties
 */
@interface RKChartDataSetTemplate : JSONModel
/*
 The Dataset label.
 */
@property (readonly, nonatomic, copy) NSString *label;
/*
 The model/key that the reporting engine uses to map the value to the component.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *databaseName;
/*
 Used in conjuction with the model/key, this value contains property name used to map the value to the component x axis.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *xPropertyName;
/*
 Used in conjuction with the model/key, this value contains property name used to map the value to the component y axis.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *yPropertyName;//also the open property name for the candle chart
/*
 The formatting options used by the reporting engine to format the component value.
 */
@property (readonly, nonatomic, strong) RKValueFormattingOptions *valueFormattingOptions;
/*
 The line style used to draw the dataset.
 */
@property (readonly, nonatomic) RKLineStyle lineStyle;
/*
 A boolean value indicating whether the value should be drawn for each series.
 */
@property (readonly, nonatomic) BOOL valueEnabled;
/*
 The color of the value that prints with each series.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *valueColor;
/*
 The font used when printing the value.
 */
@property (readonly, nonatomic, strong) RKFontInformation<Optional> *valueFont;
/*
 A boolean value indicating whether the icons should be drawn with each series.
 */
@property (readonly, nonatomic) BOOL iconsEnabled;
/*
 The offset along the X axis that the icon should print.
 */
@property (readonly, nonatomic) CGFloat iconsXOffset;
/*
 The offset along the Y axis that the icon should print.
 */
@property (readonly, nonatomic) CGFloat iconsYOffset;
//vertical,horizontal bar, bubble
/*
 The color used to print the series.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *datasetColor;
//bar
/*
 The width of the bar chart border.
 */
@property (readonly, nonatomic) CGFloat barBorderWidth;
/*
 The bar chart border color.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *barBorderColor;
/*
 The color of the bar shadow.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *barShadowColor;
//stacked
/*
 The property names of the entries for a stacked chart. The reporting engine uses these property names to map the data to the chart dataset.
 */
@property (readonly, nonatomic, copy) NSArray<NSString *><Optional> *stackPropertyNames;
/*
 The labels of the entries for a stacked chart.
 */
@property (readonly, nonatomic, copy) NSArray<NSString *><Optional> *stackLabelNames;
/*
 The entry colors for a stacked chart.
 */
@property (readonly, nonatomic, strong) NSArray<RKColor *><Optional> *stackColors;
//positive/hegative, negative stacked
/*
 The color of the first stack for the Negative Stacked charts or positive entries in the Positive/Negative chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *firstDatasetColor;
/*
 The color of the second stack for the Negative Stacked charts or negative entries in the Positive/Negative chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *secondDatasetColor;
//bubble
/*
 The property name used to map the size of the bubbles in a bubble chart.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *bubbleSizePropertyName;
//candle
/*
 The property name used to map the shadow high value in the candle chart.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *candleShadowHighPropertyName;
/*
 The property name used to map the shadow low value in the candle chart.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *candleShadowLowPropertyName;
/*
 The property name used to map the close value in the candle chart.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *candleClosePropertyName;
/*
 The property name used to map the color of the increasing color value in the candle chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *candleIncreasingColor;
/*
 The property name used to map the color of the decreasing color value in the candle chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *candleDecreasingColor;
/*
 The property name used to map the color of the neutral color value in the candle chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *candleNeutralColor;
/*
 The shadow color value in the candle chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *candleShadowColor;
/*
 The width of the shadow color for the candle chart.
 */
@property (readonly, nonatomic) CGFloat candleShadowWidth;
/*
 A boolean value indicating whether the candle bar should be shown.
 */
@property (readonly, nonatomic) BOOL showCandleBar;
/*
 A boolean value indicating whether the increasing value should be filled in for the candle chart.
 */
@property (readonly, nonatomic) BOOL candleIncreasingFilled;
/*
 A boolean value indicating whether the decreasing value should be filled in for the candle chart.
 */
@property (readonly, nonatomic) BOOL candleDecreasingFilled;
//line
@property (readonly, nonatomic) CGFloat lineCircleRadius;
/*
 A boolean value indicating whether the circles should be enabled for the line chart.
 */
@property (readonly, nonatomic) BOOL lineCircleEnabled;
/*
 The color of the circle colors for the line chart. Only applicable if the circles are enabled.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *lineCircleColor;
/*
 The width of the lines on the line chart.
 */
@property (readonly, nonatomic) CGFloat lineChartLineWidth;
//scatter
/*
 The shape used to draw the locations of the scatter entries.
 */
@property (readonly, nonatomic) RKScatterShape scatterShape;
/*
 The color used to fill in the scatter chart cirle.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *scatterShapeHoleColor;
/*
 The radius of the hole used for the entry circles on the scatter chart.
 */
@property (readonly, nonatomic) CGFloat scatterShapeHoleRadius;
/*
 The size of the scatter chart shape.
 */
@property (readonly, nonatomic) CGFloat scatterShapeSize;
//pie
/*
 The space between the slices in a pie chart.
 */
@property (readonly, nonatomic) CGFloat pieSliceSpace;
/*
 The location of the value for the pie chart (Inside or Outside).
 
 The X and Y value postions will be the same for the pie chart.
 */
@property (readonly, nonatomic) CGFloat pieXValuePosition;
/*
 The location of the value for the pie chart (Inside or Outside).
 
 The X and Y value postions will be the same for the pie chart.
 */
@property (readonly, nonatomic) CGFloat pieYValuePosition;
/*
 The line color used for the pie chart values when the values are printed outside the chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *pieLineColor;
/*
 The width of the line for the pie chart values when the values are printed outside the chart.
 */
@property (readonly, nonatomic) CGFloat pieValueLineWidth;
//line/radar
/*
 A boolean value indicating whether the dataset area should be filled for line and radar charts.
 */
@property (readonly, nonatomic) BOOL lineRadarDatasetDrawFillEnabled;
/*
 The color of the filled area for line and radar charts.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *lineRadarDatasetFillColor;
/*
 The alpha value of the filled area for line and radar charts.
 */
@property (readonly, nonatomic) CGFloat lineRadarDatasetFillAlpha;

//icon image
/*
 The image set name used for the icon if the image is in the asset catalog.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *imageSetName;
/*
 The path to the icon image if it's in the asset catalog.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *assetPath;
/*
 The standalone icon image name or the name in the asset catalog.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *imageName;
/*
 A value used to scale the icon image.
 */
@property (readonly, nonatomic) CGFloat iconImageScale;

@end

NS_ASSUME_NONNULL_END
