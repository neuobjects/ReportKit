//
//  RKValueFormatter.h
//  ReportKit
//
//  Created by Brian Lazarz on 5/31/24.
//  Copyright © 2024 Brian Lazarz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RKChartValueFormatter <NSObject>

-(NSString *) stringForValue:(double) value;

-(NSString *) stringForValue:(double) value
                datasetIndex:(NSInteger) index;
@end

NS_ASSUME_NONNULL_END
