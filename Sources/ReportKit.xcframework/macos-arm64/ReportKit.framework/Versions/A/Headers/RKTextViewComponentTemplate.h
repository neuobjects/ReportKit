//
//  TextViewComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 5/31/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

//#import <ReportBuilderFramework/ReportBuilderFramework.h>
#import <ReportKit/ReportKit.h>

@protocol RKFontInformation;

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKTextViewComponentTemplate` object contains the design-time properties used to create a text view component.
 */
@interface RKTextViewComponentTemplate : RKDataAwareComponentTemplate

/**
 The alignment mode of the text.
 */
@property (readonly, nonatomic) NSTextAlignment alignment;//
/**
 A boolean property to indicate whether the text frame should expand to account for multiple lines of text.
 @discussion When a text component expands, it may cause the band to increase in size as well.
 */
@property (readonly, nonatomic) RKTextVerticalAlignment verticalAlignment;
//@property (readonly, nonatomic) BOOL richText;//
/**
 A boolean property to indicate whether the text frame should expand to account for multiple lines of text.
 @discussion When a text component expands, it may cause the band to increase in size as well.
 */
@property (readonly, nonatomic) BOOL flexible;//not used
/**
 The text color of the title.
 */
@property (readonly, nonatomic, strong) RKColor *color;//not a property? pulled from textField?
/**
 The transparency of the component.
 */
@property (readonly, nonatomic) CGFloat alpha;//
/**
 A platform-independent container for the font information.
 */
@property (readonly, nonatomic, strong) RKFontInformation *font;
/**
 The background color for the component.
 */
@property (readonly, nonatomic, strong) RKColor *backgroundColor;
/**
 A value that rounds the edges of the component.
 */
@property (readonly, nonatomic) CGFloat cornerRadius;
/**
 This value specifies the type of border that should appear at the edges of the text view component.
 */
@property (readonly, nonatomic) RKComponentBorderOptions borderOptions;
/**
 If any of the component edges are bordered, this will be the line style of the border.
 */
@property (readonly, nonatomic) RKLineStyle lineStyle;//
/**
 If any of the component edges are bordered, this will contain the stroke width of the border.
 */
@property (readonly, nonatomic) CGFloat strokeWidth;//
/**
 If any of the component edges are bordered, this will be the stroke color for the border.
 */
@property (readonly, nonatomic, strong) RKColor *strokeColor;
/**
 The frame rectangle for the text portion of the component.
 */
@property (readonly, nonatomic) CGRect titleFrame;
/**
 the title of the text view.
 */
@property (readonly, nonatomic, copy) NSString *title;//
/**
 If the component contains a date value, this property will contain the display format.
 */
@property (readonly, nonatomic) RKDateFormat dateFormat;
/**
 If the component contains a date value, this property will contain the display format.
 */
@property (readonly, nonatomic) RKTimeFormat timeFormat;
/**
 The formatting options used by the reporting engine to format the component value.
 */
@property (readonly, nonatomic, strong) RKValueFormattingOptions *valueFormattingOptions;
/**
 The mode for wrapping and truncating text in the component frame.
 */
@property (readonly, nonatomic) NSLineBreakMode lineBreakMode;
/**
 Contains the detail font information used in the attributed text.
 */
@property (readonly, nonatomic, strong) NSArray<RKFontInformation *><RKFontInformation> *fontDetail;

@end

NS_ASSUME_NONNULL_END
