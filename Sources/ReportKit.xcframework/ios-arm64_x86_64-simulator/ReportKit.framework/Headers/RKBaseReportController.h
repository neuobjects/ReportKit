//
//  RBBaseReportController.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 7/21/22.
//

#import <Foundation/Foundation.h>
//#import <ReportKit/ReportKit.h>
#import <ReportKit/RKReportDelegate.h>
#import <ReportKit/RKReportDataSource.h>

//#import <PDFKit/PDFKit.h>

@class RKReportProperties;
@class RKReportBuilderProjectModel;
/**
 `RKBaseReportController` The methods an object adopts to generate a report.
 
 ## RKReportDelegate Delegate
 This delegate provides methods to allow you to populate the report.
 
 ## RKReportDataSource Delegate
 This delegate provides methods that are called during the generation of the report. method names correspond to events within the reporting engine - willPrepareReport:, didPrepareReport:, etc.
 */
NS_ASSUME_NONNULL_BEGIN

@interface RKBaseReportController : NSObject <RKReportDelegate, RKReportDataSource>


-(instancetype) initWithProjectModel:(RKReportBuilderProjectModel *) projectModel
                   applicationBundle:(NSBundle *) bundle;
/**
 The fields that are added to the generated PDF.
 
 The report properties include the title, subject, author, creator and keywords.
 */
-(RKReportProperties *) reportProperties;
/**
 Generate the report. 
 
 Upon completion of this method, the report will be generated. 
 */
-(RKGeneratedReport *) generateReport;
/**
 Generate the report.
 @param properties The report properties assigned at design time. This includes the title, subject, author, creator and keywords.
 
 Upon completion of this method, the report will be generated.
 */
-(RKGeneratedReport *) generateReportWithDocumentProperties:(RKReportProperties *) properties;

/**
 Generates the subreport.
 @return The subreport view. This view can be passed to another ReportViewController which can then assign it to a subrport component on the report.
*/
-(RKView *) generateSubreportView;

@end

NS_ASSUME_NONNULL_END
