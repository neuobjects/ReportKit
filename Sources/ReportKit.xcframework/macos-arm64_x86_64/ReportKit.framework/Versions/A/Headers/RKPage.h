//
//  RKPage.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 2/3/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/ReportKit.h>
@class RKBand;
@class RKPageView;

@interface RKPage : NSObject

/**
 The frame rectangle for the page.
 */
@property (readonly, nonatomic) CGRect frame;
/**
 The page orientation - Portrait or Landscape.
*/
@property (readonly, nonatomic) RKPageOrientation orientation;

/**
 The width of the left margin.
 */
@property (readonly, nonatomic) CGFloat leftMargin;
/**
 The width of the right margin.
 */
@property (readonly, nonatomic) CGFloat rightMargin;
/**
 The top margin to the specified size.
 */
@property (readonly, nonatomic) CGFloat topMargin;
/**
 The height of the bottom margin.
 */
@property (readonly, nonatomic) CGFloat bottomMargin;
/**
 The overlay image for the page, if applicable.
 */
@property (readonly, nonatomic, copy) NSString *overlayName;
/**
 The path of the overlay image for the page, if applicable.
 */
@property (readonly, nonatomic, copy) NSString *overlayPath;
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
 An array of generated bands that make up the page.
 */
@property (readonly, nonatomic, strong) NSMutableArray<RKBand *> *reportBands;

//@property (readonly, nonatomic) CGFloat overflowY; //easier for us to assign it from the engine
/**
 The page number within the report.
 */
@property (readonly, nonatomic) NSInteger pageNumber;
/**
 The page number for this record.
 
 For a 6 page report, the standard Report page numbering scheme will number the pages 1 through 6. When those 6 pages are generated for 3 different customers for example, may want to number those pages according to customer. The recordPageNumber serves this purpose.
 
 Given the following example:
 
 • Customer 1 is page 1-2
 
 • Customer 2 is page 3
 
 • Customer 3 is page 4-6
 
 You may want to assign Customer 1 page numbers 1-2, Customer 2 should have Page 1, while Customer 3 is Page 1-3. You can accomplish this by setting the pageNumberScope to RKPageNumberScopeGroup within the Report Builder IDE.
 
 */
@property (readonly, nonatomic) NSInteger recordPageNumber;//if a report is generated four multiple records (ie invoices), this will be the page number for that record. Each record will always start with recordPageNumber 1.
/**
 The values that can be mapped into components on the page.
 
 There are dictionaries of various scopes that can be populated during the generation cycle using the methods provided by `RKDataSource`. The reporting engine combines some of these dictionaries as needed. The pageDictionary is a combination of the reportDictionary and pageDictionary entries.
 */
@property (readonly, nonatomic, strong) NSDictionary *pageDictionary;
/**
 Returns the NS/UIView instance of the generated page.
 */
-(RKPageView *) toView;
/**
 Identical to toView method.
 */
-(RKPageView *) toSubreportView;

/**
 Returns the page template containing the page designed from the Report Builder IDE.
 */
-(RKPageTemplate *) pageTemplate;

@end

