//
//  TextComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/17/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/JSONModel.h>
#import <ReportKit/RKDataAwareComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKFontInformation.h>
#import <ReportKit/RKValueFormattingOptions.h>

#include <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKTextComponentTemplate` object contains the properties used to define a report text field component.
 */
@interface RKTextComponentTemplate : RKDataAwareComponentTemplate

/**
 The frame rectangle for the text portion of the component.
 */
@property (readonly, nonatomic) CGRect titleFrame;
/**
 The title of the text field.
 */
@property (nonatomic, copy) NSString *title;
/**
 The alignment mode of the text.
 */
@property (readonly, nonatomic) NSTextAlignment alignment;
/**
 The vertical alignment mode of the text.
 @discussion The vertical alignment value is used to vertically position the title of the text component within the component frame. This is useful for cases where to the component text requires fewer lines than the component frame allows for.
 */
@property (readonly, nonatomic) RKTextVerticalAlignment verticalAlignment;
/**
 A boolean property to indicate whether the text frame should expand to account for multiple lines of text.
 @discussion When a text component expands, it may cause the band to increase in size as well.
 */
@property (readonly, nonatomic) BOOL flexible;
/**
 The text color of the title.
 */
@property (readonly, nonatomic, copy) RKColor *color;
/**
 The mode for wrapping and truncating text in the component frame.
 */
@property (readonly, nonatomic) NSLineBreakMode lineBreakMode;
/**
 The transparency of the component.
 */
@property (readonly, nonatomic) CGFloat alpha;
/**
 If the component contains a date value, this property will contain the display format.
 */
@property (readonly, nonatomic) RKDateFormat dateFormat;
/**
 If the component contains a date value, this property will contain the display format.
 */
@property (readonly, nonatomic) RKTimeFormat timeFormat;
/**
 A number of value options used by the reporting engine to format the component value.
 */
@property (readonly, nonatomic, strong) RKValueFormattingOptions *valueFormattingOptions;
/**
 This value specifies the type of border that should appear at the edges of the text component.
 */
@property (readonly, nonatomic) RKComponentBorderOptions borderOptions;
/**
 If any of the component edges are bordered, this will be the line style of the border.
 */
@property (readonly, nonatomic) RKLineStyle lineStyle;
/**
 If any of the component edges are bordered, this will contain the stroke width of the border.
 */
@property (readonly, nonatomic) CGFloat strokeWidth;
/**
 If any of the component edges are bordered, this will be the stroke color for the border.
 */
@property (readonly, nonatomic, copy) RKColor *strokeColor;
/**
 A platform-independent container for the font information.
 */
@property (readonly, nonatomic, strong) RKFontInformation *font;
/**
 The background color for the component.
 */
@property (readonly, nonatomic, copy) RKColor *backgroundColor;
/**
 A value that rounds the edges of the component.
 */
@property (readonly, nonatomic) CGFloat cornerRadius;

@end

NS_ASSUME_NONNULL_END
