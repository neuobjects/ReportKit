//
//  RKDocumentAttributes.h
//  ReportKitFramework
//
//  Created by Brian Lazarz on 2/11/24.
//  Copyright © 2024 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 `RKDocumentAttributes` contain the fields that are added to the generated PDF.
 */
@interface RKDocumentAttributes : NSObject

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

/**
 Returns a list of comma-delimited keywords.
 */
-(NSString *) reportKeywordString;

@end

NS_ASSUME_NONNULL_END
