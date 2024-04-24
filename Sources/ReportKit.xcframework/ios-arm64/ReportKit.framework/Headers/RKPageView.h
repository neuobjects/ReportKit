//
//  RKPageView.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 1/14/22.
//
#import <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif
#import <ReportKit/ReportKit.h>
//#import "RBPageTemplate.h"
@class RKGeneratedPage;
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKPageView` class contains the properties and methods required to render a page.
 */
@interface RKPageView : RKView

-(RKImage *) toImage;
@end

NS_ASSUME_NONNULL_END
