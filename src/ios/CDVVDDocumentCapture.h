#import <Cordova/CDVPlugin.h>
#import <VDDocumentCapture/VDDocumentCapture.h>


@interface CDVVDDocumentCapture : CDVPlugin {
}

@property (nonatomic, copy) NSString* callbackId;
  
- (void)start:(CDVInvokedUrlCommand*)command;


- (void) VDDocumentCaptured:(NSData *) imageData withCaptureType:(VDCaptureType) captureType
                andDocument:(NSArray<VDDocument *> *) document;

- (void) VDTimeWithoutPhotoTaken:(int)seconds withCaptureType:(VDCaptureType)capture;

@end

