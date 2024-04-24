//
//  RKReportDataSource.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 7/28/22.
//

#import <Foundation/Foundation.h>
//#import <ReportKit/ReportKit.h>
#import <ReportKit/RKReportKitDataTypes.h>
@class RKGeneratedReport;
@class RKReportGroup;
@class RKGeneratedPage;
@class RKGeneratedBand;
@class RKComponent;
@class RKPageTemplate;
@protocol ChartAxisValueFormatter;
@protocol ChartValueFormatter;

/**
 The `RKReportDataSource` protocol defines a set of methods to be used to populate a report.
 */

@protocol RKReportDataSource <NSObject>

/**
 Provide a dictionary of values that are available report-wide.
 @param pageTemplate The design-time page template of the report getting produced.
 @return the number of records that will be printed for this report.
 
 @discussion TODO - FINISH
 */
-(NSInteger) numberOfReportEntitiesForPageTemplate:(RKPageTemplate *) pageTemplate;//CONSIDER renaming to numberOfRecordsForPageTemplate (PrimaryRecords?)
/**
 Provide the number of group rows that will be generated for this group.
 @param report The report getting generated.
 @param group The group that contains the detail rows.
 @return the number of group rows for the given group

 @discussion TODO - FINISH
 */
-(NSInteger) report:(RKGeneratedReport *) report
numberOfGroupRowsInGroup:(RKReportGroup *) group;

/**
 Provide a dictionary of values that are available report-wide.
 @param report The report getting generated.
 @param group The group that contains the detail rows.
 @return the number of details rows for the given group
 */
-(NSInteger) report:(RKGeneratedReport *) report
numberOfDetailRowsInGroup:(RKReportGroup *) group;

@optional
//-(NSDictionary<NSString *, NSObject *> *) valueDictionaryForReport:(RKGeneratedReport *) report;
/**
 Provide a dictionary of values that are available report-wide.
 @param report The report to provide values for.
 @return a dictionary of values that can be mapped to the report components on any band.
 */
-(NSDictionary<NSString *, NSObject *> *) valuesForReport:(RKGeneratedReport *) report;
/**
 Provide a dictionary of values that are available for the report entity at the given index.
 @param report The report getting generated.
 @param entityIndex The index of the entity that is being generated.
 @return a dictionary of values that can be mapped to the report components associated with this entity.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKGeneratedReport *) report
                    valuesForReportEntityAtIndex:(NSInteger) entityIndex;
/**
 Provide a dictionary of values that are available for the report header band.
 @param report The report getting generated.
 @param page The generated page.
 @param identifier The identifier of the report header band that is getting generated.
 @return a dictionary of values that can be mapped to the components on the report header band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKGeneratedReport *) report
                                            page:(RKGeneratedPage *) page
         valuesForReportHeaderBandWithIdentifier:(NSString *) identifier;
/**
 Provide a dictionary of values that are available for the page header band.
 @param report The report getting generated.
 @param page The generated page.
 @param identifier The identifier of the page header band that is getting generated.
 @return a dictionary of values that can be mapped to the components on the page header band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKGeneratedReport *) report
                                            page:(RKGeneratedPage *) page
           valuesForPageHeaderBandWithIdentifier:(NSString *) identifier;
/**
 Provide a dictionary of values that are available for the group header band.
 @param report The report getting generated.
 @param page The generated page.
 @param group v group that's getting generated.
 @param identifier The identifier of the group header band that is getting generated.
 @return a dictionary of values that can be mapped to the components on the group header band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKGeneratedReport *) report
                                            page:(RKGeneratedPage *) page
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
-(NSDictionary<NSString *, id> *) report:(RKGeneratedReport *) report
                                            page:(RKGeneratedPage *) page
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
-(NSDictionary<NSString *, NSObject *> *) report:(RKGeneratedReport *) report
                                            page:(RKGeneratedPage *) page
                                           group:(RKReportGroup *) group
          valuesForGroupFooterBandWithIdentifier:(NSString *) identifier;
/**
 Provide a dictionary of values that are available for the page footer band.
 @param report The report getting generated.
 @param page The generated page.
 @param identifier The identifier of the page footer band that is getting generated.
 @return A dictionary of values that can be mapped to the components on the page footer band.
 */
