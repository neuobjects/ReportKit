//
//  SystemTextComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 4/26/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

//#import <ReportBuilderFramework/ReportBuilderFramework.h>
#import <ReportKit/JSONModel.h>
#import <ReportKit/RKTextComponentTemplate.h>
//#import "DataAwareComponentModel.h"
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKFontInformation.h>
#include <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKSystemTextComponentTemplate` object contains the design-time properties used to create a system text field component.
 */
@interface RKSystemTextComponentTemplate : RKTextComponentTemplate
/**
 The type of system field.
 */
@property (readonly, nonatomic) RKSystemTextFieldType systemFieldType;//
/**
 The page number format if this is a Page Number system field type.
 */
@property (readonly, nonatomic) RKPageNumberFormat pageNumberFormat;
/**
 The scope of the page numbering.
 @discussion For a 6 page report, the standard Report page numbering scheme will number the pages 1 through 6. When those 6 pages are generated for 3 differenet customers for example, may want to number those pages according to customer.
 
 Given the following example:
 
 • Customer 1 is page 1-2
 
 • Customer 2 is page 3
 
 • Customer 3 is page 4-6
 
 You may want to assign Customer 1 page numbers 1-2, Customer 2 should have Page 1, while Customer 3 is Page 1-3. You can accomplish this by setting the pageNumberScope to RKPageNumberScopeGroup.
 When generating a report for multiple records, it's possible to assign page numbers per record. For example, when generating a report for 3 customers.
 */
@property (readonly, nonatomic) RKPageNumberScope pageNumberScope;//report|group

@end

NS_ASSUME_NONNULL_END
