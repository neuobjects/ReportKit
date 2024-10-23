//
//  RKCustomView.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 7/20/22.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKComponentView.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKCustomComponentView` is the class responsible for drawwing the custom view for the report.
 */
@interface RKCustomComponentView : RKComponentView

/**
 The report-friendly view generated for the report.
 */
@property (nonatomic, strong) RKView *customView;
@end

NS_ASSUME_NONNULL_END
