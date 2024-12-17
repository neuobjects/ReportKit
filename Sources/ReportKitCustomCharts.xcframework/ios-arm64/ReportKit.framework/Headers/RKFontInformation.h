//
//  RKFontInformation.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/19/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/JSONModel.h>
NS_ASSUME_NONNULL_BEGIN
/**
 `RKFontInformation` provides a platform-independent container for the font information. It also allows for assignment of custom fonts from the Xcode project.
 */
@interface RKFontInformation : JSONModel

/**
 The type of font Custom or Project.
 */
@property (nonatomic) RKFontType fontType;
/**
 The fully specified family-face name of the font.
 */
@property (nonatomic, copy) NSString *fontName;
/**
 The family name of the font (“Times”, “Helvetica.”, etc.).
 */
@property (nonatomic, copy) NSString *familyName;
/**
 Reserved for future use.
 */
@property (nonatomic, copy) NSString *presetName;
/**
 The point size of the font.
 */
@property (nonatomic) CGFloat pointSize;
/**
 For Project fonts, this will be the file name of the font.
 */
@property (nonatomic, copy) NSString<Optional> *projectFileName;
/**
 Return an instance of the platform-specific font.
 @return the UIFont (or NSFont) instance.
 */
-(RKFont *) toFont;
@end

NS_ASSUME_NONNULL_END
