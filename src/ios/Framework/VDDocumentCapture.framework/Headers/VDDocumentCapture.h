//
//  VDDocumentCapture.h
//  VDDocumentCapture
//

#import <UIKit/UIKit.h>
#import "VDCountry.h"
#import "VDDocument.h"
#import "VDEnums.h"

/**
 @brief Protocol that comunicates this framework with an app/framework/library that uses it.
 @details Currently all methods are required.
 */
@protocol VDDocumentCaptureProtocol <NSObject>

@required
/**
 @brief Delegate method which will notify when each of the document images is captured.
 @details The image is compressed as a jpeg with 50% of quality compression.
 @param imageData (NSData*) Contains the data of the document image captured.
 @param captureType (VDCaptureType) The type of capture with which the image has been taken.
 @param document (NSArray<NSString*>*) The possible documents to which the image has been taken.
 */
- (void)VDDocumentCaptured:(NSData*)imageData withCaptureType:(VDCaptureType)captureType andDocument:(NSArray<VDDocument *>*)document;

/**
 @brief Delegate method which will notify when the proccess has finished completely
 @param processFinished (Boolean) Indicates if the process has finish (true) or has been interrupted (false)
 @details This method will be called always at the end of the proccess or when stop has been called when everything is stopped.
 */
- (void)VDDocumentAllFinished:(Boolean)processFinished;

/**
 @brief Delegate method which will notify when pass more than X seconds without taking the photo.
 @param seconds (int) Time without taking the photo in seconds.
 @param capture (VDCaptureType) The type of capture when the time passed.
 */
- (void)VDTimeWithoutPhotoTaken:(int)seconds withCaptureType:(VDCaptureType)capture;


@end

/**
 @brief Class that contains the main functions of the Framework.
 @details Its the main class of this Framework. The public methods of this class are the ones used to make this Framework work.
 */
@interface VDDocumentCapture : NSObject
/**
 @brief This method is needed to use the SDK. It programs the delegate to which the SDK will notify the outputs and sets the documents used by the SDK. If the documents provided is nil or not valid, all the available documents will be used.
 @param delegate (UIViewController <VDDocumentCaptureProtocol>*) The instance to which the SDK will notify all its outputs.
 @param documents  (NSArray<VDDocument*>*) An array with the documents to search in the framework.
 @return (UIViewController) The UIViewController that is shown.
 */
+ (UIViewController*) startWithDelegate: (UIViewController <VDDocumentCaptureProtocol> *) delegate andDocuments:(NSArray<VDDocument*>*)documents;

/**
 @brief This method is needed to use the SDK. It programs the delegate to which the SDK will notify the outputs and sets the documents used by the SDK. If the documents provided is nil or not valid, all the available documents will be used.
 @param delegate (UIViewController <VDDocumentCaptureProtocol>*) The instance to which the SDK will notify all its outputs.
 @param documents  (NSArray<NSString*>*) An array with the document ids to search in the framework.
 @return (UIViewController) The UIViewController that is shown.
 */
+ (UIViewController*) startWithDelegate: (UIViewController <VDDocumentCaptureProtocol> *) delegate andDocumentIds: (NSArray<NSString*>*)documents;


/**
 @brief This method is needed to use the SDK. It programs the delegate to which the SDK will notify the outputs and sets the documents used by the SDK. If the documents provided is nil or not valid, all the available documents will be used.
 @param delegate (UIViewController <VDDocumentCaptureProtocol>*) The instance to which the SDK will notify all its outputs.
 @param documents  (NSArray<VDDocument*>*) An array with the documents to search in the framework.
 @param config (NSDictionary) The configuration of the SDK.
 @return (UIViewController) The UIViewController that is shown.
 */
+ (UIViewController*) startWithDelegate: (UIViewController <VDDocumentCaptureProtocol> *) delegate andDocuments:(NSArray<VDDocument*>*)documents andConfiguration:(NSDictionary*) config;

/**
 @brief This method is needed to use the SDK. It programs the delegate to which the SDK will notify the outputs and sets the documents used by the SDK. If the documents provided is nil or not valid, all the available documents will be used.
 @param delegate (UIViewController <VDDocumentCaptureProtocol>*) The instance to which the SDK will notify all its outputs.
 @param documents  (NSArray<NSString*>*) An array with the document ids to search in the framework.
 @param config (NSDictionary) The configuration of the SDK.
 @return (UIViewController) The UIViewController that is shown.
 */
+ (UIViewController*) startWithDelegate: (UIViewController <VDDocumentCaptureProtocol> *) delegate andDocumentIds:(NSArray<NSString*>*)documents andConfiguration: (NSDictionary*) config;

/**
 @brief This method is used to ask for the SDK’s configuration keys.
 @returns (NSArray *) An array which contains the SDK configuration keys.
 */
+ (NSArray*)getConfigurationKeys;

/**
 @brief This method is used to ask the SDK if it is already running
 @returns (BOOL) Whether the SDK is running or not
 */
+ (BOOL) isStarted;

/**
 @brief This method will stop the SDK and all its functionalities, so it needs to be started again. The SDK will not provide any more outputs after this method and the app flow will be given to the app.
 */
+ (void) stop;

/**
 @brief This method is used to ask the SDK for all the possible documents and receives a NSDictionary with them.
 @returns (NSDictionary<VDCountry *,NSArray<VDDocument *> *> *) Dictionary with all the possible documents for country availables.
 */
+ (NSDictionary<VDCountry *, NSArray<VDDocument *> *> *)  getDocumentsForCountryAvailable;
/**
 @brief This method is used to ask for the SDK’s version.
 @returns (NSString *) A string which contains the SDK version
 */
+ (NSString *) getVersion;

@end
