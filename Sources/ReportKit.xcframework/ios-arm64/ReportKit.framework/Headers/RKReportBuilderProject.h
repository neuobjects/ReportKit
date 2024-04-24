//
//  ReportBuilderProject.h
//  ReportBuilder
//
//  Created by Brian Lazarz on 11/10/20.
//  Copyright © 2023 neuObjects Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <ReportKit/RKReportKitDataTypes.h>
#import <ReportKit/RKReportBuilderProjectModel.h>

@interface RKReportBuilderProject : NSObject <NSCoding>

/**
 The unique UUID for the project. This value will change frequently with each save.
 */
@property (readonly, nonatomic, copy) NSString *uuid;
/**
 The Report Builder project name
 */
@property (readonly, nonatomic, copy) NSString *projectName;
///@property (nonatomic, strong) NSObject *recoveredPageDesignViews;

///-(void) transferProjectSettingsFrom:(RKReportBuilderProject *) sourceProject;

@end


