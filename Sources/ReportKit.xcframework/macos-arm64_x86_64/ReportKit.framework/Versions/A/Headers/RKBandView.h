//
//  RKBandView.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 1/20/22.
//

#import <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif
#import <ReportKit/ReportKit.h>
@class RKGeneratedBand;
@class RKComponent;

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBandView` represents the printed band.
 */
@interface RKBandView : RKView

/**
 The row number assigned to the band. When multiple instances of the same band are be printed, each will be assigned a row number.
 */
@property (nonatomic) NSInteger rowNumber;


@end

NS_ASSUME_NONNULL_END
