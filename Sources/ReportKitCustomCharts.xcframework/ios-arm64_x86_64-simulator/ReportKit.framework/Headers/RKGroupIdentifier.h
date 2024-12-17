//
//  RKGroupIdentifier.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 10/21/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/JSONModel.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKGroupIdentifier` class is used to associate a band with a group
 */
@interface RKGroupIdentifier : JSONModel
/**
 The identifier for the group. The identifier should be unique.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *identifier;
/**
 The group number assigned to this group. A report supports up to 10 groups. The group number will be automatically assigned starting at 0.
 */
@property (readonly, nonatomic) int groupNumber;

@end

NS_ASSUME_NONNULL_END
