//
//  ComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/17/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/JSONModel.h>
#import <ReportKit/RKReportKitDataTypes.h>
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKComponentTemplate` object contains the design-time properties that are common to all report components.
 */
@interface RKComponentTemplate : JSONModel

/**
 The type of component.
 */
@property (readonly, nonatomic) RKComponentType componentType;
/**
 The clamping location defines the behavior of the component if the band is resized during the generation process.
 @discussions Text field and text view components may be resized to account for the size of their content. If a band is resized, the reporting engine will use this property to position the component on the band. Components that are set to clamp to the top will retain the spacing to the top of the band. Likewise, components that are set to clamp to the bottom will retain the spacing to the bottom of the resized band.
 */
@property (readonly, nonatomic) RKComponentClampingLocation clampingLocation;
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
@property (readonly, nonatomic) CGRect frame;
/**
 An optional value used to indicate the name of the Vertical Field Group.
 @discussion Vertical Field Groups are used to adjust the frame location of the component based on empty components that share the same group. If any of group components above this component are empty, the frame origin will be shifted up which effectively removes the blank space left from the empty field.
 
 Vertical Field Groups are useful for postal address blocks. When a postal address contains one or two streed address lines, you may wish to remove the blank line. Do this by assigning each of the text componenents the same Vertical Field Group.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *verticalFieldGroup;
/**
 An optional value used to indicate the name of the Horizontal Field Group.
 @discussion Horizontal Field Groups are used to adjust the frame location of the component based on empty components that share the same group. If any of group components above this component are empty, the frame origin will be shifted left which effectively removes the blank space left from the empty field.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *horizontalFieldGroup;
@end

/// this is after the interface section
NS_ASSUME_NONNULL_END
