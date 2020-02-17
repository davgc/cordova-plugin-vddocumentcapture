//
//  VDDocument.h
//  VDDocumentCapture
//
//  Copyright © 2017 das-Nano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VDEnums.h"

/**
 @brief Class that represents an available document.
 @details It just encapsulates the enum VDCaptureTypeEnum.
 */
@interface VDDocument : NSObject <NSCopying>

/**
 @brief (Deprecated) Property with the document value.
 */
@property (nonatomic) int documentType;

/**
 @brief Property with the document value.
 */
@property (nonatomic) int documentLegacyId;

/**
 @brief Property with the clasification groups.
 */
@property (nonatomic) NSArray* groupIds;

/**
 @brief Property with the geographical areas.
 */
@property (nonatomic) NSArray* geographicalArea;

/**
 @brief Property with the document name
 */
@property (nonatomic) NSString* documentName;

/**
 @brief Property with the document colloquial name
 */
@property (nonatomic) NSString* shortDescription;

/**
 @brief Property with the document country
 */
@property (nonatomic) NSString* documentCountry;

@property (nonatomic) BOOL hasObverse;

@property (nonatomic) BOOL hasReverse;

@end
