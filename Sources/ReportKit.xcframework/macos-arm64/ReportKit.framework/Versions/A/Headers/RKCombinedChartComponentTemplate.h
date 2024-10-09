//
//  CombinedChartComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKBarLineChartComponentTemplate.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKCombinedChartComponentTemplate` object contains the design-time properties for the combined chart component.
 */
@interface RKCombinedChartComponentTemplate : RKBarLineChartComponentTemplate

/**
 the loction relative to the bar to draw the values.
 */
@property (readonly, nonatomic) NSInteger valueLocation;
/**
 When enabled, a gray area is drawn behind the bar to indicate the maximum value.
 */
@property (readonly, nonatomic) BOOL barShadows;
/**
 The width of the bars along the x axis.
 */
@property (readonly, nonatomic) CGFloat barWidth;
/**
 REMOVE THIS!
 */
//@property (readonly, nonatomic) BOOL grouped;
/**
 The space between groups of bars.
 */
@property (readonly, nonatomic) CGFloat groupSpace;
/**
 The space between individual bars.
 */
@property (readonly, nonatomic) CGFloat barSpace;

@end

NS_ASSUME_NONNULL_END
