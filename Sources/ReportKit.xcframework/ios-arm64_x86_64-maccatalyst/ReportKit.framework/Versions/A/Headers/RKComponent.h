//
//  RKComponent.h
//  ReportBuilderTestApp
//
//  Created by Brian Lazarz on 1/12/22.
//  Copyright © 2022 Brian Lazarz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/ReportKit.h>
@class RKComponentView;

/**
 `RKComponent` is the primary class used to prepare the components for the report. Instances of `RKComponent` are available to many of the `RKDataSource` protocol methods. This provides the user access to the design-time component properties as well as the final generated NS/UIView that appears in the report.
 */
@interface RKComponent : NSObject <NSCopying>

/**
 The component type.
 */
@property (readonly, nonatomic) RKComponentType componentType;
/**
 A string that identifies the report element.
 @discussion You can use identifiers to obtain the instance of the report element during the generation process.
 */
@property (readonly, nonatomic, copy) NSString *identifier;
/**
 The tag identifying the component.
 */
@property (nonatomic) NSInteger tag;
/**
 A boolean value indicating whether the component should print on the report.
 */
@property (nonatomic) BOOL enabled;
/**
 The frame rectangle for the component.
 */
@property (readonly, nonatomic) CGRect designedFrame;//what is this do for our final report? anything? YES, if we need to assign a customview
/**
 The design-time properties.
 
 */
@property (readonly, nonatomic, strong) RKComponentTemplate *componentTemplate;
/**
 The formatted value to be displayed in the report.
 
 The reporting engine will map the values into each of the component. The preparedObjectValue contains the formatted value that will be displayed on the report.
 */
@property (nonatomic, strong) id preparedObjectValue;
/**
 The component view that is is drawn for the report.
 
 When the report is generated, the reporting engine will instantiate the componentView using the properties defined at design-time. This is the UI/NSView that will be drawn on the report.
 */
@property (readonly, nonatomic, strong) RKComponentView *componentView;//new - why here too, it's got a RBComponent property itself.! YES, IT BELONGS HERE. WE'LL PROBABLY GET RID OF IT IN THE RKComponentView class

/***/
//-(void) setPreparedObjectValue:(id)preparedObjectValue;//allows us to update the componentView
/**
 Used to determine if the component is a system component.
 @return `yes` if the component is a system component.
 */
-(BOOL) isSystemComponent;
/**
 The y location on the band.
 */
-(CGFloat) yLocation;
/**
 The x location on the band.
 */
-(CGFloat) xLocation;
/**
 @return `true` if the component frame has been adjusted by the reporting engine to fit the expanded size of the band.
 */
-(BOOL) hasBeenAdjustedToFitAvailableSpace;
@end

