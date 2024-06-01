//
//  RKCurrencySpelledOutValueFormatter.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 12/27/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol RKChartAxisValueFormatter;
@protocol RKChartValueFormatter;
//@protocol ChartAxisValueFormatter;
//@protocol ChartValueFormatter;
//@import DGCharts;

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKCurrencySpelledOutValueFormatter` object contains the properties used to formatting currency values. This class adheres to the `ChartAxisValueFormatter` and `ChartValueFormatter` protocols used by the chart components.
 */
//@interface RKCurrencySpelledOutValueFormatter : NSNumberFormatter <ChartAxisValueFormatter, ChartValueFormatter>
@interface RKCurrencySpelledOutValueFormatter : NSNumberFormatter <RKChartAxisValueFormatter, RKChartValueFormatter>

/**
 Initializes an instance of `RKCurrencySpelledOutValueFormatter` using the given locale
 */
-(instancetype) initWithLocale:(NSLocale *) locale;

@end

NS_ASSUME_NONNULL_END
