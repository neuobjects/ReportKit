//
//  RKSubreportComponentObject.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 3/2/24.
//  Copyright © 2024 Brian Lazarz. All rights reserved.
//

#import <ReportKit/ReportKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKSubreportComponentTemplate` object contains the design-time properties used to create a subreport component.
 */
@interface RKSubreportComponentTemplate : RKComponentTemplate

@property (nonatomic) BOOL flexible;

@end

NS_ASSUME_NONNULL_END
