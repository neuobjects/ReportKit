//
//  RKPageView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 1/14/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif
#import <ReportKit/ReportKit.h>
@class RKPage;
NS_ASSUME_NONNULL_BEGIN

/**
 The `RKPageView` class contains the properties and methods required to render a page.
 */
@interface RKPageView : RKView

-(RKImage *) toImage;
@end

NS_ASSUME_NONNULL_END
