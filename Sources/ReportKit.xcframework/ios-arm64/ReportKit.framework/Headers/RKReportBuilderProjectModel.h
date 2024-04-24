//
//  ReoirtBuilderProjectModel.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/18/21.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <ReportKit/JSONModel.h>
#import <ReportKit/RKPageTemplate.h>

@protocol RKPageTemplate;

NS_ASSUME_NONNULL_BEGIN

@interface RKReportBuilderProjectModel : JSONModel

/**
 The file format version.
 */
@property (readonly, nonatomic) NSInteger version;
/**
 The unique UUID for the project. This value may change frequently with each save.
 */
@property (readonly, nonatomic, copy) NSString *uuid;
/**
 The Report Builder project name
 */
@property (readonly, nonatomic, copy) NSString *projectName;
/**
 The Xcode project path.
 */
@property (readonly, nonatomic, copy) NSString<Optional> *xcodeProjectPath;
/**
 The designed pages. Currently limited to 1 page per project.
 */
@property (readonly, nonatomic, strong) NSArray<RKPageTemplate *> <RKPageTemplate> *pages;
/**
 A dictionary of images used in the project.
 */
@property (readonly, nonatomic, strong) NSDictionary<Ignore> *reportImages;
/**
 This dictionary contains the content for each of the TextViews used in the project.
 */
@property (readonly, nonatomic, strong) NSDictionary<Ignore> *reportTextViews;

@end

NS_ASSUME_NONNULL_END
