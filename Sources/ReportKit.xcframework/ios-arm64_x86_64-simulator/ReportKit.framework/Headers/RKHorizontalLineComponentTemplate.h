//
//  HorizontalLineComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKShapeComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKHorizontalLineComponentTemplate` object contains the properties used to define a report text field component.
 */
@interface RKHorizontalLineComponentTemplate : RKShapeComponentTemplate

/**
 The shape of the endpoints of a stroked path.
 */
@property (nonatomic) RKLineCapStyle lineCapStyle;

@end

NS_ASSUME_NONNULL_END
