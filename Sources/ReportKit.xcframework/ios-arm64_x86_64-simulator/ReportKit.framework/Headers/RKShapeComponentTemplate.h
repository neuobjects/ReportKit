//
//  ShapeComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKShapeComponentTemplate` object contains the properties used to define a report shape component.
 */
@interface RKShapeComponentTemplate : RKComponentTemplate

/**
 If any of the component edges are bordered, this will be the line style of the border.
 */
@property (readonly, nonatomic) RKLineStyle lineStyle;//dashed, etc
/**
 If any of the component edges are bordered, this will contain the stroke width of the border.
 */
@property (readonly, nonatomic) CGFloat strokeWidth;
/**
 If any of the component edges are bordered, this will be the stroke color for the border.
 */
@property (readonly, nonatomic, copy) RKColor *strokeColor;

@end

NS_ASSUME_NONNULL_END
