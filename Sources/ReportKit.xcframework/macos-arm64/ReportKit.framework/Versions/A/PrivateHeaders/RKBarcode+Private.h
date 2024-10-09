//
//  RKBarcode+Private.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 6/21/24.
//  Copyright © 2024 Brian Lazarz. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKBarcodeFormat.h>
#import "RKBarcode.h"

@interface RKBarcode (Private)
/**
 Creates an image of the barcode.
 @param format The barcode format
 @param error An object describing the error that occurred while generating the barcode.
 @return An image containing the barcode.
 */
-(RKImage *) imageForFormat:(RKBarcodeFormat) format
                      error:(NSError **)error;

@end
