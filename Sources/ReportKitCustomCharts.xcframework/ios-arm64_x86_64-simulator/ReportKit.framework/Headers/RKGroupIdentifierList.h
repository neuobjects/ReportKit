//
//  RKGroupIdentifierList.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 10/21/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/JSONModel.h>
@class RKGroupIdentifier;

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKGroupIdentifierList` class contains the list of `RKGroupIdentifier` objects used in the report.
 */@interface RKGroupIdentifierList : JSONModel

/**
 Use this method to retrieve the group identifier for the given group number.
 @param groupNumber the group number.
 @return The group identifier.
 */
-(NSString *) identifierWithGroupNumber:(int) groupNumber;
/**
 Use this method to retrieve the `RKGroupIdentifier` instance for the given group number.
 @param groupNumber the group number.
 @return The `RKGroupIdentifier`.

 */
-(RKGroupIdentifier *) groupIdentifierForGroupNumber:(int) groupNumber;

@end

NS_ASSUME_NONNULL_END
