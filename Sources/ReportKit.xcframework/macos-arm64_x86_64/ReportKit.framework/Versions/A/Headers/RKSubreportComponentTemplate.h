//
//  RKSubreportComponentObject.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 3/2/24.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/ReportKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKSubreportComponentTemplate` object contains the design-time properties used to create a subreport component.
 */
@interface RKSubreportComponentTemplate : RKComponentTemplate

/**
 A boolean value indicating whether the band can expand vertically to fit the content of the subreport.
 */
@property (nonatomic) BOOL flexible;

@end

NS_ASSUME_NONNULL_END
