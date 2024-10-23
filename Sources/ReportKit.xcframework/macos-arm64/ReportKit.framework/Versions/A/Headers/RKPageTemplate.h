//
//  RKPageTemplate.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/JSONModel.h>
#import <ReportKit/RKReportKitDataTypes.h>
@class RKBandTemplate;
@class RKGroupIdentifier;
@class RKGroupIdentifierList;
NS_ASSUME_NONNULL_BEGIN

@protocol RKBandTemplate;

/**
 The `RKPageTemplate` object contains the design-time properties used to create a report.
 */
@interface RKPageTemplate : JSONModel

/**
 The unique UUID for the page.
 */
@property (readonly, nonatomic, copy) NSString *uuid;
/**
 A string that identifies the report element.
 @discussion You can use identifiers to obtain the instance of the report element during the generation process.
 */
@property (readonly, nonatomic, copy) NSString *identifier;
/**
 The report title. This is used for PDF title.
 */
@property (readonly, nonatomic, copy) NSString *title;
/**
 The report subject. This is used for PDF subject.
 */
@property (readonly, nonatomic, copy) NSString *subject;
/**
 The report author. This is used for PDF author.
 */
@property (readonly, nonatomic, copy) NSString *author;
/**
 The report creator. This is used for PDF creator.
 */
@property (readonly, nonatomic, copy) NSString *creator;
/**
 Keywords for the report. This is used for PDF keywords.
 */
@property (readonly, nonatomic, copy) NSString *keywords;
/**
 The page size in points.
 */
@property (readonly, nonatomic) CGSize pageSize;
/**
 The page background color.
 */
@property (readonly, nonatomic, strong) RKColor *backgroundColor;
/**
 The name of the paper entry in the Layout Size popup button.
 */
@property (readonly, nonatomic, copy) NSString *paperName;
/**
 The page orientation - Portrait or Landscape.
 */
@property (readonly, nonatomic) RKPageOrientation orientation;
/**
 The amount of space, in points, between the left edge of the page and the content.
 */
@property (readonly, nonatomic) CGFloat leftMargin;
/**
 The amount of space, in points, between the right edge of the page and the content.
 */
@property (readonly, nonatomic) CGFloat rightMargin;
/**
 The amount of space, in points, between the top edge of the page and the content.
 */
@property (readonly, nonatomic) CGFloat topMargin;
/**
 The amount of space, in points, between the bottom edge of the page and the content.
 */
@property (readonly, nonatomic) CGFloat bottomMargin;
/**
 The frame rectangle of the page.
 */
@property (readonly, nonatomic) CGRect frame;
/**
 The array of bands used in the report.
 */
//REFACTOR - MAKE THIS AN NSARRAY
@property (readonly, nonatomic, strong) NSMutableArray<RKBandTemplate *> <RKBandTemplate> *bands;
/**
 The number of groups defined for the report.
 */
@property (readonly, nonatomic) int groupCount;
/**
 The list of group identifiers used on the report. The group identifiers are helpful when implementing the `RKReportDataSource` delegate methods.
 */
@property (readonly, nonatomic, strong) RKGroupIdentifierList *groupIdentifiers;
/**
 The overlay image for the page, if applicable.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *overlayName;
/**
 The path of the overlay image for the page, if applicable.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *overlayPath;
/**
 The page number of the overlay image. This is required when a multi-page PDF document is used for the overlay.
 */
@property (readonly, nonatomic) NSInteger overlayPageNumber;
/**
 The alpha value for the overlay.
 */
@property (readonly, nonatomic) CGFloat overlayAlpha;
/**
 A boolean value indicating whether the overlay should be printed.
 */
@property (readonly, nonatomic) BOOL overlayEnabled;

/**
   Returns an array of the report header bands.
 */
-(NSArray<RKBandTemplate *> *) reportHeaderBands;
/**
   Returns an array of the page header bands.
 */
-(NSArray<RKBandTemplate *> *) pageHeaderBands;
/**
   Returns an array of the group header bands for the given identifier.
 */
-(NSArray<RKBandTemplate *> *) groupHeaderBandsForIdentifier:(NSString *) identifier;
/**
   Returns an array of the content bands.
 */
-(NSArray<RKBandTemplate *> *) groupContentBands;
/**
   Returns an array of the group footer bands for the given identifier
 */
-(NSArray<RKBandTemplate *> *) groupFooterBandsForIdentifier:(NSString *) identifier;
/**
   Returns an array of the page footer bands.
 */
-(NSArray<RKBandTemplate *> *) pageFooterBands;
/**
   Returns an array of the report footer bands.
 */
-(NSArray<RKBandTemplate *> *) reportFooterBands;

@end

NS_ASSUME_NONNULL_END
