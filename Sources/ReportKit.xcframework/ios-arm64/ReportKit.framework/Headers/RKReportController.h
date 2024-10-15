//
//  RBReportController.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 7/21/22.
//

#import <Foundation/Foundation.h>
//#import <ReportKit/ReportKit.h>
#import <ReportKit/RKReportDelegate.h>
#import <ReportKit/RKReportDataSource.h>

//#import <PDFKit/PDFKit.h>

@class RKDocumentAttributes;
@class RKReportBuilderProjectModel;
/**
 The `RKReportController` is a controller that specializes in the generation of a report.
 
 ## RKReportDelegate
 This delegate provides methods to allow you to populate the report.
 
 ## RKReportDataSource
 This delegate provides methods that are called during the generation of the report. Method names correspond to events within the reporting engine - `willPrepareReport:`, `didPrepareReport:`, etc.
 */
//NS_ASSUME_NONNULL_BEGIN

@interface RKReportController : NSObject <RKReportDelegate, RKReportDataSource>


-(instancetype) initWithProjectModel:(RKReportBuilderProjectModel *) projectModel
                   applicationBundle:(NSBundle *) bundle;
/**
 The fields that are added to the generated PDF.
 
 The report properties include the title, subject, author, creator and keywords.
 */
-(RKDocumentAttributes *) reportProperties;
/**
 Prepares the report.
 
 When a report is prepared, the page views are assembled into the RKGeneratedReport object. Once prepared, the report will be ready to be sent to a PDF via generatePdf.
 */
-(RKReport *) prepareReport;
/**
 Generate the report.
 @param properties The report properties assigned at design time. This includes the title, subject, author, creator and keywords.
 
 Upon completion of this method, the report will be generated.
 */
-(RKReport *) prepareReportWithDocumentProperties:(RKDocumentAttributes *) properties;

/**
 Generates the subreport view. This view can be passed to another ReportViewController which can then assign it to a subreport component on the report. Any errors that occured during the preparation or generaton process will be included in the completion handler.
*/
-(void) generateSubreportViewWithCompletionHandler:(RKGenerateViewHandler) completionHandler;
//-(RKView *) generateSubreportView;

@end

//NS_ASSUME_NONNULL_END
