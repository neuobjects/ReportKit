//
//  RKReportDataSource.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 7/28/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKChartValueFormatter.h>
#import <ReportKit/RKChartAxisValueFormatter.h>
@class RKReport;
@class RKReportGroup;
@class RKPage;
@class RKBand;
@class RKComponent;
@class RKPageTemplate;
//@protocol ChartAxisValueFormatter;
//@protocol ChartValueFormatter;

/**
 The `RKReportDataSource` protocol defines a set of methods to be used to populate a report.
 
 > Important: Most of these methods are @optional. For some reason, DocC is marking many of the optional methods as _Required_. The only required methods are the following:
 
 ### Required Methods
 `func numberOfReportEntries(for: RKPageTemplate!) -> Int`

 `func report(RKReport!, numberOfGroupRowsIn: RKReportGroup!) -> Int`
 
 `func report(RKReport!, numberOfDetailRowsIn: RKReportGroup!) -> Int`

 */

@protocol RKReportDataSource <NSObject>

/**
 Return the number of records for the given page template
 @param pageTemplate The design-time page template of the report getting produced.
 @return The number of records that will be printed for this report.
 @discussion A report is driven off a primary record. The report can then include additional information relataed to this record. For example, an invoice for a single customer will have 1 primary record. That invoice may have a number of line items. When generating several invoices, you have a couple options: By specifying the number of invoices to this method, you will end up with a single invoice report that contains all invoices. Alternatively, you can specify 1 as the number of primary records and generate the report once for each invoice you would like to generate.
 
 When a report has 0 primary records, the report will still generate with the Report and Page header and footer bands.
 */
-(NSInteger) numberOfReportEntriesForPageTemplate:(RKPageTemplate *) pageTemplate;
/**
 Provide the number of group rows that will be generated for this group.
 @param report The report getting generated.
 @param group The group that contains the detail rows.
 @return the number of group rows for the given group
 */
-(NSInteger) report:(RKReport *) report
numberOfGroupRowsInGroup:(RKReportGroup *) group;

/**
 Provide a dictionary of values that are available report-wide.
 @param report The report getting generated.
 @param group The group that contains the detail rows.
 @return the number of details rows for the given group
 */
-(NSInteger) report:(RKReport *) report
numberOfDetailRowsInGroup:(RKReportGroup *) group;

@optional
/**
 Provide a dictionary of values that are available report-wide.
 @param report The report to provide values for.
 @return a dictionary of values that can be mapped to the report components on any band.
 */
-(NSDictionary<NSString *, NSObject *> *) valuesForReport:(RKReport *) report;
/**
 Provide a dictionary of values that are available for the primary record at the given index.
 @param report The report getting generated.
 @param reportIndex The index of the report entry that is being generated.
 @return a dictionary of values that can be mapped to the report components associated with this record.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKReport *) report
                     valuesForReportEntryAtIndex:(NSInteger) reportIndex;
/**
 Provide a dictionary of values that are available for the report header band.
 @param report The report getting generated.
 @param page The generated page.
 @param identifier The identifier of the report header band that is getting generated.
 @return a dictionary of values that can be mapped to the components on the report header band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKReport *) report
                                            page:(RKPage *) page
         valuesForReportHeaderBandWithIdentifier:(NSString *) identifier;
/**
 Provide a dictionary of values that are available for the page header band.
 @param report The report getting generated.
 @param page The generated page.
 @param identifier The identifier of the page header band that is getting generated.
 @return a dictionary of values that can be mapped to the components on the page header band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKReport *) report
                                            page:(RKPage *) page
           valuesForPageHeaderBandWithIdentifier:(NSString *) identifier;
/**
 Provide a dictionary of values that are available for the group header band.
 @param report The report getting generated.
 @param page The generated page.
 @param group v group that's getting generated.
 @param identifier The identifier of the group header band that is getting generated.
 @return a dictionary of values that can be mapped to the components on the group header band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKReport *) report
                                            page:(RKPage *) page
                                           group:(RKReportGroup *) group
          valuesForGroupHeaderBandWithIdentifier:(NSString *) identifier;
/**
 Provide a dictionary of values that are available for the detail band.
 @param report The report getting generated.
 @param page The generated page.
 @param group The group that's getting generated.
 @param identifier The identifier of the detail band that is getting generated.
 @param row The detail row that's getting generated.
 @return a dictionary of values that can be mapped to the components on the report header band.
 */
