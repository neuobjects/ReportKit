//
//  RKPieChartComponentTemplate.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKPieRadarChartComponentTemplate.h>
#import <ReportKit/JSONValueTransformer+ReportKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKPieChartComponentTemplate` class contains the design-time properties that are needed to create a pie chart component.
 */
@interface RKPieChartComponentTemplate : RKPieRadarChartComponentTemplate

/**
 The text that's drawn in the center pf the chart.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *centerText;
/**
 the radius of the circle next to the hole at the center of the chart.
 */
@property (readonly, nonatomic) CGFloat holeTransparencyRadiusPercent;
/**
 The color of the transparent circle in the center of the chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *holeTransparencyColor;
/**
 The size of the hole in the center of the chart.
 */
@property (readonly, nonatomic) CGFloat holeRadiusPercent;
/**
 A boolean value indicating whether the entry labels should be drawn.
 */
@property (readonly, nonatomic) BOOL drawEntryLabels;
/**
 A boolean value indicating whether the inner tips of pie slices will be drawn underneath the partially-transparent hole.
 */
@property (readonly, nonatomic) BOOL drawSliceUnderHole;
/**
 A boolean value indicating whether the hole in the center of the chart should be drawn.
 */
@property (readonly, nonatomic) BOOL holeEnabled;
/**
 The color for the hole that is drawn in the center of the chart.
 */
@property (readonly, nonatomic, strong) RKColor<Optional> *holeColor;
/**
 The maximum angle of the pie.
 */
@property (readonly, nonatomic) CGFloat maxAngle;

@end

NS_ASSUME_NONNULL_END
