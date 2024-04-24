//
//  ImageComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKDataAwareComponentTemplate.h>
#include <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKImageComponentTemplate` object contains the properties used to define a report text image component.
 */
@interface RKImageComponentTemplate : RKDataAwareComponentTemplate
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
@property (readonly, nonatomic, copy) RKColor *strokeColor;
/**
 The transparency of the component.
 */
@property (readonly, nonatomic) CGFloat alpha;
/**
 The image set name if the image is in the asset catalog.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *imageSetName;
/**
 The path to the image if it's in the asset catalog.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *assetPath;
/**
 The standalone image name or the name in the asset catalog.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *imageName;
/**
 A flag used to determine how the images is adjusted when its size changes.
 */
@property (readonly, nonatomic) RKImageContentMode imageViewContentMode;

@end

NS_ASSUME_NONNULL_END
