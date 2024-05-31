//
//  ChartComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKFontInformation.h>
@class RKChartDataSetTemplate;
#include <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@protocol RKChartDataSetTemplate;
/**
 The `RKChartComponentTemplate` object contains the common chart properties.
 */
@interface RKChartComponentTemplate : RKComponentTemplate
/*
 The base chart type.
 */
@property (readonly, nonatomic) RKChartType baseChartType;
/*
 A boolean value indicating whether the chart description Should print.
 */
@property (readonly, nonatomic) BOOL chartDescriptionEnabled;
/*
 The chart description.
 */
@property (readonly, nonatomic, copy) NSString *chartDescriptionText;
/*
 The alignment for the chart description text
 */
@property (readonly, nonatomic) NSTextAlignment chartDescriptionTextAlignment;
/*
 The color of the chart description.
 */
@property (readonly, nonatomic, strong) RKColor *chartDescriptionTextColor;
/*
 The font used for the chart description.
 */
@property (readonly, nonatomic, strong) RKFontInformation *chartDescriptionFont;
/*
 The X axis offset for the chart description.
 
 The chart discription will be drawn in the lower righthand corner of the chart frame. The X and Y offsets will be applied to that location.
 */
@property (readonly, nonatomic) CGFloat chartDescriptionXOffset;
/*
 The Y axis offset for the chart description.
 
 The chart discription will be drawn in the lower righthand corner of the chart frame. The X and Y offsets will be applied to that location.
 */
@property (readonly, nonatomic) CGFloat chartDescriptionYOffset;
/*
 A boolean value indicating whether the chart legend should print.
 */
@property (readonly, nonatomic) BOOL legendEnabled;
/*
 The text color of the chart legend.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *legendTextColor;
/*
 The font used for the chart legend.
 */
@property (readonly, nonatomic, strong) RKFontInformation *legendFont;
/*
 A boolean value indicating whether the legend text should wrap.
 */
@property (readonly, nonatomic) BOOL legendWordWrap;
/*
 The maximum percent the legend can be. This value is based on the width of the chart frame.
 */
@property (readonly, nonatomic) CGFloat legendMaxSizePercent;
/*
 The style of the legend form. The legend form is the colored indicator on the legend used to represent the chart entries.
 */
@property (readonly, nonatomic) RKChartLegendForm legendFormStyle;//ChartLegendForm
/*
 The size of the legend form.
 */
@property (readonly, nonatomic) CGFloat legendFormSize;
/*
 The line style of the legend form when the form style is set to `RKChartLegendFormLine`.
 */
@property (readonly, nonatomic) RKLineStyle legendFormLineStyle;
/*
 The line width of the legend form when the style is set to `RKChartLegendFormLine`.
 */
@property (readonly, nonatomic) CGFloat legendFormLineWidth;
/*
 The orientation of the legend.
 */
@property (readonly, nonatomic) RKChartLegendOrientation legendOrientation;//ChartLegendOrientation
/*
 A boolean value indicating whether the legend is located inside the chart.
 */
@property (readonly, nonatomic) BOOL legendLocationInside;
/*
 The origin of the legend relative to the chart frame.
 */
@property (readonly, nonatomic) RKTextPivotOrigin legendPivotOrigin;
/*
 An array of datasets for the chart.
 */
@property (readonly, nonatomic, strong) NSArray<RKChartDataSetTemplate *> <RKChartDataSetTemplate> *datasets;

@end

NS_ASSUME_NONNULL_END
