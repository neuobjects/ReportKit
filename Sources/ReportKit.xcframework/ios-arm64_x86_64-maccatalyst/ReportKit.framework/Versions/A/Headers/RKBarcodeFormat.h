//
//  RkRKBarcodeFormat.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 10/18/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#ifndef RKBarcodeFormat_h
#define RKBarcodeFormat_h

typedef enum {
  /** Aztec 2D barcode format. */
  kRKBarcodeFormatAztec,

  /** CODABAR 1D format. */
  kRKBarcodeFormatCodabar,

  /** Code 39 1D format. */
  kRKBarcodeFormatCode39,

  /** Code 93 1D format. */
  kRKBarcodeFormatCode93,

  /** Code 128 1D format. */
  kRKBarcodeFormatCode128,

  /** Data Matrix 2D barcode format. */
  kRKBarcodeFormatDataMatrix,

  /** EAN-8 1D format. */
  kRKBarcodeFormatEan8,

  /** EAN-13 1D format. */
  kRKBarcodeFormatEan13,

  /** ITF (Interleaved Two of Five) 1D format. */
  kRKBarcodeFormatITF,

  /** MaxiCode 2D barcode format. */
  kRKBarcodeFormatMaxiCode,

  /** PDF417 format. */
  kRKBarcodeFormatPDF417,

  /** QR Code 2D barcode format. */
  kRKBarcodeFormatQRCode,

  /** RSS 14 */
  kRKBarcodeFormatRSS14,

  /** RSS EXPANDED */
  kRKBarcodeFormatRSSExpanded,

  /** UPC-A 1D format. */
  kRKBarcodeFormatUPCA,

  /** UPC-E 1D format. */
  kRKBarcodeFormatUPCE,

  /** UPC/EAN extension format. Not a stand-alone format. */
  kRKBarcodeFormatUPCEANExtension
} RKBarcodeFormat;


#endif /* RKBarcodeFormat_h */
