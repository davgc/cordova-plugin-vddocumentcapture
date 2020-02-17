#import <VDDocumentCapture/VDDocumentCapture.h>
#import <UIKit/UIKit.h>
#import <Cordova/CDVAvailability.h>
#import <Cordova/CDVPlugin.h>


@interface VDWebView : UIViewController<VDDocumentCaptureProtocol>

- (UIViewController *)initWithTarget:(CDVPlugin*)parent andConfig:(NSMutableDictionary*)config andDocTypes:(NSArray<NSString *>*)docTypes;


- (void) stopFramework;

- (void) VDDocumentCaptured:(NSData *) imageData withCaptureType:(VDCaptureType) captureType
                andDocument:(NSArray<VDDocument *> *) document;

- (void) VDDocumentAllFinished:(Boolean)processFinished;

- (void) VDTimeWithoutPhotoTaken:(int)seconds withCaptureType:(VDCaptureType)capture;


@end
