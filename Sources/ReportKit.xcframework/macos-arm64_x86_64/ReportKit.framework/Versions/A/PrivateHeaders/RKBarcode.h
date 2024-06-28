//
//  RKBarcode.h
//  ReportKit
//
//  Created by Brian Lazarz on 10/18/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKBarcodeFormat.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBarcode` object is used by the reporting engine to build the printed bar codes. The object is used by the ``RKBarcodeComponentView`` object to generate the barcode image.
 
 */
@interface RKBarcode : NSObject

/**
 Instantiates an `RKBarcode` object.
 @param title The title that will be turned into a barcode.
 @param size The size of the barcode.
 */
-(instancetype) initWithTitle:(NSString *) title
                         size:(CGSize) size;
/**
 Creates an image of the barcode.
 @param format The barcode format
 @param error An object describing the error that occurred while generating the barcode.
 @return An image containing the barcode.
 */
//-(RKImage *) imageForFormat:(RKBarcodeFormat) format
  //                    error:(NSError **)error;
@end

NS_ASSUME_NONNULL_END
