//
//  RKReportMessage.h
//  ReportKit
//
//  Created by Brian Lazarz on 4/30/24.
//  Copyright © 2024 Brian Lazarz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>

/**
 `RKReportMessage` contains debug messages that are encountered by the reporting engine while preparing and generating the report.
 
 Messages are considered either warnings or errors. An example warning might be "Key CustomerName not found on band (Detail Band), row 1." While this issue is only considered a _Warning_, it may point to a larger error during the development of the report.  An example error might be "Property CompanyLogo is unable to be converted to a string.". If you encounter errors you feel should not be flagged as such, please [open a support ticket](https://support.reportbuilderx.com).
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

