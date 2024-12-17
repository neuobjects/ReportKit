//
//  RKChartComponentView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 4/28/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentView.h>
#import <ReportKit/RKReportKitDataTypes.h>
@class ChartViewBase;

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKChartComponentView` class contains the properties needed to draw a chart view.
 */
@interface RKChartComponentView : RKComponentView
/**
 The instance of the DGCharts chart view that's used to render the chart. 
 */
@property (readonly, weak) ChartViewBase *chartView;
//@property (readonly, weak) id chartView;
/**
 An array of colors that belong to the assigned theme.
 */
@property (readonly, nonatomic, strong) NSArray<RKColor *> *themeColors;

#pragma mark 
@end

NS_ASSUME_NONNULL_END
