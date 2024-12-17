//
//  RKValueFormatter.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 12/21/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/JSONModel.h>
#import <ReportKit/RKChartAxisValueFormatter.h>
#import <ReportKit/RKChartValueFormatter.h>

@protocol RKChartAxisValueFormatter;
@protocol RKChartValueFormatter;

NS_ASSUME_NONNULL_BEGIN
/**
 The `RKValueFormattingOptions` object is a generic formatting class that is used to format different value types.
 */
@interface RKValueFormattingOptions : JSONModel
/**
 The type of value these formatting options are for.
 */
@property (nonatomic) RKTextComponentValueType valueType;
/**
 The number of decimals to print (if applicable).
 */
@property (nonatomic) NSInteger decimalPlaces;
/**
 The format of the negative numeric value (if applicable).
 */
@property (nonatomic) RKTextComponentNegativeFormat negativeFormat;
/**
 A boolean value to indicate whether or not the thousands separator should print (if applicable).
 */
@property (nonatomic) BOOL thousandsSeparator;
/**
 The locale identifier to display the currency value (if applicable).
 */
@property (nonatomic, copy, nullable) NSString<Optional> *currencyLocaleIdentifier;
/**
 The format of the date value (if applicable).
 */
@property (nonatomic) RKDateFormat dateFormat;
/**
 The format of the time value (if applicable).
 */
@property (nonatomic) RKTimeFormat timeFormat;
/**
   The format of the boolean value (if applicable).
 */
@property (nonatomic) RKBooleanFormat booleanFormat;

/**
 Initializes an instance of the `RKValueFormattingOptions` class.
 @param valueType The type of the component we'll be using the formatter with (Text, currency, etc).
 @param decimalPlaces The number of decimals for the formatter.
 @param negativeFormat The format style used for negative values.
 @param thousandsSeparator A boolean value to indicate whether to include the thousands separator.
 @param currencyLocaleIdentifier The currency locale identifier to use.
 @param dateFormat The date format.
 @param timeFormat The time format.
 @param booleanFormat The boolean format.
 
 */
-(instancetype) initWithValueType:(RKTextComponentValueType) valueType
                    decimalPlaces:(NSInteger) decimalPlaces
                   negativeFormat:(RKTextComponentNegativeFormat) negativeFormat
               thousandsSeparator:(BOOL) thousandsSeparator
         currencyLocaleIdentifier:(NSString *) currencyLocaleIdentifier
                       dateFormat:(RKDateFormat) dateFormat
                       timeFormat:(RKTimeFormat) timeFormat
                    booleanFormat:(RKBooleanFormat) booleanFormat;
/**
 Generates an `RKValueFormattingOptions` instantance for a numeric value with the given properties.
 @param decimals The number of decimals to include in the formatter.
 @param negativeFormat The format style used for negative values.
 @param includeSeparator A boolean value to indicate whether to include the thousands separator.
 @return The instance of `RKValueFormattingOptions` containing the formatting information.
 */
+(RKValueFormattingOptions *) numberValueFormattingOptionsWithDecimalPlaces:(NSInteger) decimals
                                                             negativeFormat:(RKTextComponentNegativeFormat) negativeFormat
                                                                  thousands:(BOOL) includeSeparator;
/**
 Generates an `RKValueFormattingOptions` instantance for a currency value with the given properties.
 @param decimals The number of decimals to include in the formatter.
 @param localeIdentifier The identifer to use for the currency symbol.
 @param negativeFormat The format style used for negative values.
 @param includeSeparator A boolean value to indicate whether to include the thousands separator.
 @return The instance of `RKValueFormattingOptions` containing the formatting information.
 */
+(RKValueFormattingOptions *) currencyValueFormattingOptionsWithDecimalPlaces:(NSInteger) decimals
                                                     currencyLocaleIdentifier:(NSString *) localeIdentifier
                                                               negativeFormat:(RKTextComponentNegativeFormat) negativeFormat
                                                                    thousands:(BOOL) includeSeparator;
/**
 Generates an `RKValueFormattingOptions` instantance for a spelledout currency value
 @return The instance of `RKValueFormattingOptions` containing the formatting information.
 */
+(RKValueFormattingOptions *) currencySpelledValueFormattingOptions;
/**
 Generates an `RKValueFormattingOptions` instantance for a date/time value with the given properties.
 @param dateFormat The date format.
 @param timeFormat The time format.
 @return The instance of `RKValueFormattingOptions` containing the formatting information.
 */
+(RKValueFormattingOptions *) dateTimeValueFormattingOptionsWithDateFormat:(RKDateFormat) dateFormat
                                                                timeFormat:(RKTimeFormat) timeFormat;
/**
 Generates an `RKValueFormattingOptions` instantance for a boolean value with the given properties.
 @param format The format of the boolean value.
 @return The instance of `RKValueFormattingOptions` containing the formatting information.

 */
+(RKValueFormattingOptions *) booleanValueFormattingOptionsWithFormat:(RKBooleanFormat) format;

/**
  @return An `NSFormatter` instance using the formatting properties
 */
-(NSFormatter *) formatter;
/**
 @return a formatter that adheres to the `ChartAxisValueFormatter` and `ChartValueFormatter` protocols used by the chart components.
 */
//-(id <ChartAxisValueFormatter, ChartValueFormatter>) chartValueFormatter;
-(NSObject <RKChartAxisValueFormatter, RKChartValueFormatter> *) chartValueFormatter;

@end

NS_ASSUME_NONNULL_END
