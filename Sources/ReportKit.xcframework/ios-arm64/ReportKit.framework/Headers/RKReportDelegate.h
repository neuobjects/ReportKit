//
//  RKGroupContentReportDelegate.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 4/5/22.
//

#import <Foundation/Foundation.h>
//#import <ReportKit/ReportKit.h>

@class RKReport;
@class RKBand;
@class RKComponent;
@class RKReportEngine;
@class RKGroupTemplate;
@class RKPage;
@class RKCustomComponentView;
@class RKReportGroup;
@class PDFDocument;
@class PDFPage;

/**
 The `RKReportDelegate` protocol defines a set of optional methods that can be called during the generation of a report.
 */
@protocol RKReportDelegate <NSObject>

@optional
/**
 Called during `generateReport` when the report is about to prepared. The preparation process includes all the work required to generate and layout the individual components, bands and pages that make up the final report.
 @param report The instance of the generated report. For this method, the `report` property only contains the Report Properties that were assigned in Report Builder.
 */
-(void) willPrepareReport:(RKReport *) report;
/**
 Called at the the end of `generateReport` when the report has been fully-generated.
 @param report The instance of the generated report. When this method is called, `report` contains the finished report.
 */
-(void) didPrepareReport:(RKReport *) report;//called from generateReport and subreportToPdf
/**
 Called when each report has finished generating the report for a given primary record.
 @param recordIndex The index of the primary record that's been prepared.
 
 A report can be generated for one or more primary records. A primary record is the object we're reporting on. For example, if we're generating a report for a list of customers, the customer is considered the primary record.
 */
-(void) didPrepareReport:(RKReport *) report
 forPrimaryRecordAtIndex:(NSInteger) recordIndex;//when to call this - after all reports are generated (and the PDFs are generated) or as they've been prepared?

/**
 Called when the reporting engine is about to prepare a new page for the given record.
 @param report The report that is getting prepared.
 @param recordIndex The index of the primary record that's being reported on.
 @param page The page that is about to be prepared.
 
 The `page` parameter contains minimal information since the page has not yet been generated. The `pageNumber` and `recordPageNumber` properties are available at this point in the process.
 */
-(void) report:(RKReport *) report
forPrimaryRecordAtIndex:(NSInteger) recordIndex
willPreparePage:(RKPage *) page;//pass 2

/**
 Called when the given band is about to be prepared.
 @param report The report that is currently getting generated.
 @param band The band that is getting prepared.
 @param proposedPage This is the page the band is expected to appear on.
 @param group The current group that's being processed.
 
 Prior to band preparion, the reporting engine has not yet determined if it will fit on the proposed page.
 If the band that is being prepared does not fit on the page, the proposed page will be added to the report before this band is added. A new page will be generated at that time and the band will be added to it.
 */
-(void) report:(RKReport *) report
willPrepareBand:(RKBand *) band//if we don't pass the indexPath, we'll have to grab it from the band
onProposedPage:(RKPage *) proposedPage
         group:(RKReportGroup *) group;

/**
 Called when the report is about to prepare the page footer band.
 @param report The report that the page footer band will be appended to.
 @param page The page the footer band will appear on.
 @param band The footer band that is about to be prepared.
 @param overflow `true` if the page footer band is being prepared because a band was could not fit on the proposed page.
 
 While the reporting engine arranges the bands on a page, it checks whether the band fits on the current page. If not, the `overflow` flag is then set. At that point, the page footer will be prepared and positioned on the current page. The reporting engine will then begin to prepare the subsequent page with the remaining bands.
 */
-(void) report:(RKReport *) report
          page:(RKPage *) page
willPreparePageFooterBand:(RKBand *) band
   didOverflow:(BOOL) overflow;

/**
 This method is called when a band is getting placed onto a page but there's not enough room for it. The reporting engine will call this method before placing the band on the page.
 @param report The report that is getting generated.
 @param group The group processed.
 @param band The band getting processed.
 @param fromPage The generated page the reporting engine is segueing from.
 @param toPage The generated page the reporting is segueing to.
 
 This method is called when a band is getting placed onto a page but there's not enough room for it. The reporting engine will call this method before placing the band on the page.
 */
-(void) report:(RKReport *) report
         group:(RKReportGroup *) group
          band:(RKBand *) band
willSegueFromPage:(RKPage *) fromPage
        toPage:(RKPage *) toPage;
/**
 This method is called when a new page is generated because the placement of a band will cause a page overflow. Once the reporting engine detects a page overflow, the page footer band will be generated on the current page. A new page will then get initialized and the heading bands will get placed on it. Finally, the band will get placed onto the new page and this method will get called, if implemented.
 @param report The report that is getting generated.
 @param group The group processed.
 @param band The band getting processed.
 @param fromPage The generated page the reporting engine is segueing from.
 @param toPage The generated page the reporting is segueing to.
 */
-(void) report:(RKReport *) report
         group:(RKReportGroup *) group
          band:(RKBand *) band
