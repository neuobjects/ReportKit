//
//  RKChartComponentView.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 4/28/22.
//

#import <ReportKit/RKComponentView.h>
//#import <ReportKit/ReportKit.h>
#import <ReportKit/RKReportKitDataTypes.h>
//@import Charts;
//@import Charts;
////@import DGCharts;
@class ChartViewBase;
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKChartComponentView` class contains the properties needed to draw a chart view
 */
@interface RKChartComponentView : RKComponentView
/**
 The instance of the DGCharts chart view that's used to render the chart.
 */
@property (readonly, weak) ChartViewBase *chartView;
/**
 An array of colors that belong to the assigned theme
 */
@property (readonly, nonatomic, strong) NSArray<RKColor *> *themeColors;

#pragma mark 
@end

NS_ASSUME_NONNULL_END
