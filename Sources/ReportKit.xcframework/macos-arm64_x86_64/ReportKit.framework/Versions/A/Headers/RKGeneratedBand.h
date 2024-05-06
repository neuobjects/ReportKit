//
//  RKGeneratedBand.h
//  ReportBuilderTestApp
//
//  Created by Brian Lazarz on 12/13/21.
//  Copyright © 2021 Brian Lazarz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/ReportKit.h>
@class RKBandView;
@class RKComponent;
//@class RKReportGroup;
NS_ASSUME_NONNULL_BEGIN

@interface RKGeneratedBand : NSObject
/*
 START HERE: FIGURE OUT WHICH OF THESE PROPERTIES CAN BE SET. WE SET THE FRAME AND SKIPBEFORE* in the willPositionBand method. whatever we do here may have to be done at the component level too
 NOTE: This is only an object. we need to review when these values are getting set and where the user can update them. if we make them read/write, we'll have to document when they can and cannot update the values. Leave this exercise for V2
 */
/**
 The type of band this is.
 */
@property (readonly, nonatomic) RKBandType bandType;
/**
 The tag identifying the band.
 */
@property (nonatomic) NSInteger tag;
/**
 The frame rectangle for the band.
 */
@property (readonly, nonatomic) CGRect frame;
/**
 The frame rectangle for the band, excluding the margin area.
 */
@property (readonly, nonatomic) CGRect marginFrame;//used for alternating colors - we only want to print the background upto the margins
/**
 An array of component objects on the page. These components contain the design-time properties of the components as well as the generated NS/UIView of the component.
 */
//REFACTOR THIS - NSArray
@property (readonly, nonatomic, strong) NSMutableArray<RKComponent *> *components;
/*
 The generated NS/UIView of the band.
 */
@property (readonly, nonatomic, strong) RKBandView *bandView;//new
/**
 A string that identifies the report element.
 */
@property (readonly, nonatomic, copy) NSString *identifier;//user will assign this via the delegate????
/**
 A boolean value that indicates whether the band should be suppressed if all the components on it, are empty.
 */
@property (readonly, nonatomic) BOOL suppressIfEmpty;
@property (nonatomic) BOOL hidden;//when can the user change this
/**
 A boolean value indicating whether the band should print.
 */
@property (nonatomic) BOOL enabled;//when can the user change this?
@property (nonatomic, strong) RKColor *backgroundColor;//can set in willPositionBand
/**
 A boolean value indicating whether the reporting engine should skip to a new page prior to positioning this band on the report.
 @discussion If this value is set to `true`, the reporting engine will print any heading bands before this band is positioned on the page.
 */
@property (nonatomic) BOOL skipPageBeforePrinting;//can set in willPositionBand
/**
 A boolean value indicating whether the reporting engine should skip to a new page after printing this band.
 @discussion When the reporting engine skips to a new page, the heading bands will print at the top of the page.
 */
@property (nonatomic) BOOL skipPageAfterPrinting;//can set in willPositionBand
/**
 A boolean value indicating whether this band should print at the bottom of the page. If this property is set, the band will be positioned prior to Page Footer band which automatically prints at the bottom of each page. If there is no Page Footer on the report, this band will print at the bottom margin of the report.
 */
@property (nonatomic) BOOL printAtBottom;//can set in willPositionBand
/**
 A boolean value indicating whether the band immediately following this band should be printed directly on top of this one.
 @discussion When generating a report, the reporting engine will position subsequent bands below the one above it. This property allows you to different band types to share their frame. Underlaying bands do not need to be the same height as the band before it, and vice versa. The reporting engine will use the height of last band (that band that does not set to underlay the following band)
 */
@property (readonly, nonatomic) BOOL underlayFollowingBand;
/**
 If any of the band edges are bordered, this will contain the stroke width of the border.
 */
@property (readonly, nonatomic) CGFloat strokeWidth;
/**
 If any of the band edges are bordered, this will be the stroke color for the border.
 */
@property (readonly, nonatomic, strong) RKColor *strokeColor;
/**
 This value specifies the type of border that should appear at the edges of the band.
 */
@property (readonly, nonatomic) RKComponentBorderOptions borderOptions;
/**
 If any of the band edges are bordered, this will be the line style of the border.
 */
@property (readonly, nonatomic) RKLineStyle lineStyle;
/**
 The page number the band appears on
 */
@property (readonly, nonatomic) NSInteger pageNumber;
/**
 The record page number the band appears on
 */
@property (readonly, nonatomic) NSInteger recordPageNumber;
/**
 The row number for this band identifier.
 
 The row number is assigned after the band has been prepared.
 */
@property (readonly, nonatomic) NSInteger rowNumber;//do we really need this? the bandView needs it to alternate row colors. it's nice to know - if we want to print 10 lines per page EXCEPT. it won't be accurate until we hit didPrepareBand!

/**
 Returns the NS/UIView instance of the generated band.
 */
//-(RKBandView *) toView;

/**
 Returns the component with the given identifier
 @param identifier the identifier of the component.
 */
-(RKComponent *) componentWithIdentifier:(NSString *) identifier;

//-(NSString *) debugLine;

@end

NS_ASSUME_NONNULL_END