didSegueFromPage:(RKPage *) fromPage
        toPage:(RKPage *) toPage;
/**
 Called when the reporting engine is about to prepare a component for a page.
 @param report The report that is getting generated.
 @param group The group processed.
 @param band The band the component resides on.
 @param component The component that is getting prepared.
 
 At this point in the process, the component does not yet have a view associated with. The component does have all the design-time properties associated with it.
 
 */
-(void) report:(RKReport *) report
         group:(RKReportGroup *) group
          band:(RKBand *) band
willPrepareComponent:(RKComponent *) component;//pass 1
/**
 Called when the reporting engine is finised preparing a component for a page.
 @param report The report that is getting generated.
 @param group The group processed.
 @param band The band the component resides on.
 @param component The component that has been prepared.
 
 At this point in the process, the component is fully-prepared including the view to be printed. At this point in the process changes can be made the component view however, the frame size should not increase.
 */
 -(void) report:(RKReport *) report
         group:(RKReportGroup *) group
          band:(RKBand *) band
didPrepareComponent:(RKComponent *) component;//pass 2

/**
 Called when the component is assigned a value but before the value is formatted
 @param report The report that is getting generated.
 @param band The band the component resides on.
 @param component The component that has a value to format.
 
 If this method is not implemented, the reporting engine will attempt to format the component value with using the formatting properties assigned at design-time.
 */
-(BOOL) report:(RKReport *) report
          band:(RKBand *) band
shouldFormatValueForComponent:(RKComponent *) component;
/**
 Called when the reporting engine is is finished preparing a page for the given record.
 @param report The report that is getting prepared.
 @param recordIndex The index of the primary record that's being reported on.
 @param page The page that is about to be prepared.
 
 The `page` parameter is the complete, generated page for the report.
 */
-(void) report:(RKReport *) report
primaryRecordIndex:(NSInteger) recordIndex
didPreparePage:(RKPage *) page;//pass 2
/**
 Called when the given group is about to be prepared.
 @param report The report that is currently getting generated.
 @param proposedPage This is the page the band is expected to appear on.
 @param group The group that's about to be prepared processed.
 */
-(void) report:(RKReport *) report
  proposedPage:(RKPage *) proposedPage
willPrepareGroup:(RKReportGroup *) group;//pass 1
/**
 Called when the given group has been prepared
 @param report The report that is currently getting generated.
 @param page This is the page the band appears on.
 @param group The group that's about to be prepared processed.
 */
-(void) report:(RKReport *) report
          page:(RKPage *) page
didPrepareGroup:(RKReportGroup *) group;//pass 1
/**
 Tells the delegate the chart properties have been applied.
 @param report The report that is getting generated.
 @param band The band the component resides on.
 @param component The chart component.
 */
-(void) report:(RKReport *) report
          band:(RKBand *) band
didApplyChartProperties:(RKComponent *) component;
/**
 Tells the delegate the band is about to be positioned on the report.
 @param report The report that is getting generated.
 @param band The band that is getting positioned
 @param proposedPage The page the band is getting positioned on.
 @param group The group the band belongs to.
 @param recordIndex The index of the primary record that's being processed.

 At this point in the process, the reporting engine is about to position the band on a page. If there's not enough room on the page, the band will get postioned on a new page. In this instance, the proposedPage will differ from the actual page it's positioned on.
 */
-(void) report:(RKReport *) report
willPositionBand:(RKBand *) band
onProposedPage:(RKPage *) proposedPage
         group:(RKReportGroup *) group
primaryRecordIndex:(NSInteger) recordIndex;
/**
 Tells the delegate the band has been positioned on the report.
 @param report The report that is getting generated.
 @param band The band that is getting positioned
 @param page The page the band is getting positioned on.
 @param group The group the band belongs to.
 @param recordIndex The index of the primary record that's being processed.

 */
-(void) report:(RKReport *) report
didPositionBand:(RKBand *) band
        onPage:(RKPage *) page
         group:(RKReportGroup *) group
primaryRecordIndex:(NSInteger) recordIndex;
/**
 Tells the delegate that the given band has been prepared.
 @param report The report that is currently getting generated.
 @param band The band that is getting prepared.
 @param page This is the page the band appeas on.
 @param group The current group that's being processed.
 
 */
-(void) report:(RKReport *) report
didPrepareBand:(RKBand *) band
        onPage:(RKPage *) page
         group:(RKReportGroup *) group;

//if we want to manually create a report definition
//DELETE !-(NSArray<RKGroupIdentifier *> *) groupIdentifiersForReport:(RKGeneratedReport *) report;
/*
-(void) didGeneratePdfPage:(PDFPage *) page
                 forReport:(RKReport *) report;
*/
-(void) willGeneratePageNumber:(NSInteger) pageNumber
                            of:(NSInteger) totalPages;
-(void) didGeneratePageNumber:(NSInteger) pageNumber
                           of:(NSInteger) totalPages;

@end
