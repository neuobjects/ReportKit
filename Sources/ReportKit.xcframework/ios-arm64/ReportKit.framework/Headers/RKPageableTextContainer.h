//
//  RKPageableTextContainer.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 5/5/23.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/** 
 The `RKPageableTextContainer` class is used to process and keep track of the text that overflows onto subsequent pages.
 */
@interface RKPageableTextContainer : NSObject

/**
 The index of the current range of text to be processed.
 
 When text overflows onto the next page, the report engine calculates the NSRange of the remaining text.
 */
@property (readonly, nonatomic) NSInteger currentRangeIndex;
/**
 As text overflows onto the next page, the currentBandOverflowIndex will increment.
 */
@property (readonly, nonatomic) NSInteger currentBandOverflowIndex;
/**
 The current attributed text.

 As text overflows onto the next page, te currentAttributedText will contain the remain text that is yet to print.
 */
@property (readonly, nonatomic, copy) NSAttributedString *currentAttributedText;
/**
 The frame required to draw the text contents.
 */
@property (readonly, nonatomic) CGRect currentRequiredRect;
/**
 A boolean value to indicate whether the component frame has been adjusted to fit the available space in the band.
 @return `true` if the component frame has been adjusted by the reporting engine to fit the expanded size of the band.
 */
-(BOOL) hasBeenAdjustedToFitAvailableSpace;
/**
 A boolean value to indicate whether there's more text to print.
 @return `true` if the component has additional text to print.
 */
-(BOOL) hasMoreText;
/**
 This is remaining text that is yet to be printed.
 */
-(NSAttributedString *) remainingAttributedString;

@end

NS_ASSUME_NONNULL_END
