//
//  RKGenerationError.h
//  ReportKit
//
//  Created by Brian Lazarz on 4/30/24.
//  Copyright © 2024 Brian Lazarz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReportKit/RKReportKitDataTypes.h>

@interface RKReportMessage : NSObject

@property (nonatomic) RKMessageType type;
@property (nonatomic, copy) NSString *longDescription;
@property (nonatomic, copy) NSString *shortDescription;
@property (nonatomic, copy) NSString *recoverySuggestion;

@end

