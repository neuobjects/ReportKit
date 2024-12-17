//
//  RKReportMessage.h
//  ReportKit
//
//  Created by Brian Lazarz on 4/30/24.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>

/**
 `RKReportMessage` contains warning and error messages that are encountered by the reporting engine while preparing and generating the report.
 
 This class was created to help the developer debug issues that may arise while developing a report. Warnings and errors that are encountered by the reporting engine are accumulated in an array. An example warning might be _Key CustomerName not found on band (Detail Band), row 1._ While this issue is only considered a _Warning_, it may point to a larger error during the development of the report.  An example error might be _Property CompanyLogo is unable to be converted to a string._. If you encounter errors you feel should not be flagged as such, please [open a support ticket](https://support.reportbuilderx.com).
 
 > Important: This class was specifically designed for debugging purposes. Errors that are encountered by the reporting engine are likely resolved during development. For example, a mispelled <doc:ModelKey> value on the report design will get flagged as a warning. The `RKReportMessage` class is designed to help you catch issues like this.
 
 */
@interface RKReportMessage : NSObject

/**
 Messages are considered warnings or errors. 
 */
@property (nonatomic, readonly) RKMessageType type;
/**
 A detailed description of the warning or error.
 */
@property (nonatomic, copy, readonly) NSString *longDescription;
/**
 A brief description describing the warning or error.
 */
@property (nonatomic, copy, readonly) NSString *shortDescription;
/**
 A comment (if any) that describes steps you might take to resolve the issue.
 */
@property (nonatomic, copy, readonly) NSString *recoverySuggestion;

@end

