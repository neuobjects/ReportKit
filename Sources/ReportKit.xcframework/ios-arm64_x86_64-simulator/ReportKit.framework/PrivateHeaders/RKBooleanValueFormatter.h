//
//  RKBooleanFormatter.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 9/28/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>
@class RKValueFormattingOptions;
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBooleanValueFormatter` object contains the properties used to formatting date and time values. This class adheres to the ``RKValueFormattingOptions protocol used by the chart components.
 */
@interface RKBooleanValueFormatter : NSFormatter
/**
 Instantiates an `RKBooleanValueFormatter` formatter using the given formatting options.
 @param formattingOptions The formatting options used to instantiate the instance.
 */
-(instancetype) initWithValueFormattingOptions:(RKValueFormattingOptions *) formattingOptions;

@end

NS_ASSUME_NONNULL_END