-(NSDictionary<NSString *, NSObject *> *) report:(RKGeneratedReport *) report
                                            page:(RKGeneratedPage *) page
           valuesForPageFooterBandWithIdentifier:(NSString *) identifier;
-(NSDictionary<NSString *, NSObject *> *) report:(RKGeneratedReport *) report
                                            page:(RKGeneratedPage *) page
         valuesForReportFooterBandWithIdentifier:(NSString *) identifier;

/**
 Provide a dictionary of values that are available for the page header band.
 @param report The report getting generated.
 @param group The group that's getting generated.
 @param entityIndex The index of the entity getting generated.
 @param groupRow The row number for the group
 
 @discussion This method is called when a group is about to get generated. The `RKReportGroup` as two properties you can associate data with - `groupObject` and `groupContentObjects`. The `groupObject` is typically a single record or dictionary that's associated with this group. The `groupContentObjects` should be an array of objects. When it's time for the the reporting engine to map values into the band components, you can refer to these properties in the datasource methods that asks for them. These properties are especially useful for reports having multiple groups.
 
 */
-(void) report:(RKGeneratedReport *) report
loadDataIntoGroup:(RKReportGroup *) group
forReportEntityAtIndex:(NSInteger) entityIndex
      groupRow:(NSInteger) groupRow;//the section row allows us to have multiple bands for the same group (not separate groups) so most times, this will be 0.
/**
 Asks the datasource for the custom view for a given component
 @param report The report that is currently getting generated.
 @param band The band the component resides on.
 @param component The custom view component that requires content.
 
 In your implementation, create an NS/UIView for the given component.
 */
-(RKView *) report:(RKGeneratedReport *) report
              band:(RKGeneratedBand *) band
customViewForComponent:(RKComponent *) component;
/**
 Asks the data source for the subreport view for a given component
 @param report The report that is currently getting generated.
 @param band The band the component resides on.
 @param component The subreport component that requires content.
*/
-(RKView *) report:(RKGeneratedReport *) report
                band:(RKGeneratedBand *) band
subreportViewForComponent:(RKComponent *) component;
/**
 Asks the data source for the value formatter for the given axis of a chart component.
 @param report The report that is currently getting generated.
 @param band The band the chart component resides on.
 @param chartComponent The component that needs a formatter
 @param axisType The chart axis that requires a formatter.

 The value formatter should conform to the ChartAxisValueFormatter protocol.
 */
-(NSObject <ChartAxisValueFormatter> *) report:(RKGeneratedReport *) report
                                          band:(RKGeneratedBand *) band
                        valueFormatterForChart:(RKComponent *) chartComponent
                                      axisType:(RKChartAxisType) axisType;
/**
 Asks the data source for the value formatter for a given dataset of a chart component.
 @param report The report that is currently getting generated.
 @param band The band the chart component resides on.
 @param chartComponent The component that needs a formatter
 @param datasetIndex The index of the chart dataset that requires a formatter.

 The value formatter should conform to the ChartAxisValueFormatter protocol.
 */
-(NSObject <ChartValueFormatter> *) report:(RKGeneratedReport *) report
                                      band:(RKGeneratedBand *) band
                    valueFormatterForChart:(RKComponent *) chartComponent
                              datasetIndex:(NSInteger) datasetIndex;

-(NSArray<NSString *> *) report:(RKGeneratedReport *) report
                           band:(RKGeneratedBand *) band
            xAxisLabelsForChart:(RKComponent *) chartComponent;
@end

//START HERE: create a swift package for ReportKit ! Include the licensing logic (although if we push it to a private repository, we'll be fine. monit
