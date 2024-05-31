//
//  RKTextComponentView.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 1/24/22.
//

#import <ReportKit/RKExpandableTextComponentView.h>
#import <ReportKit/RKPageableTextContainer.h>
#import <ReportKit/ReportKit.h>

/**
 The `RKTextComponentView` class contains the properties and methods required to render a text field for a report.
 */
@interface RKTextComponentView : RKExpandableTextComponentView

/**
 The text of the component.
 */
@property (nonatomic, copy) NSString *text;//title in RKTextComponentObject
/**
 The attributed text version of the text value.
 */
@property (nonatomic, copy) NSAttributedString *attributedStringValue;
/**
 */
@property (nonatomic, copy) NSString *preparedText;//may be truncated(?) We have a preparedObjectValue and preparedText. make sure we document the difference. We may not need this one. What about the formatted value? should we use it for this? that's going to get confusing - so much (sort of) redundancy. it's messy.
//THE FOLLOWING PROPERTIES ARE NATIVE VERSIONS OF RB*ComponentModel
//RKDataAwareComponentObject
/**
 The model or key that the reporting engine uses to map the value to the component.
 
 The reporting engine will use this value to find the object in the mapping dictionary used to populate the report components. When the `propertyName` property is also assigned, the reporting engine will retrieve the value from the retieved object using this `propertyName`.
 
 For example, given the following class:
 
    interface CRCustomer : NSObject
      property (nonatomic, copy) NSString *name;
      property (nonatomic, copy) NSString *address1;
      property (nonatomic, copy) NSString *address2;
      property (nonatomic, copy) NSString *city;
      property (nonatomic, copy) NSString *state;
      property (nonatomic, copy) NSString *postalCode;
    end
 We can map the `name` property to the by specifying `CRCustomer` as the `modelKey` and `name` as the propertyName. When we add a CRCustomer object to the report dictionary, the reporting engine will automatically map the customer name to the component value.
 */
@property (nonatomic, copy) NSString *databaseName;
/**
 Used in conjuction with the model/key, this value contains property name used to map the value to the component contents.
 */
@property (nonatomic, copy) NSString *propertyName;
/**
 The vertical alignment mode of the text.
 
 The vertical alignment value is used to vertically position the title of the text component within the component frame. This is useful for cases where to the component text requires fewer lines than the component frame allows for.
 */
@property (nonatomic) RKTextVerticalAlignment verticalAlignment;//
/**
 The space between the textField and the content frame. This should only get applied when the textfield frame is shorter than the component frame
 */
@property (nonatomic) CGFloat verticalContentMargin;//
/**
 A boolean property to indicate whether the text frame should expand to account for multiple lines of text.
 @discussion When a text component expands, it may cause the band to increase in size as well.
 */
@property (nonatomic) BOOL flexible;
/**
 REMOVE THIS?
 */
@property (nonatomic, strong) NSFormatter *valueFormatter;
/**
 A number of value options used by the reporting engine to format the component value.
 */
@property (nonatomic, strong) RKValueFormattingOptions *valueFormattingOptions;
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
/**
 The background color for the component.
 */
@property (nonatomic, strong) RKColor *backgroundColor;
/**
 A value that rounds the edges of the component.
 */
@property (nonatomic) CGFloat cornerRadius;
/**
 The NS/UITextField that's rendered for the report.
 */
@property (readonly, nonatomic, strong, readonly) RKTextField *textField;

//-(CGFloat) recalculateFrameAndContentsBasedOnRequiredSizeFittingWithinContentHeight:(CGFloat) contentHeight;
//NOT CALLED !?! -(void) formatPreparedObjectValue:(RKComponent *) component;

@end
