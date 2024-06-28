//
//  RKBarLineChartComponentView.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 5/6/22.
//

#import <ReportKit/RKBasicXYAxisChartComponentView.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBarLineChartComponentView` contains the common properties needed to draw a bar and line chart.
 */
@interface RKBarLineChartComponentView : RKBasicXYAxisChartComponentView

//moved to private -(void) applyBarLineChartDatasetPropertiesFromModel;

@end

NS_ASSUME_NONNULL_END
