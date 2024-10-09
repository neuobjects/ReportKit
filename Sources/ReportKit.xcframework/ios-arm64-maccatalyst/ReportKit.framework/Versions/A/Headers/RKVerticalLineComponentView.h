//
//  RKVerticalLineComponentView.h
//  ReportBuilderPrototypeApp
//
//  Created by Brian Lazarz on 3/4/22.
//

#import <ReportKit/RKShapeComponentView.h>
#import <ReportKit/RKReportKitDataTypes.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKVerticalLineComponentView` class contains the properties and methods required to render a vertical line for a report.
 */
@interface RKVerticalLineComponentView : RKShapeComponentView

/**
 The shape of the endpoints of a stroked path.
 */
@property (readonly, nonatomic) RKLineCapStyle lineCapStyle;

@end

NS_ASSUME_NONNULL_END
