//
//  NSBezierPath+LineStyles.h
//  ReportBuilderTestApp
//
//  Created by Brian Lazarz on 8/26/20.
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
 This category provides methods to apply line styles to the bezier path.
 */
@interface RKBezierPath (ReportKit)

/*
 Applies the given line style to the bezier path.
 @param lineStyle The line style to apply.
 @param spacingMultiplier A numeric value used to space the individual line sections that make up the entire line.
 */
-(void) applyLineStyle:(RKLineStyle) lineStyle
 withSpacingMultiplier:(CGFloat) spacingMultiplier;

@end

NS_ASSUME_NONNULL_END


