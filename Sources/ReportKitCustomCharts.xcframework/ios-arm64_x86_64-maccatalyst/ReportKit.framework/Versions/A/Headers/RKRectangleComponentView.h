//
//  RKRectangleComponentView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 3/4/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKShapeComponentView.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKRectangleComponentView` class contains the properties and methods required to render a rectangle for a report.
 */
@interface RKRectangleComponentView : RKShapeComponentView

/**
 A boolean value to indicate whether the oval is filled in.
 */
@property (nonatomic) BOOL filled;
/**
 The fill color of the rectangle.
 */
@property (nonatomic, strong) RKColor *color;
/**
 A value that rounds the edges of the component.
 */
@property (nonatomic) CGFloat cornerRadius;

@end

NS_ASSUME_NONNULL_END
