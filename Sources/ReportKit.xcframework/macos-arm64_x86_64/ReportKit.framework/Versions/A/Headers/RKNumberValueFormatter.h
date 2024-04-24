//
//  RKChartAwareFormatter.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 12/27/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
@class RKValueFormattingOptions;
@protocol ChartAxisValueFormatter;
@protocol ChartValueFormatter;

NS_ASSUME_NONNULL_BEGIN
/**
 The `RKNumberValueFormatter` object contains the properties used to formatting numeric values. This class adheres to the `ChartAxisValueFormatter` and `ChartValueFormatter` protocols used by the chart components.
 */
@interface RKNumberValueFormatter : NSNumberFormatter <ChartAxisValueFormatter, ChartValueFormatter>

/**
 Instantiates an `RKNumberValueFormatter` formatter using the given formatting options.
 @param formattingOptions The formatting options used to instantiate the instance.
 */
-(instancetype) initWithValueFormattingOptions:(RKValueFormattingOptions *) formattingOptions;
@end

NS_ASSUME_NONNULL_END
