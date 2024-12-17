//
//  RKComponentView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 1/20/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <TargetConditionals.h>
#if TARGET_OS_OSX
  #import <Cocoa/Cocoa.h>
#else
  #import <UIKit/UIKit.h>
#endif
#import <ReportKit/RKReportKitDataTypes.h>
@class RKComponent;

NS_ASSUME_NONNULL_BEGIN
  
/**
 The `RKComponentView` is the view that is generated for the report.
 */
@interface RKComponentView : RKView

/**
  Provides access to all the design-time properties of the component.
 */
@property (readonly, nonatomic) RKComponent *component;//why here too? So we can get to the model properties. we can probably get rid of it when we implement all the RB*ComponentModel properties
/**
 The clamping location defines the behavior of the component if the band is resized during the generation process.
 @discussions Text field and text view components may be resized to account for the size of their content. If a band is resized, the reporting engine will use this property to position the component on the band. Components that are set to clamp to the top will retain the spacing to the top of the band. Likewise, components that are set to clamp to the bottom will retain the spacing to the bottom of the resized band.
 */
@property (readonly, nonatomic) RKComponentClampingLocation clampingLocation;
@end

NS_ASSUME_NONNULL_END
