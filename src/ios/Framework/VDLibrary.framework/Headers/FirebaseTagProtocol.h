//
//  FirebaseTagProtocol.h
//  VDLibrary
//
//  Created by Usue Napal on 19/03/2019.
//  Copyright © 2019 das-nano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ValiDasConstantes.h"

@protocol FirebaseTagProtocol <NSObject>

@optional
-(void)iterationDetectionMode:(detectorMode)mode;
-(void)typeDocumentDetected:(NSString*)type;
-(void)rectangleDetected:(BOOL)detected;
-(void)documentDetectionProgress:(float)progress;

@end
