//
//  BandModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/JSONModel.h>
#import <ReportKit/RKReportKitDataTypes.h>
@class RKComponentTemplate;
@class RKGroupIdentifier;
@class RKFontInformation;
@class RKGroupIdentifier;

@protocol RKComponentTemplate;

/**
 The `RKBandTemplate` object contains the properties for a given report band.
 */
@interface RKBandTemplate : JSONModel

/**
 The unique UUID for the band.
 */
@property (readonly, nonatomic, copy) NSString *uuid;
/**
 A string that identifies the report element.
 @discussion You can use identifiers to obtain the instance of the report element during the generation process.
 */
@property (readonly, nonatomic, copy) NSString *identifier;
/**
 The type of band this is.
 */
@property (readonly, nonatomic) RKBandType bandType;
/**
 The tag identifying the band.
 */
@property (readonly, nonatomic) NSInteger tag;
/**
 The background color for the band.
 */
@property (readonly, nonatomic, copy) RKColor *backgroundColor;
/**
 A Boolean value indicating whether the report uses alternating band colors for its background.
 */
@property (readonly, nonatomic) BOOL alternatingRows;
/**
 When alternating band colors, this will be the color of the alternating row.
 */
@property (readonly, nonatomic, copy) RKColor *alternatingRowColor;
/**
 Reserved for future use.
 */
@property (readonly, nonatomic) BOOL keepTogether;
/**
 The frame rectangle for the band.
 */
@property (readonly, nonatomic) CGRect frame;
/**
 A boolean value indicating whether the band should print.
 */
@property (nonatomic) BOOL enabled;
/**
 An array of components that are included on the band.
 */
@property (readonly, nonatomic, strong) NSMutableArray<RKComponentTemplate *> <RKComponentTemplate> *components;
/**
 The group identifier for the band. The group identifier is helpful when implementing the `RKReportDataSource` delegate methods.
 */
@property (readonly, nonatomic, strong) RKGroupIdentifier <Optional> *groupIdentifier;
/**
 A boolean value indicating whether the band should reprint on the page when content from the previous page has overflowed onto the next page.
 */
@property (readonly, nonatomic) BOOL printOnOverflow;
/**
 A boolean value indicating whether this band should print at the bottom of the page. If this property is set, the band will be positioned prior to Page Footer band which automatically prints at the bottom of each page. If there is no Page Footer on the report, this band will print at the bottom margin of the report.
 */
@property (readonly, nonatomic) BOOL printAtBottom;
/**
 A boolean value indicating whether the band immediately following this band should be printed directly on top of this one.
 @discussion When generating a report, the reporting engine will position subsequent bands below the one above it. This property allows you to different band types to share their frame. Underlaying bands do not need to be the same height as the band before it, and vice versa. The reporting engine will use the height of last band (that band that does not set to underlay the following band)
 */
@property (readonly, nonatomic) BOOL underlayFollowingBand;
/**
 A boolean value that indicates whether the band should be suppressed if all the components on it, are empty.
 */
@property (readonly, nonatomic) BOOL suppressIfEmpty;
/**
 A boolean value indicating whether the reporting engine should skip to a new page prior to positioning this band on the report.
 @discussion If this value is set to `true`, the reporting engine will print any heading bands before this band is positioned on the page.
 */
@property (readonly, nonatomic) BOOL skipPageBeforePrinting;
/**
 A boolean value indicating whether the reporting engine should skip to a new page after printing this band.
 @discussion When the reporting engine skips to a new page, the heading bands will print at the top of the page.
 */
@property (readonly, nonatomic) BOOL skipPageAfterPrinting;
/**
 This value specifies the type of border that should appear at the edges of the band.
 */
@property (readonly, nonatomic) RKComponentBorderOptions borderOptions;
/**
 If any of the band edges are bordered, this will be the stroke color for the border.
 */
@property (readonly, nonatomic, copy) RKColor *strokeColor;
/**
 If any of the band edges are bordered, this will be the line style of the border.
 */
@property (readonly, nonatomic) RKLineStyle lineStyle;
/**
 If any of the band edges are bordered, this will contain the stroke width of the border.
 */
@property (readonly, nonatomic) CGFloat strokeWidth;
/**
 The default color for new text components that are added to this band.
 */
@property (readonly, nonatomic, copy) RKColor *defaultTextColor;
/**
 The default font information used for any for new text components that are added to this band.
 */
@property (readonly, nonatomic, strong) RKFontInformation *defaultFont;

-(void) addComponent:(RKComponentTemplate *) component;
@end
