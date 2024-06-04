//
//  Introspector.h
//  Indie TimeTracker
//
//  Created by Brian Lazarz on 11/25/19.
//  Copyright © 2019 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RKIntrospector : NSObject

+(NSArray *) propertyNamesForClass:(NSString *)className;
+(NSDictionary *) fullyQualifiedPropertyDictionaryForObject:(id)object
                                                  className:(NSString *) className
                                                      level:(NSInteger) thisLevel;
+(id) valueForMethod:(NSString *)method
              object:(id)object;              

@end
