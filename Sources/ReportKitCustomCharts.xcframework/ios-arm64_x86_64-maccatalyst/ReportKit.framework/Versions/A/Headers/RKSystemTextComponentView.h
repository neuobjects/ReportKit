//
//  RKSystemTextComponentView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 4/26/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKTextComponentView.h>
#import <ReportKit/ReportKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKSystemTextComponentView` class contains the properties and methods required to render a system text field for a report.
 */
@interface RKSystemTextComponentView : RKTextComponentView

/**
 The type of system field.
 */
@property (readonly, nonatomic) RKSystemTextFieldType systemFieldType;

@end

NS_ASSUME_NONNULL_END
