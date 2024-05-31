//
//  JSONValueTransformer+ReportKit.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/JSONValueTransformer.h>
#include <TargetConditionals.h>
#if TARGET_OS_OSX
@class NSColor;
#else
@class UIColor;
#endif

NS_ASSUME_NONNULL_BEGIN
/**
 This category provides the necessary JSON object transformers used in the Report Builder report definitions.
 */
@interface JSONValueTransformer (ReportKit)

#if TARGET_OS_OSX
-(NSColor *) NSColorFromNSString:(NSString *) value;
#else
-(UIColor *) UIColorFromNSString:(NSString *) value;
#endif
@end

NS_ASSUME_NONNULL_END
