//
//  RKAxisValueFormatter.h
//  ReportKit
//
//  Created by Brian Lazarz on 5/31/24.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RKChartAxisValueFormatter <NSObject>

-(NSString *) stringForValue:(double) value;

@end

NS_ASSUME_NONNULL_END
