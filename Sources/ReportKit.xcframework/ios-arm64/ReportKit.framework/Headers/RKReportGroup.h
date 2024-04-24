//
//  RKGroupData.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 7/26/22.
//

#import <Foundation/Foundation.h>
@class RKGroupTemplate;

/**
 The `RKReportGroup` class 
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
@property (readonly, nonatomic) NSInteger groupRowIndex; //maybe?
/**
 This will contain the parent group on a multi-group report,
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
 the objects associated with the content of the group.
 */
@property (nonatomic, strong) id contentObjects;//array of data elements

//-(instancetype) initWithParentGroup:(RKReportGroup *) parentGroup;
//-(NSString *) identifier;
@end
