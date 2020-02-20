#import "VDWebView.h"

#import <VDDocumentCapture/VDDocumentCapture.h>
#import "CDVVDDocumentCapture.h"
#import "VDDocumentCaptureConfig.h"

@implementation VDWebView

UIViewController* VDView;

CDVVDDocumentCapture* parent;
NSArray<NSString *>* _docTypes;
NSMutableDictionary* _config;

- (UIViewController *)initWithTarget:(CDVVDDocumentCapture*)myParent andConfig:(NSMutableDictionary*)config andDocTypes:(NSArray<NSString *>*)docTypes
{
    _docTypes = docTypes;
    _config = config;
    parent = myParent;
    return self;
    
}

- (void) viewDidAppear:(BOOL)animated {
      
      if (![VDDocumentCapture isStarted]) {
          // Here a call with options can be made.
          
          VDView = [VDDocumentCapture startWithDelegate:self andDocumentIds: _docTypes andConfiguration:_config];
          
          if (VDView ==nil){
              [self stopFramework];
          }
      }
}

// In another place you can stop the process (not recommended).
- (void) stopFramework {
  // Stop it whenever you want.  VDDocumentCapture.stop();
    [VDDocumentCapture stop];
            
    [VDView dismissViewControllerAnimated:YES completion:nil];
    [self dismissViewControllerAnimated:YES completion:nil];
}
// Protocol methods.
// Called when a document image has been captured
- (void) VDDocumentCaptured:(NSData *) imageData withCaptureType:(VDCaptureType) captureType
      andDocument:(NSArray<VDDocument *> *) document {
  // Do with image as needed.
    //NSLog(@"Document Captured");
    [parent VDDocumentCaptured:imageData withCaptureType:captureType andDocument:document];
    
}
// Called when the framework has finished.
// processFinished (Boolean) Indicates if the process has finish (true) or has been interrupted (false)
- (void) VDDocumentAllFinished:(Boolean)processFinished {
    // When the framework ends, proceed as needed.
     NSLog(@"Document Finished");
    [parent VDDocumentAllFinished:processFinished];
    [self stopFramework];
}
// Called when the number of seconds passed without taking the photo.
- (void) VDTimeWithoutPhotoTaken:(int)seconds withCaptureType:(VDCaptureType)capture {
   // Action may be needed.
     NSLog(@"Not taken ");
    [parent VDTimeWithoutPhotoTaken:seconds withCaptureType:capture];
    [self stopFramework];
}



@end
