//
//  BasicChartComponentModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/RKChartComponentTemplate.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKFontInformation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKBasicChartComponentTemplate` class contains additional properties to the standard chart.
 */
@interface RKBasicChartComponentTemplate : RKChartComponentTemplate

/**
 The color theme palette to use for the chart.
 */
@property (readonly, nonatomic) RKChartColorTheme colorTheme;

@end

NS_ASSUME_NONNULL_END
