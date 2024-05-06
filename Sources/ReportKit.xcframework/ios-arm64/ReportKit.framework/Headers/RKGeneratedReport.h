//
//  RKGeneratedContentReport.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 4/13/22.
//

#import <Foundation/Foundation.h>
#import <PDFKit/PDFKit.h>
@class RKReportProperties;
@class RKGeneratedPage;
@class RKGenerationError;
/**
 `RKGeneratedReport` is the object that contains the generated report. This object is passed to most of the methods in the `RKReportDelegate` and `RKDataReportSource` delegates.
 */

@interface RKGeneratedReport : NSObject

/**
 The report properties are initialized from the Report Builder IDE. They can be updated prior to calling generateReport from the Report Controller.
 */
@property (readonly, nonatomic, strong) RKReportProperties *reportProperties;

/**
 As the report is being gererated, this method can be used to retrieve the index of the given report. This is especially useful when combining multiple instances of a report into a single PDF
 @return the index of the report
*/
-(NSInteger) currentReportIndex;
/**
 Converts the report to a PDF.
 @return The PDF for the generated report
 */
-(PDFDocument *) generatePdf;
/**
 Converts the report to a subreport PDF.
 @return The PDF of the subreport, This is similar to the `pdf` method, but this call limits to PDF to just the first page.
 */
-(PDFDocument *) subreportPdf;
/**
 The individual pages of the finished reports.
 @return The array of `RKGeneratedPage` objects of the finished report. These pages can be converted to UIView (or NSViews) to be used in other parts of your application.
 */
-(NSArray<RKGeneratedPage *> *) pages;
/**
 Use this method to combine pages from one report into another.
  @param report This is the source report. The report pages will be added to the end of this report.
  @param renumber Should the report be renumbered to account for the added pages?
 */
-(void) appendPagesFromReport:(RKGeneratedReport *) report
                renumberPages:(BOOL) renumber;
/**
 The report properties for the generated PDF document.
 @return the properties of the report. These correspond to the title, subject, author, creator and keywords properties that are added to the generated PDF document.
 */
//-(RKReportProperties *) reportProperties;
-(NSArray<RKGenerationError *> *) generationErrors;
@end
