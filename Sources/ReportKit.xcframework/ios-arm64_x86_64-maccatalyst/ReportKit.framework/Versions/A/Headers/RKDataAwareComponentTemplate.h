//
//  DataAwareModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentTemplate.h>

NS_ASSUME_NONNULL_BEGIN

@interface RKDataAwareComponentTemplate : RKComponentTemplate

/**
 The model/key that the reporting engine uses to map the value to the component.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *databaseName;
/**
 Used in conjuction with the model/key, this value contains property name used to map the value to the component contents.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *propertyName;

@end

NS_ASSUME_NONNULL_END
