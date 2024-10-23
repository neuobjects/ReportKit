//
//  RKShapeComponentView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 6/13/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentView.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKShapeComponentView` class contains the properties and methods that are common to render shape components.
 */
@interface RKShapeComponentView : RKComponentView
/**
 If any of the component edges are bordered, this will be the line style of the border.
 */
@property (readonly, nonatomic) RKLineStyle lineStyle;
/**
 If any of the component edges are bordered, this will contain the stroke width of the border.
 */
@property (readonly, nonatomic) CGFloat strokeWidth;
/**
 If any of the component edges are bordered, this will be the stroke color for the border.
 */
@property (readonly, nonatomic, strong) RKColor *strokeColor;

@end

NS_ASSUME_NONNULL_END
