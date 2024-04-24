//
//  NSDate+ReportKit.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 10/24/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Convenience category to return a format string for the built-in formatters.
 */@interface NSDateFormatter (ReportKit)

/**
 Generates a format string for a given date and time format.
 @param dateFormat The date format.
 @param timeFormat the time format.
 @return The format string for the given date and time formats.
 */
+(NSString *) formatStringForDateFormat:(RKDateFormat) dateFormat
                             timeFormat:(RKTimeFormat) timeFormat;
/**
 Generates a format string for a given time format. The date portion is not included in this format.
 @param timeFormat the time format.
 @return The format string for the given time format.
 */
+(NSString *) formatStringForTimeFormat:(RKTimeFormat) timeFormat;//called by formatStringForDateFormat (above) and DesignTimeSystemTextComponent
/**
 Generates a format string for a given time format. The time portion is not included in this format.
 @param dateFormat The date format.
 @return The format string for the given date format.
 */
+(NSString *) formatStringForDateFormat:(RKDateFormat) dateFormat;//called by formatStringForDateFormat (above) and DesignTimeSystemTextComponent

@end

NS_ASSUME_NONNULL_END
