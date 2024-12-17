//
//  ReportKit.h
//  ReportKit
//
//  Created by Brian Lazarz on 6/16/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ReportKit.
FOUNDATION_EXPORT double ReportKitVersionNumber;

//! Project version string for ReportKit.
FOUNDATION_EXPORT const unsigned char ReportKitVersionString[];
#import <ReportKit/JSONModel.h>
#import <ReportKit/JSONModelError.h>
#import <ReportKit/JSONValueTransformer.h>
#import <ReportKit/JSONValueTransformer+ReportKit.h>
#import <ReportKit/JSONModelClassProperty.h>
#import <ReportKit/JSONKeyMapper.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKFontInformation.h>
#import <ReportKit/RKReportBuilderProjectModel.h>
#import <ReportKit/RKPageTemplate.h>
#import <ReportKit/RKBandTemplate.h>
#import <ReportKit/RKComponentTemplate.h>
#import <ReportKit/RKDataAwareComponentTemplate.h>
#import <ReportKit/RKTextComponentTemplate.h>
#import <ReportKit/RKSystemTextComponentTemplate.h>
#import <ReportKit/RKShapeComponentTemplate.h>
#import <ReportKit/RKHorizontalLineComponentTemplate.h>
#import <ReportKit/RKVerticalLineComponentTemplate.h>
#import <ReportKit/RKOvalComponentTemplate.h>
#import <ReportKit/RKRectangleComponentTemplate.h>
#import <ReportKit/RKBarcodeComponentTemplate.h>
#import <ReportKit/RKImageComponentTemplate.h>
#import <ReportKit/RKChartDataSetTemplate.h>
#import <ReportKit/RKChartComponentTemplate.h>
#import <ReportKit/RKBasicChartComponentTemplate.h>
#import <ReportKit/RKBasicXYAxisChartComponentTemplate.h>
#import <ReportKit/RKBarLineChartComponentTemplate.h>
#import <ReportKit/RKBarChartComponentTemplate.h>
#import <ReportKit/RKNegativeBarChartComponentTemplate.h>
#import <ReportKit/RKLineChartComponentTemplate.h>
#import <ReportKit/RKBubbleChartComponentTemplate.h>
#import <ReportKit/RKCandleChartComponentTemplate.h>
#import <ReportKit/RKCombinedChartComponentTemplate.h>
#import <ReportKit/RKPieRadarChartComponentTemplate.h>
#import <ReportKit/RKPieChartComponentTemplate.h>
#import <ReportKit/RKRadarChartComponentTemplate.h>
#import <ReportKit/RKScatterChartComponentTemplate.h>
#import <ReportKit/RKCustomViewComponentTemplate.h>
#import <ReportKit/RKSubreportComponentTemplate.h>
#import <ReportKit/RKNamedColor.h>
#import <ReportKit/RKColorUtilities.h>
#import <ReportKit/RKLineUtilities.h>
#import <ReportKit/RKColor+ReportKit.h>
#import <ReportKit/RKView+ReportKit.h>
#import <ReportKit/RKBezierPath+ReportKit.h>
#import <ReportKit/NSDateFormatter+ReportKit.h>
#import <ReportKit/RKValueFormattingOptions.h> 
#import <ReportKit/RKNumberValueFormatter.h>
#import <ReportKit/RKCurrencySpelledOutValueFormatter.h>
#import <ReportKit/RKDateTimeValueFormatter.h>
#import <ReportKit/RKBooleanValueFormatter.h>
#import <ReportKit/RKBarcodeFormat.h>
#import <ReportKit/RKGroupIdentifier.h>
#import <ReportKit/RKGroupIdentifierList.h>

#import <ReportKit/RKComponent.h>
#import <ReportKit/RKComponentView.h>
#import <ReportKit/RKBandView.h>
#import <ReportKit/RKBarChartComponentView.h>
#import <ReportKit/RKBarLineChartComponentView.h>
#import <ReportKit/RKBarcodeComponentView.h>
#import <ReportKit/RKBasicXYAxisChartComponentView.h>
#import <ReportKit/RKBubbleChartComponentView.h>
#import <ReportKit/RKCandleChartComponentView.h>
#import <ReportKit/RKChartComponentView.h>
#import <ReportKit/RKOvalComponentView.h>
#import <ReportKit/RKCustomComponentView.h>
#import <ReportKit/RKExpandableTextComponentView.h>
#import <ReportKit/RKHorizontalLineComponentView.h>
#import <ReportKit/RKImageComponentView.h>
#import <ReportKit/RKLineChartComponentView.h>
#import <ReportKit/RKPieChartComponentView.h>
#import <ReportKit/RKPieRadarComponentView.h>
#import <ReportKit/RKRadarChartComponentView.h>
#import <ReportKit/RKRectangleComponentView.h>
#import <ReportKit/RKScatterChartComponentView.h>
#import <ReportKit/RKShapeComponentView.h>
#import <ReportKit/RKSubreportComponentView.h>
#import <ReportKit/RKSystemTextComponentView.h>
#import <ReportKit/RKTextComponentView.h>
#import <ReportKit/RKVerticalLineComponentView.h>
#import <ReportKit/RKPageView.h>
#import <ReportKit/RKReportDataSource.h>
#import <ReportKit/RKReportDelegate.h>
#import <ReportKit/RKChartValueFormatter.h>
#import <ReportKit/RKChartAxisValueFormatter.h>
#import <ReportKit/RKPageableTextContainer.h>
#import <ReportKit/RKReportGroup.h>
#import <ReportKit/RKGroupTemplate.h>
#import <ReportKit/RKBand.h>
#import <ReportKit/RKPage.h>
#import <ReportKit/RKReport.h>
#import <ReportKit/RKDocumentAttributes.h>
#import <ReportKit/RKReportController.h>
#import <ReportKit/RKReportMessage.h>
#import <ReportKit/RKChartValueFormatter.h>

@interface ReportKit : NSObject

/**
 Load the report model from the given URL.
 */

+(RKReportBuilderProjectModel * _Nullable) loadProjectModelFromURL:(NSURL * _Nonnull) fileURL;
/**
 Load the report model from the bundle.
 @param reportName The report to load. Example: MyReport.rbreport
 @param bundle The bundle that contains the report.
 */
+(RKReportBuilderProjectModel * _Nullable) loadProjectModelNamed:(NSString * _Nonnull) reportName
                                                      fromBundle:(NSBundle * _Nonnull) bundle;

@end
