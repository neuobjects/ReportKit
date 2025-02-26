//
//  RKCircleComponentView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 3/4/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentView.h>
#import <ReportKit/RKShapeComponentView.h>
#import <ReportKit/RKReportKitDataTypes.h>
NS_ASSUME_NONNULL_BEGIN

@interface RKOvalComponentView : RKShapeComponentView

/**
 A boolean value indicating whether the oval is filled.
 */
@property (nonatomic) BOOL filled;
/**
 The fill color of the oval.
 */
@property (nonatomic, strong) RKColor *fillColor;

@end

NS_ASSUME_NONNULL_END
