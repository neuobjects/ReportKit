//
//  RKImageComponentView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 3/4/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentView.h>
#import <ReportKit/ReportKit.h>

/**
 The `RKImageComponentView` class contains the properties and methods required to render an image for a report.
 */
@interface RKImageComponentView : RKComponentView

/**
 If any of the component edges are bordered, this will be the line style of the border.
 */
@property (nonatomic) RKLineStyle lineStyle;
/**
 If any of the component edges are bordered, this will contain the stroke width of the border.
 */
@property (nonatomic) CGFloat strokeWidth;
/**
 If any of the component edges are bordered, this will be the stroke color for the border.
 */
@property (nonatomic, strong) RKColor *strokeColor;
/**
 The transparency of the component.
 */
@property (nonatomic) CGFloat alpha;
/**
 A flag used to determine how the images is adjusted when its size changes.
 */
@property (nonatomic) RKImageContentMode imageViewContentMode;
/**
 The image rendered on the report.
 */
@property (nonatomic, strong) RKImageView *imageView;

+(RKImage *) imageOrPdfNamed:(NSString *) name;

@end

