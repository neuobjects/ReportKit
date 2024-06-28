//
//  CircleComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKShapeComponentTemplate.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKTextComponentTemplate` object contains the design-time properties used to create an oval shape component.
 */
@interface RKOvalComponentTemplate : RKShapeComponentTemplate

/**
 A boolean value to indicate whether the oval is filled in.
 */
@property (readonly, nonatomic) BOOL filled;
/**
 The color of the oval.
 */
@property (readonly, nonatomic, strong) RKColor *fillColor;//
//@property (readonly, nonatomic, copy) NSString *fillColor;
@end

NS_ASSUME_NONNULL_END
