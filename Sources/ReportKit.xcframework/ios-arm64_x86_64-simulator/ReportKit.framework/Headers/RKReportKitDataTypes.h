//
//  RKReportKitDataTypes.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 10/18/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//
#import <TargetConditionals.h>

#define REPORTBUILDER_FORMAT_VERSION 1

#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
  #define RKColor NSColor
  #define RKView NSView
  #define RKFont NSFont
  #define RKTextField NSTextField
  #define RKTextView NSTextView
  #define RKImage NSImage
  #define RKImageView NSImageView
  #define RKEdgeInsets NSEdgeInsets
  #define RKBezierPath NSBezierPath
  #define RKFontDescriptor NSFontDescriptor
#else
  #import <UIKit/UIKit.h>
  #define RKColor UIColor
  #define RKView UIView
  #define RKFont UIFont
  #define RKTextField UILabel
  #define RKTextView UITextView
  #define RKImage UIImage
  #define RKImageView UIImageView
  #define RKEdgeInsets UIEdgeInsets
  #define RKBezierPath UIBezierPath
  #define RKFontDescriptor UIFontDescriptor
#endif
/**
 The clamping location specifies the positioning behavior of a component when it's band is resized.
 
 • RKComponentClampingLocationTop - The component retains the same margin as was designed.
 
 • RKComponentClampingLocationCenter - The component retains it's position relative to the center of the band that's resized.
 
 • RKComponentClampingLocationBottom - The component retains the same margin as was designed.
 
 • RKComponentClampingLocationTopAndBottom - The component is resized to retain both the top and bottom margin, relative to be the band edges.
 
 */
typedef enum RKComponentClampingLocation : NSInteger
{
  RKComponentClampingLocationTop,
  RKComponentClampingLocationCenter,
  RKComponentClampingLocationBottom,
  RKComponentClampingLocationTopAndBottom
} RKComponentClampingLocation;

/**
 The `RKChartDrawValueLocation` indicates the location of the value displayed in the chart series.
 */
typedef enum RKChartDrawValueLocation : NSInteger
{
  RKChartDrawValueLocationNone,
  RKChartDrawValueLocationAbove,
  RKChartDrawValueLocationInside,
} RKChartDrawValueLocation;

/**
 The `RKChartColorTheme` is used to assign a group of related colors to a chart dataset.
 */
typedef enum RKChartColorTheme : NSInteger
{
  RKChartColorThemeBarChart,
  RKChartColorThemeBlunt,
  RKChartColorThemeBright,
  RKChartColorThemeClean,
  RKChartColorThemeCohesive,
  RKChartColorThemeDanger,
  RKChartColorThemeDapper,
  RKChartColorThemeFall,
  RKChartColorThemeGentle,
  RKChartColorThemeMuted,
  RKChartColorThemeNeat,
  RKChartColorThemePlucky,
  RKChartColorThemeRebellious,
  RKChartColorThemeReluctant,
  RKChartColorThemeSerene,
  RKChartColorThemeShades,
  RKChartColorThemeSharp,
  RKChartColorThemeSimple,
  RKChartColorThemeSoftColorful,
  RKChartColorThemeSpring,
  RKChartColorThemeSuccinct,
  RKChartColorThemeSummer,
  RKChartColorThemeWinter,
  RKChartColorThemeCustom,
  RKChartColorThemeNotAssigned = 9999
} RKChartColorTheme;

typedef enum RKPageOrientation : NSInteger
{
  RKPageOrientationPortrait=1,
  RKPageOrientationLandscape,
} RKPageOrientation;

typedef enum RKComponentType : NSInteger
{
  RKComponentTypeUndefined,
  RKComponentTypeTextField,
  RKComponentTypeDatabaseTextField,
  RKComponentTypeRectangle,
  RKComponentTypeVerticalLine,
  RKComponentTypeHorizontalLine,
  RKComponentTypeBarcode,
  RKComponentTypeBarChartVertical,
  RKComponentTypeBarChartStacked,
  RKComponentTypeBarChartMultiple,
  RKComponentTypeBarChartNegativeStacked,
  RKComponentTypeBarChartPositiveNegative,
  RKComponentTypeLineChart,
  RKComponentTypeLineMultipleChart,
  RKComponentTypeCombinationChart,
  RKComponentTypePieChart,
  RKComponentTypeImage,
  RKComponentTypeRotatedText,
  RKComponentTypeOval,
  RKComponentTypeBubbleChart,
  RKComponentTypeCandleChart,
  RKComponentTypeRadarChart,
  RKComponentTypeScatterChart,
  RKComponentTypeBarChartHorizontal,
  RKComponentTypeSystemTextField,
  RKComponentTypeTextView,
  RKComponentTypeCustomView,
  RKComponentTypeSubreport
} RKComponentType;

