//
//  RKExpandableTextComponentView.h
//  Indie TimeTracker
//
//  Created by Brian Lazarz on 6/8/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentView.h>
@class RKPageableTextContainer;

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKExpandableTextComponentView` class is the base class for an expandable text view.
 
 ``RKTextComponentView`` objects have the ability to expand vertically to fit it's contents. This class provides the functionality to keep track of the text as it extends onto subsequent pages.
 */
@interface RKExpandableTextComponentView : RKComponentView

/**
  Attributes for the text content of the component.
 */
@property (readonly, nonatomic, strong) RKPageableTextContainer *textContainer;

@end

NS_ASSUME_NONNULL_END
