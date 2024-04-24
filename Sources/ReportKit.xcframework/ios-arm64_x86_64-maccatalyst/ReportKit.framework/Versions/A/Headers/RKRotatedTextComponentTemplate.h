//
//  RotatedTextComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKTextComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKRotatedTextComponentTemplate` object contains the properties used to define a report text field component.
 */
@interface RKRotatedTextComponentTemplate : RKTextComponentTemplate

/**
 The angle of the text.
 */
@property (readonly, nonatomic) CGFloat angle;
/**
 The origin of the rotation
 */
@property (readonly, nonatomic) RKTextPivotOrigin pivotOrigin;
/**
  The offset along the x axis that the rotation should begin.
 */
@property (readonly, nonatomic) CGFloat pivotOffsetFactorX;
/**
 The offset along the y axis that the rotation should begin.
 */
@property (readonly, nonatomic) CGFloat pivotOffsetFactorY;

@end

NS_ASSUME_NONNULL_END
