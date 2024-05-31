//
//  RKTextViewComponentView.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 6/2/22.
//

#import <ReportKit/RKExpandableTextComponentView.h>
#import <ReportKit/ReportKit.h>
@class RKPageableTextContainer;

/**
 The `RKTextViewComponentView` class contains the properties and methods required to render a textview for a report.
 */
@interface RKTextViewComponentView : RKExpandableTextComponentView

/**
 The text of the component.
 */
@property (nonatomic, copy) NSAttributedString *text;
/**
 */
@property (nonatomic, copy) NSAttributedString *preparedText;//may be truncated ??? get rid of this!
/**
 The NS/UITextView that's rendered for the report.
 */
@property (readonly, nonatomic, strong) RKTextView *textView;
/**
 The vertical alignment mode of the text.
 
 The vertical alignment value is used to vertically position the title of the text component within the component frame. This is useful for cases where to the component text requires fewer lines than the component frame allows for.
 */
@property (nonatomic) RKTextVerticalAlignment verticalAlignment;
/**
 The space between the textField and the content frame. This should only get applied when the textfield frame is shorter than the component frame
 */
@property (nonatomic) CGFloat verticalContentMargin;//the space between the textField and the content frame. This should only get applied when the textfield frame is shorter than the component frame
/**
 A boolean property to indicate whether the text frame should expand to account for multiple lines of text.
 @discussion When a text component expands, it may cause the band to increase in size as well.
 */
@property (nonatomic) BOOL flexible;//not used?
/**
 This value specifies the type of border that should appear at the edges of the text component.
 */
@property (nonatomic) RKComponentBorderOptions borderOptions;
/**
 If any of the component edges are bordered, this will be the line style of the border.
 */
@property (nonatomic) RKLineStyle lineStyle;
/**
 If any of the component edges are bordered, this will contain the stroke width of the border.
 */
@property (nonatomic) CGFloat strokeWidth;
/**
 If any of the component edges are bordered, this will be the stroke color for the border.
 */
@property (nonatomic, strong) RKColor *strokeColor;

//-(instancetype) initWithComponent:(RKComponent *) component
//               textViewDictionary:(NSMutableDictionary *) textViewDictionary;

@end
