//
//  RKDateTimeAxisFormatter.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 5/4/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>
@class RKValueFormattingOptions;
@protocol RKChartAxisValueFormatter;
@protocol RKChartValueFormatter;

NS_ASSUME_NONNULL_BEGIN
/**
 The `RKDateTimeValueFormatter` object contains the properties used to formatting date and time values. This class adheres to the `ChartAxisValueFormatter` and `ChartValueFormatter` protocols used by the chart components.
 */
@interface RKDateTimeValueFormatter : NSDateFormatter <RKChartAxisValueFormatter, RKChartValueFormatter>

/**
 Instantiates an `RKDateTimeValueFormatter` formatter using the given formatting options.
 @param formattingOptions The formatting options used to instantiate the instance.
 */
-(instancetype) initWithValueFormattingOptions:(RKValueFormattingOptions *) formattingOptions;

@end

NS_ASSUME_NONNULL_END