/**
 The `RKTextVerticalAlignment` indicates how the text should be aligned vertically in the component frame.
 */
typedef enum RKTextVerticalAlignment : NSInteger
{
  RKTextVerticalAlignmentCenter,
  RKTextVerticalAlignmentTop,
  RKTextVerticalAlignmentBottom
} RKTextVerticalAlignment;

typedef enum RKSystemTextFieldType : NSInteger
{
  RKSystemTextFieldTypePage,
  RKSystemTextFieldTypeDateTime,
  RKSystemTextFieldTypeReportTitle,
  RKSystemTextFieldTypeReportSubject,
  RKSystemTextFieldTypeReportAuthor,
  RKSystemTextFieldTypeReportCreator,
  RKSystemTextFieldTypeReportKeywords,
  RKSystemTextFieldTypeCustom,
  RKSystemTextFieldTypeUndefined
} RKSystemTextFieldType;

typedef enum RKTextComponentValueType: NSInteger
{
  RKTextComponentValueTypeText,
  RKTextComponentValueTypeNumber,
  RKTextComponentValueTypeCurrency,
  RKTextComponentValueTypeCurrencySpelled,
  RKTextComponentValueTypePercentage,
  RKTextComponentValueTypeBoolean,
  RKTextComponentValueTypeDateTime,
  RKTextComponentValueTypeMultiple
} RKTextComponentValueType;

typedef enum RKChartValueFormatterType: NSInteger
{
  RKChartValueFormatterTypeNumber,
  RKChartValueFormatterTypeCurrency,
  RKChartValueFormatterTypeCurrencySpelled,
  RKChartValueFormatterTypePercentage,
  RKChartValueFormatterTypeMultiple
} RKChartValueFormatterType;

typedef enum RKPageNumberFormat: NSInteger
{
  RKPageNumberFormatPageNumber,
  RKPageNumberFormatTotalPages,
  RKPageNumberFormatPageNofM,
  RKPageNumberFormatMultiple
} RKPageNumberFormat;

/**
 `RKPageNumberScope` is used to specify the scope of the page numbering.
 @discussion For a 6 page report, the standard Report page numbering scheme will number the pages 1 through 6. When those 6 pages are generated for 3 different customers for example, may want to number those pages according to customer.
 
 Given the following example:
 
 • Customer 1 is page 1-2
 
 • Customer 2 is page 3
 
 • Customer 3 is page 4-6
 
 You may want to assign Customer 1 page numbers 1-2, Customer 2 should have Page 1, while Customer 3 is Page 1-3. You can accomplish this by setting the pageNumberScope to RKPageNumberScopeGroup.
 
 `RKPageNumberScopeMultiple` is used internally by Report Builder.
 */
typedef enum RKPageNumberScope: NSInteger
{
  RKPageNumberScopeReport,
  RKPageNumberScopeGroup,
  RKPageNumberScopeMultiple
} RKPageNumberScope;

typedef enum RKTextComponentNegativeFormat: NSInteger
{
  RKTextComponentNegativeFormatStandard,
  RKTextComponentNegativeFormatRedNegative,
  RKTextComponentNegativeFormatAccounting,
  RKTextComponentNegativeFormatRedAccounting
} RKTextComponentNegativeFormat;

typedef enum RKCurrencySymbol: NSInteger
{
  RKCurrencySymbolDollar,
  RKCurrencySymbolEuro,
  RKCurrencySymbolPound,
  RKCurrencySymbolYuan,
  RKCurrencySymbolYen,
  RKCurrencySymbolRupee,
  RKCurrencySymbolShekel,
  RKCurrencySymbolLira,
  RKCurrencySymbolPhilippinePeso
} RKCurrencySymbol;

