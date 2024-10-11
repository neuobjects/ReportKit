//
//  ColorName.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 5/9/22.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKReportKitDataTypes.h>
#include <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKNamedColor` object contains the properties used to define a report text field component.
 */
@interface RKNamedColor : NSObject

/**
 
 */
@property (readonly, nonatomic, copy) NSString *name;
/**
 The red component of the color.
 */
@property (readonly, nonatomic) CGFloat red;
/**
 The green component of the color.
 */
@property (readonly, nonatomic) CGFloat green;  
/**
 The blue component of the color.
 */
@property (readonly, nonatomic) CGFloat blue;
/**
 The alpha component of the color.
 */
@property (readonly, nonatomic) CGFloat alpha;
/**
 The color.
 */
@property (readonly, nonatomic, strong) RKColor *color;

/**
 Returns an array of named colors.
 */
+(NSArray<RKNamedColor *> *) arrayOfNamedColors;

//-(instancetype) initWithName:(NSString *) name
//                    hexColor:(NSString *) hexColor;

//-(NSString *) colorCode;

//-(RKNamedColor *) nearestColor;

//-(DCDominantColor) dominantColor;
@end

NS_ASSUME_NONNULL_END
