//
//  RKReportProperties.h
//  ReportKitFramework
//
//  Created by Brian Lazarz on 2/11/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 `RKReportProperties` contain the fields that are added to the generated PDF.
 */
@interface RKReportProperties : NSObject

/**
 The PDF title.
 */
@property (nonatomic, copy) NSString *title;
/**
 The subject of the PDF.
 */
@property (nonatomic, copy) NSString *subject;
/**
 The PDF author.
 */
@property (nonatomic, copy) NSString *author;
/**
 The creator of the PDF.
 */
@property (nonatomic, copy) NSString *creator;
/**
 An array of keywords to be assigned to the PDF.
 */
@property (nonatomic, copy) NSArray<NSString *> *keywords;

-(NSString *) reportKeywordString;

@end

NS_ASSUME_NONNULL_END
