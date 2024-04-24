//
//  RKGlobalDefinitions.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 1/14/22.
//

#import <Foundation/Foundation.h>
/*
typedef enum : NSUInteger
{
  rtUnknown,
  rtList,
  rtPrimary,
  rtGrouped,
  rtLabels,
  rtSinglePage,
  rtCombined
} RTReportType;
*/

//notice that this is a CONTENT TYPE, not the section type - we already know we're in a section
typedef enum : NSUInteger
{
  RKContentTypeUnknown,
  //RKContentTypeSubreport,
  RKContentTypeDetail,
  RKContentTypeGroup
} RKContentType;

/*
typedef enum : NSUInteger
{
  gtUnknown,
  gtSubreport,
  gtDetail,
  gtGroup
} GTGroupType;
*/
@interface RKGlobalDefinitions : NSObject

@end
