//
//  RKGroupTemplate.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 4/14/22.
//

#import <Foundation/Foundation.h>
//#import <ReportKit/RKGlobalDefinitions.h>
#import <ReportKit/ReportKit.h>

/**
 The `RKGroupTemplace` class contains the group band definitions along with their contents.
 */
@interface RKGroupTemplate : NSObject
/**
 The identifer for the group.
 */
@property (readonly, nonatomic, strong) RKGroupIdentifier *groupIdentifier;
/**
 The type of content for the group. 
 
 The inner-most group of a multi-group report will have a contentType of `RKContentTypeDetail`, while the outer groups will have a type of `RKContentTypeGroup`.
 */
@property (readonly, nonatomic) RKContentType contentType;
/**
 The group header band templates associated with this group.
 */
@property (readonly, nonatomic, strong) NSMutableArray<RKBandTemplate *> *headerBands;
/**
 Nested group content.
 */
@property (readonly, nonatomic, strong) RKGroupTemplate *contentGroupTemplate;
/**
 The group detail band templates associated with this group.
 */
@property (readonly, nonatomic, strong) NSMutableArray<RKBandTemplate *> *footerBands;
/**
 The parent group (if applicable)
 */
@property (readonly, nonatomic, strong) RKGroupTemplate *parentGroupTemplate;
/**
 A boolean value indicating whether the band was set as enabled at design-time.
 */
@property (readonly, nonatomic) BOOL enabled;
/**
 REMOVE THIS?!
 */
@property (readonly, nonatomic) NSInteger groupRowIndex; //maybe? NEEDED?


@end

