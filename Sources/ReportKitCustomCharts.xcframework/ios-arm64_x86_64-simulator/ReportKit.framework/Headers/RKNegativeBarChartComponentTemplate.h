//
//  RKNegativeBarChartComponentTemplate.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKBarChartComponentTemplate.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKNegativeBarChartComponentTemplate` class contains the design-time properties used to create a negative stack bar chart component.
 */
@interface RKNegativeBarChartComponentTemplate : RKBarChartComponentTemplate

//super @property (readonly, nonatomic) BOOL alternateColors;
/**
 A boolean value to indicate whether the stacks should have different colors.
 */
@property (readonly, nonatomic) BOOL alternateColors;

@end

NS_ASSUME_NONNULL_END
