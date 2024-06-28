//
//  PieRadarComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKBasicChartComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKPieRadarChartComponentTemplate` class contains the design-time properties that are common to pie and radar chart components.
 */
@interface RKPieRadarChartComponentTemplate : RKBasicChartComponentTemplate

/**
 The type of chart (Pie or radar)
 */
@property (readonly, nonatomic) RKPieRadarChartType pieRadarChartType;
/**
 The rotation angle of the chart.
 */
@property (readonly, nonatomic) CGFloat chartRotation;
/**
 A boolean value indicating whether the chart is rotated.
 */
@property (readonly, nonatomic) BOOL rotationEnabled;
/**
 A boolean value indicating whether the values inside the chart are drawn as a percent.
 */
@property (readonly, nonatomic) BOOL usePercent;
@end

NS_ASSUME_NONNULL_END
