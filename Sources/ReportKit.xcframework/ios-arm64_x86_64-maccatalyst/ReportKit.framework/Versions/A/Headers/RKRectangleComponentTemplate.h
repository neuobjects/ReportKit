//
//  RectangleComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKShapeComponentTemplate.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKRectangleComponentTemplate` object contains the design-time properties used to create a rectangle shape component.
 */
@interface RKRectangleComponentTemplate : RKShapeComponentTemplate

/**
 A boolean value to indicate whether the oval is filled in.
 */
@property (readonly, nonatomic) BOOL filled;
/**
 The fill color of the rectangle.
 */
@property (readonly, nonatomic, strong) RKColor *color;//rename to fillColor? or change ovalcomponent color...
/**
 A value that rounds the edges of the component.
 */
@property (readonly, nonatomic) CGFloat cornerRadius;

@end

NS_ASSUME_NONNULL_END
