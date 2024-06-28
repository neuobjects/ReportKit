//
//  BarcodeComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentTemplate.h>
#import <ReportKit/RKBarcodeFormat.h>
#import <ReportKit/RKDataAwareComponentTemplate.h>

#include <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBarcodeComponentTemplate` object contains the design-time barcode properties assigned by ReportBuilder.
 */
@interface RKBarcodeComponentTemplate : RKDataAwareComponentTemplate

/**
 The barcode format.
 */
@property (readonly, nonatomic) RKBarcodeFormat barcodeFormat;
/**
 The title contains the text used to generate the barcode.
 */
@property (readonly, nonatomic, copy) NSString *title;
/**
 The alignment mode of the barcode.
 */
@property (readonly, nonatomic) NSTextAlignment alignment;

@end

NS_ASSUME_NONNULL_END
