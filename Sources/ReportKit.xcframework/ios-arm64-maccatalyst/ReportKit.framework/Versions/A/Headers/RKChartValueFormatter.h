//
//  RKValueFormatter.h
//  ReportKit
//
//  Created by Brian Lazarz on 5/31/24.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RKChartValueFormatter <NSObject>

/**
  Returns a string for the given value.
 */
-(NSString *) stringForValue:(double) value;

/**
 Returns a string for the given value and dataset index.
 */
-(NSString *) stringForValue:(double) value
                datasetIndex:(NSInteger) index;

@end

NS_ASSUME_NONNULL_END