-(NSDictionary<NSString *, id> *) report:(RKReport *) report
                                            page:(RKPage *) page
                                           group:(RKReportGroup *) group
                valuesForDetailBandWithIdentifer:(NSString *) identifier
                                             row:(NSInteger) row;
/**
 Provide a dictionary of values that are available for the group footer band.
 @param report The report getting generated.
 @param page The generated page.
 @param group The group that's getting generated.
 @param identifier The identifier of the group footer band that is getting generated.
 @return a dictionary of values that can be mapped to the components on the group footer band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKReport *) report
                                            page:(RKPage *) page
                                           group:(RKReportGroup *) group
          valuesForGroupFooterBandWithIdentifier:(NSString *) identifier;
/**
 Provide a dictionary of values that are available for the page footer band.
 @param report The report getting generated.
 @param page The generated page.
 @param identifier The identifier of the page footer band that is getting generated.
 @return A dictionary of values that can be mapped to the components on the page footer band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKReport *) report
                                            page:(RKPage *) page
           valuesForPageFooterBandWithIdentifier:(NSString *) identifier;
-(NSDictionary<NSString *, NSObject *> *) report:(RKReport *) report
                                            page:(RKPage *) page
         valuesForReportFooterBandWithIdentifier:(NSString *) identifier;

/**
 Provide a dictionary of values that are available for the page header band.
 @param report The report getting generated.
 @param group The group that's getting generated.
 @param reportEntryIndex The index of the report entry getting generated.
 @param groupRow The row number for the group
 
 @discussion This method is called when a group is about to get generated. The `RKReportGroup` as two properties you can associate data with - `groupObject` and `groupContentObjects`. The `groupObject` is typically a single record or dictionary that's associated with this group. The `groupContentObjects` should be an array of objects. When it's time for the the reporting engine to map values into the band components, you can refer to these properties in the datasource methods that asks for them. These properties are especially useful for reports having multiple groups.
 
 */
-(void) report:(RKReport *) report
loadContentIntoGroup:(RKReportGroup *) group
forReportEntryAtIndex:(NSInteger) reportEntryIndex
      groupRow:(NSInteger) groupRow;//the section row allows us to have multiple bands for the same group (not separate groups) so most times, this will be 0.
/**
 Asks the datasource for the custom view for a given component
 @param report The report that is currently getting generated.
 @param band The band the component resides on.
 @param component The custom view component that requires content.
 
 In your implementation, create an NS/UIView for the given component.
 */
-(RKView *) report:(RKReport *) report
              band:(RKBand *) band
customViewForComponent:(RKComponent *) component;
/**
 Asks the data source for the subreport view for a given component
 @param report The report that is currently getting generated.
 @param band The band the component resides on.
 @param component The subreport component that requires content.
*/
-(RKView *) report:(RKReport *) report
                band:(RKBand *) band
subreportViewForComponent:(RKComponent *) component;
/**
 Asks the data source for the value formatter for the given axis of a chart component.
 @param report The report that is currently getting generated.
 @param band The band the chart component resides on.
 @param chartComponent The component that needs a formatter
 @param axisType The chart axis that requires a formatter.

 The value formatter should conform to the ChartAxisValueFormatter protocol.
 */
-(NSObject <RKChartAxisValueFormatter> *) report:(RKReport *) report
                                            band:(RKBand *) band
                      axisValueFormatterForChart:(RKComponent *) chartComponent
                                        axisType:(RKChartAxisType) axisType;
/**
 Asks the data source for the value formatter for a given dataset of a chart component.
 @param report The report that is currently getting generated.
 @param band The band the chart component resides on.
 @param chartComponent The component that needs a formatter
 @param datasetIndex The index of the chart dataset that requires a formatter.

 The value formatter should conform to the ChartAxisValueFormatter protocol.
 */
-(NSObject <RKChartValueFormatter> *) report:(RKReport *) report
                                        band:(RKBand *) band
               datasetValueFormatterForChart:(RKComponent *) chartComponent
                                datasetIndex:(NSInteger) datasetIndex;

-(NSArray<NSString *> *) report:(RKReport *) report
                           band:(RKBand *) band
            xAxisLabelsForChart:(RKComponent *) chartComponent;
@end
