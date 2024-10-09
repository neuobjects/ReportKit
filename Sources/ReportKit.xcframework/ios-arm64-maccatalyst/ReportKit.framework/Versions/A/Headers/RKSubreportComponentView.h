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
/**
 A boolean property to indicate whether the frame should expand to account for a larger subreport.
 @discussion When a subreport is taller than the space allocated at design-time, you may want the band height to increase as well.
 */
@property (nonatomic) BOOL flexible;//not used?
/**
 The subreport view
 */
@property (nonatomic, strong) RKView *subreportView;

@end

NS_ASSUME_NONNULL_END
