//
//  BlurTechnics.h
//  ImageProcessing
//
//  Created by rspasova on 10/10/18.
//  Copyright © 2018 das-Nano SL. All rights reserved.
//



//#include <stdio.h>
#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"


@interface BlurTechnics : NSObject

+ (CGRect) findPassportInImage:(UIImage*) image referenceRect:(CGRect) rect;

@end