typedef enum RKDateFormat: NSInteger
{
  RKDateFormatNone,
  RKDateFormatFullSpelled,
  RKDateFormatFullAbbreviated,
  RKDateFormatDateOnlySpelled,
  RKDateFormatDateOnlyAbbreviated,
  RKDateFormatMonthDaySpelled,
  RKDateFormatMonthYearSpelled,
  RKDateFormatMonthSpelled,
  RKDateFormatYearDigits,
  RKDateFormatMonthDayDigits,
  RKDateFormatMonthDayYearFullDigits,
  RKDateFormatMonthDayYearFullDigitsLeadingZeroes,
  RKDateFormatMonthDayTwoDigitYear,
  RKDateFormatMonthDayTwoDigitYearLeadingZeroes,
  RKDateFormatISODate,
} RKDateFormat;

typedef enum RKTimeFormat: NSInteger
{
  RKTimeFormatNone,
  RKTimeFormatHourAMPM,
  RKTimeFormatHourMinuteAMPM,
  RKTimeFormatHourMinuteSecondAMPM,
  RKTimeFormatHourMinuteMilitary,
  RKTimeFormatHourMinuteSecondMilitary
} RKTimeFormat;

/**
 `RKBooleanFormat` specifies how the boolean value should be printed on the report.
 */
typedef enum RKBooleanFormat: NSInteger
{
  RKBooleanFormatYesNo,
  RKBooleanFormatTrueFalse,
  RKBooleanFormatTF,
  RKBooleanFormatOneZero,
  RKBooleanFormatXBlank,
  RKBooleanFormatCheckBlank,
  RKBooleanFormatCrossBlank,
} RKBooleanFormat;

/**
  The border options for a band or component. 
 
 These values are self-explanatory except for `RKComponentBorderOptionsBottomTop`. Components with this border style will print an underline slightly above the bottom endge of the frame. It is often paired with `RKComponentBorderOptionsBottom` to draw a double underline for the value.
 */
typedef enum RKComponentBorderOptions : NSInteger{
  RKComponentBorderOptionsTop = (1 << 0),
  RKComponentBorderOptionsBottom = (1 << 1),
  RKComponentBorderOptionsLeft = (1 << 2),
  RKComponentBorderOptionsRight = (1 << 3),
  RKComponentBorderOptionsBottomTop = (1 << 4),
  RKComponentBorderOptionsNone = (1 << 5)
} RKComponentBorderOptions;

//START HERE: REMOVE THIS!
/*
moved to ApplicationClasses
typedef enum RKComponentBorderPosition : NSInteger{
  RKComponentBorderPositionTop,
  RKComponentBorderPositionBottom,
  RKComponentBorderPositionBottomDouble,
  RKComponentBorderPositionTopBottom,
  RKComponentBorderPositionAll,
  RKComponentBorderPositionNone
} RKComponentBorderPosition;
*/
typedef enum RKLineStyle : NSInteger {
  RKLineStyleNone,
  RKLineStyleSolid,
  RKLineStyleDotted,
  RKLineStyleDashed,
  RKLineStyleDashedMedium,
  RKLineStyleDashedLong,
  RKLineStyleDashDotted,
  RKLineStyleDashDotted2
} RKLineStyle;

typedef enum RKBandType : NSInteger
{
  RKBandTypeReportHeader,
  RKBandTypePageHeader,
  RKBandTypeGroupHeader,
  RKBandTypeGroupDetail,
  RKBandTypeGroupFooter,
  RKBandTypePageFooter,
  RKBandTypeReportFooter,
  RKBandTypeReportMargin
} RKBandType;

typedef enum RKTextPivotOrigin : NSInteger
{
  RKTextPivotOriginTopLeft,
  RKTextPivotOriginTopCenter,
  RKTextPivotOriginTopRight,
  RKTextPivotOriginCenterLeft,
  RKTextPivotOriginCenter,
  RKTextPivotOriginCenterRight,
  RKTextPivotOriginBottomLeft,
  RKTextPivotOriginBottomCenter,
  RKTextPivotOriginBottomRight,
  RKTextPivotOriginNotAssigned
} RKTextPivotOrigin;

