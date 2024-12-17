//
//  RKBarcodeComponentView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 3/4/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentView.h>
#import <ReportKit/RKBarcodeFormat.h>
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBarcodeComponentView` contains the properties required to draw a barcode component.
 */
@interface RKBarcodeComponentView : RKComponentView

/**
 The title of the bar code. The barcode will be generated using the title.
 */
@property (nonatomic, copy) NSString *title;
/** 
 The barcode format.
 */
@property (nonatomic) RKBarcodeFormat barcodeFormat;
@end

NS_ASSUME_NONNULL_END
