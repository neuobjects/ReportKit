//
//  RKSubreportView.h
//  ReportKitFramework
//
//  Created by Brian Lazarz on 3/3/24.
//

#import <ReportKit/ReportKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The `RKSubreportComponentView` class contains the properties and methods required to render a subreport.
 */
@interface RKSubreportComponentView : RKComponentView

@property (nonatomic, strong) RKView *subreportView;

@end

NS_ASSUME_NONNULL_END