typedef enum RKImageContentMode : NSInteger
{
  RKImageContentModeScaleToFill,
  RKImageContentModeAspectFit,
  RKImageContentModeAspectFill,
  RKImageContentModeCenter,
  RKImageContentModeTop,
  RKImageContentModeBottom,
  RKImageContentModeLeft,
  RKImageContentModeRight,
  RKImageContentModeTopLeft,
  RKImageContentModeTopRight,
  RKImageContentModeBottomLeft,
  RKImageContentModeBottomRight
} RKImageContentMode;

typedef enum RKLineCapStyle : NSInteger
{
    RKLineCapStyleButt = 0,
    RKLineCapStyleRound = 1,
    RKLineCapStyleSquare = 2
} RKLineCapStyle;

typedef enum RKFontType : NSInteger
{
  RKFontTypeNone,
  //LATER RKFontTypeAssetCatalog,
  //LATER RKFontTypeSystem,
  RKFontTypeCustom,
  RKFontTypeProject
} RKFontType;

typedef enum RKChartType : NSInteger
{
  RKChartTypeNone,
  RKChartTypeBarChart,
  RKChartTypeBubbleChart,
  RKChartTypeCandleChart,
  RKChartTypeLineChart,
  RKChartTypeScatterChart,
  RKChartTypePieChart,
  RKChartTypeRadarChart,
  RKChartTypeBarChartStacked,
  RKChartTypeBarChartNegativeStacked,
  RKChartTypeBarChartPositiveNegative,
  RKChartTypeCombinedChart,
  RKChartTypeMultipleSelections//for the chart type popup button
} RKChartType;

typedef enum RKBarLineChartType : NSInteger
{
  RKBarLineChartTypeVertical,
  RKBarLineChartTypeBarChartStacked,
  RKBarLineChartTypeBarChartNegativeStacked,
  RKBarLineChartTypeBarChartPositiveNegative,
  RKBarLineChartTypeLineChart,
  RKBarLineChartTypeCombinedChart,
  RKBarLineChartTypeBarChartHorizontal
} RKBarLineChartType;

typedef enum
{
  RKPieRadarChartTypePieChart,
  RKPieRadarChartTypeRadarChart
} RKPieRadarChartType;

typedef enum RKChartLegendForm : NSInteger
{
  RKChartLegendFormNone = 0,
  RKChartLegendFormEmpty = 1,
  RKChartLegendFormDefault = 2,
  RKChartLegendFormSquare = 3,
  RKChartLegendFormCircle = 4,
  RKChartLegendFormLine = 5,
} RKChartLegendForm;

typedef enum RKChartLegendOrientation : NSInteger
{
  RKChartLegendOrientationHorizontal = 0,
  RKChartLegendOrientationVertical = 1,
} RKChartLegendOrientation;

typedef enum RKChartLimitLabelPosition :NSInteger
{
  RKChartLimitLabelPositionLeftTop = 0,
  RKChartLimitLabelPositionLeftBottom = 1,
  RKChartLimitLabelPositionRightTop = 2,
  RKChartLimitLabelPositionRightBottom = 3,
} RKChartLimitLabelPosition;

typedef enum RKChartXAxisLabelPosition : NSInteger
{
  RKChartXAxisLabelPositionTop = 0,
  RKChartXAxisLabelPositionBottom = 1,
  RKChartXAxisLabelPositionSided = 2,
  RKChartXAxisLabelPositionTopInside = 3,
  RKChartXAxisLabelPositionBottomInside = 4,
} RKChartXAxisLabelPosition;

typedef enum RKChartYAxisLabelPosition : NSInteger
{
  RKChartYAxisLabelPositionOutsideChart = 0,
  RKChartYAxisLabelPositionInsideChart = 1,
} RKChartYAxisLabelPosition;

typedef enum RKChartAxisType : NSInteger
{
  RKChartAxisTypeX = 0,
  RKChartAxisTypeY = 1,
  RKChartAxisTypeLeft = 2,
  RKChartAxisTypeRight = 3
} RKChartAxisType;

typedef enum RKScatterShape : NSInteger
{
  RKScatterShapeSquare = 0,
  RKScatterShapeCircle = 1,
  RKScatterShapeTriangle = 2,
  RKScatterShapeCross = 3,
  RKScatterShapeX = 4,
  RKScatterShapeChevronUp = 5,
  RKScatterShapeChevronDown = 6,
} RKScatterShape;
