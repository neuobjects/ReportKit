//
//  RKDateTimeAxisFormatter.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 5/4/22.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>
@class RKValueFormattingOptions;
@protocol ChartAxisValueFormatter;
@protocol ChartValueFormatter;

NS_ASSUME_NONNULL_BEGIN
/**
 The `RKDateTimeValueFormatter` object contains the properties used to formatting date and time values. This class adheres to the `ChartAxisValueFormatter` and `ChartValueFormatter` protocols used by the chart components.
 */
@interface RKDateTimeValueFormatter : NSDateFormatter <ChartAxisValueFormatter, ChartValueFormatter>

/**
 Instantiates an `RKDateTimeValueFormatter` formatter using the given formatting options.
 @param formattingOptions The formatting options used to instantiate the instance.
 */
-(instancetype) initWithValueFormattingOptions:(RKValueFormattingOptions *) formattingOptions;

@end

NS_ASSUME_NONNULL_END
