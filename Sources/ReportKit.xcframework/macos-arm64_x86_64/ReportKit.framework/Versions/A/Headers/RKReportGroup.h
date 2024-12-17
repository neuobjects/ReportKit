//
//  RKGroupData.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 7/26/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
@class RKGroupTemplate;

/**
 The `RKReportGroup` class allows you to generate reports for hierarchical information. Each group has it's own group header and group footer however, just the inner-most group contains a detail band.
 */
@interface RKReportGroup : NSObject

/**
 The identifier for the group. This comes from the group identifer that was assigned at design-time.
 */
@property (readonly, nonatomic, copy, ) NSString *identifier;//do we want to change this to a getter? OR include the entire RKGroupIdentifier. it's convenient to keep this here.
/**
 Contains the design-time group properties including the header and footer bands for the group.
 */
@property (readonly, nonatomic, strong) RKGroupTemplate *groupTemplate;//design-time group properties
/**
 Not used.
 */
@property (readonly, nonatomic) NSInteger groupRowIndex;
/**
 This will contain the parent group on a multi-group report.
 */
@property (readonly, nonatomic, strong) RKReportGroup *parentReportGroup;
/**
 A boolean value indicating whether the group should print.
 */
@property (nonatomic) BOOL enabled;
/**
 The object associated with the group.
 */
@property (nonatomic, strong) id groupObject;
/**
 The objects associated with the content of the group.
 */
@property (nonatomic, strong) id contentObjects;//array of data elements

/**
 This will return the parent's content objects, if this belongs to a parent group.
 */
-(id) parentContentObjects;

@end
