//
//  VDCountry.h
//  VDDocumentCapture
//
//  Copyright © 2017 das-Nano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VDEnums.h"

/**
 @brief Class that represents an available country.
 @details It just encapsulates the enum VDContryEnum. It also implements <NSCopying> in order to use it as a key in a NSDictionary.
 */
@interface VDCountry : NSObject <NSCopying>

/**
 @brief Property with the country value.
 */
@property (nonatomic) VDCountryEnum documentCountry;
/**
 @brief Property with the country name
 */
@property (nonatomic) NSString* countryName;
@end
